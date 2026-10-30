#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00450848
// Address: 0x450848 - 0x450ac0
void sub_00450848_0x450848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450848_0x450848");
#endif

    switch (ctx->pc) {
        case 0x450880u: goto label_450880;
        case 0x4508acu: goto label_4508ac;
        case 0x4508d0u: goto label_4508d0;
        case 0x450918u: goto label_450918;
        case 0x450948u: goto label_450948;
        case 0x4509a8u: goto label_4509a8;
        case 0x4509c4u: goto label_4509c4;
        case 0x450a40u: goto label_450a40;
        default: break;
    }

    ctx->pc = 0x450848u;

    // 0x450848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x450848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45084c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x450850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x450850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x450854: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x450854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x450858: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x450858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x45085c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x45085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x450860: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x450860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x450864: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x450864u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x450868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x450868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45086c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x450870: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x450870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450874: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x450874u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x450878: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x450878u;
    SET_GPR_U32(ctx, 31, 0x450880u);
    ctx->pc = 0x45087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450878u;
    // 0x45087c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x450878u, 0x450880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450880u;
label_450880:
    // 0x450880: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450884: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x450884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x450888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450888u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45088c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450890: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x450890u;
    {
        const bool branch_taken_0x450890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450890u;
        // 0x450894: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450890) {
            ctx->pc = 0x4508ECu;
            goto label_4508ec;
        }
    }
    ctx->pc = 0x450898u;
    // 0x450898: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x450898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45089c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4508a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4508a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4508a4: 0xf  sync
    ctx->pc = 0x4508a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4508a8: 0x40f  sync.p
    ctx->pc = 0x4508a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4508ac:
    // 0x4508ac: 0x0  nop
    ctx->pc = 0x4508acu;
    // NOP
    // 0x4508b0: 0x0  nop
    ctx->pc = 0x4508b0u;
    // NOP
    // 0x4508b4: 0x0  nop
    ctx->pc = 0x4508b4u;
    // NOP
    // 0x4508b8: 0x0  nop
    ctx->pc = 0x4508b8u;
    // NOP
    // 0x4508bc: 0x0  nop
    ctx->pc = 0x4508bcu;
    // NOP
    // 0x4508c0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4508C0u;
    {
        const bool branch_taken_0x4508c0 = (false);
        if (branch_taken_0x4508c0) {
            ctx->pc = 0x4508ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4508ac;
        }
    }
    ctx->pc = 0x4508C8u;
    // 0x4508c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4508c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4508cc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4508ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_4508d0:
    // 0x4508d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4508d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4508d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4508d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4508d8: 0x0  nop
    ctx->pc = 0x4508d8u;
    // NOP
    // 0x4508dc: 0x0  nop
    ctx->pc = 0x4508dcu;
    // NOP
    // 0x4508e0: 0x0  nop
    ctx->pc = 0x4508e0u;
    // NOP
    // 0x4508e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4508E4u;
    {
        const bool branch_taken_0x4508e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4508e4) {
            ctx->pc = 0x4508D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4508d0;
        }
    }
    ctx->pc = 0x4508ECu;
label_4508ec:
    // 0x4508ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4508ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4508f0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4508f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4508f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4508f4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4508f8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4508f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4508fc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4508FCu;
    {
        const bool branch_taken_0x4508fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4508FCu;
        // 0x450900: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4508fc) {
            ctx->pc = 0x450938u;
            goto label_450938;
        }
    }
    ctx->pc = 0x450904u;
    // 0x450904: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x450904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450908: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45090c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45090cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450910: 0xf  sync
    ctx->pc = 0x450910u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450914: 0x40f  sync.p
    ctx->pc = 0x450914u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450918:
    // 0x450918: 0x0  nop
    ctx->pc = 0x450918u;
    // NOP
    // 0x45091c: 0x0  nop
    ctx->pc = 0x45091cu;
    // NOP
    // 0x450920: 0x0  nop
    ctx->pc = 0x450920u;
    // NOP
    // 0x450924: 0x0  nop
    ctx->pc = 0x450924u;
    // NOP
    // 0x450928: 0x0  nop
    ctx->pc = 0x450928u;
    // NOP
    // 0x45092c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45092Cu;
    {
        const bool branch_taken_0x45092c = (false);
        if (branch_taken_0x45092c) {
            ctx->pc = 0x450918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450918;
        }
    }
    ctx->pc = 0x450934u;
    // 0x450934: 0x0  nop
    ctx->pc = 0x450934u;
    // NOP
label_450938:
    // 0x450938: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x450938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45093c: 0x2a050401  slti        $a1, $s0, 0x401
    ctx->pc = 0x45093cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x450940: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x450940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x450944: 0x0  nop
    ctx->pc = 0x450944u;
    // NOP
label_450948:
    // 0x450948: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x450948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45094c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x45094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x450950: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x450950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x450954: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x450954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x450958: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x450958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x45095c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x45095cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x450960: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x450960u;
    {
        const bool branch_taken_0x450960 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x450964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450960u;
        // 0x450964: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450960) {
            ctx->pc = 0x450948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450948;
        }
    }
    ctx->pc = 0x450968u;
    // 0x450968: 0x14a00029  bnez        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x450968u;
    {
        const bool branch_taken_0x450968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x450968) {
            ctx->pc = 0x450A10u;
            goto label_450a10;
        }
    }
    ctx->pc = 0x450970u;
    // 0x450970: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x450970u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x450974: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x450974u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x450978: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x450978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x45097c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x45097cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x450980: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x450980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x450984: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450988: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x450988u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x45098c: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x45098cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x450990: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x450990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450994: 0x34e7e010  ori         $a3, $a3, 0xE010
    ctx->pc = 0x450994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57360);
    // 0x450998: 0x34c6d080  ori         $a2, $a2, 0xD080
    ctx->pc = 0x450998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53376);
    // 0x45099c: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x45099cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x4509a0: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x4509a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x4509a4: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x4509a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_4509a8:
    // 0x4509a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4509a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4509ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4509acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4509b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4509B0u;
    {
        const bool branch_taken_0x4509b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4509b0) {
            ctx->pc = 0x4509E0u;
            goto label_4509e0;
        }
    }
    ctx->pc = 0x4509B8u;
    // 0x4509b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4509b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4509bc: 0xf  sync
    ctx->pc = 0x4509bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4509c0: 0x40f  sync.p
    ctx->pc = 0x4509c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4509c4:
    // 0x4509c4: 0x0  nop
    ctx->pc = 0x4509c4u;
    // NOP
    // 0x4509c8: 0x0  nop
    ctx->pc = 0x4509c8u;
    // NOP
    // 0x4509cc: 0x0  nop
    ctx->pc = 0x4509ccu;
    // NOP
    // 0x4509d0: 0x0  nop
    ctx->pc = 0x4509d0u;
    // NOP
    // 0x4509d4: 0x0  nop
    ctx->pc = 0x4509d4u;
    // NOP
    // 0x4509d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4509D8u;
    {
        const bool branch_taken_0x4509d8 = (false);
        if (branch_taken_0x4509d8) {
            ctx->pc = 0x4509C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4509c4;
        }
    }
    ctx->pc = 0x4509E0u;
label_4509e0:
    // 0x4509e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4509e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4509e4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4509e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4509e8: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x4509e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x4509ec: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x4509ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x4509f0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x4509f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x4509f4: 0xac23d000  sw          $v1, -0x3000($at)
    ctx->pc = 0x4509f4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x4509f8: 0xf  sync
    ctx->pc = 0x4509f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4509fc: 0x40f  sync.p
    ctx->pc = 0x4509fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450a00: 0x2610fc00  addiu       $s0, $s0, -0x400
    ctx->pc = 0x450a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x450a04: 0x2a020401  slti        $v0, $s0, 0x401
    ctx->pc = 0x450a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x450a08: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x450A08u;
    {
        const bool branch_taken_0x450a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450A08u;
        // 0x450a0c: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450a08) {
            ctx->pc = 0x4509A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4509a8;
        }
    }
    ctx->pc = 0x450A10u;
label_450a10:
    // 0x450a10: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x450A10u;
    {
        const bool branch_taken_0x450a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x450A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450A10u;
        // 0x450a14: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450a10) {
            ctx->pc = 0x450AA8u;
            goto label_450aa8;
        }
    }
    ctx->pc = 0x450A18u;
    // 0x450a18: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x450a1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x450a20: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450a24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450A24u;
    {
        const bool branch_taken_0x450a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450A24u;
        // 0x450a28: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450a24) {
            ctx->pc = 0x450A60u;
            goto label_450a60;
        }
    }
    ctx->pc = 0x450A2Cu;
    // 0x450a2c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x450a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450a30: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450a34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450a34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450a38: 0xf  sync
    ctx->pc = 0x450a38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450a3c: 0x40f  sync.p
    ctx->pc = 0x450a3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450a40:
    // 0x450a40: 0x0  nop
    ctx->pc = 0x450a40u;
    // NOP
    // 0x450a44: 0x0  nop
    ctx->pc = 0x450a44u;
    // NOP
    // 0x450a48: 0x0  nop
    ctx->pc = 0x450a48u;
    // NOP
    // 0x450a4c: 0x0  nop
    ctx->pc = 0x450a4cu;
    // NOP
    // 0x450a50: 0x0  nop
    ctx->pc = 0x450a50u;
    // NOP
    // 0x450a54: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450A54u;
    {
        const bool branch_taken_0x450a54 = (false);
        if (branch_taken_0x450a54) {
            ctx->pc = 0x450A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450a40;
        }
    }
    ctx->pc = 0x450A5Cu;
    // 0x450a5c: 0x0  nop
    ctx->pc = 0x450a5cu;
    // NOP
label_450a60:
    // 0x450a60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450a64: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x450a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450a68: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x450a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x450a6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450a70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x450a70u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x450a74: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x450a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x450a78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450a7c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x450a7cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x450a80: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x450a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x450a84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450a88: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x450a88u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x450a8c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x450a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x450a90: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x450a90u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x450a94: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x450a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x450a98: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x450a98u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x450a9c: 0xf  sync
    ctx->pc = 0x450a9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450aa0: 0x40f  sync.p
    ctx->pc = 0x450aa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450aa4: 0x0  nop
    ctx->pc = 0x450aa4u;
    // NOP
label_450aa8:
    // 0x450aa8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x450aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450aac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x450aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450ab0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x450ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x450ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x450AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450AB8u;
        // 0x450abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450AC0u;
}
