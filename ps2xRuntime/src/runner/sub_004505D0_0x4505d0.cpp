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

// Function: sub_004505D0
// Address: 0x4505d0 - 0x450848
void sub_004505D0_0x4505d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004505D0_0x4505d0");
#endif

    switch (ctx->pc) {
        case 0x450608u: goto label_450608;
        case 0x450634u: goto label_450634;
        case 0x450658u: goto label_450658;
        case 0x4506a0u: goto label_4506a0;
        case 0x4506d0u: goto label_4506d0;
        case 0x450730u: goto label_450730;
        case 0x45074cu: goto label_45074c;
        case 0x4507c8u: goto label_4507c8;
        default: break;
    }

    ctx->pc = 0x4505d0u;

    // 0x4505d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4505d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4505d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4505d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4505d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4505dc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4505dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4505e0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x4505e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x4505e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4505e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4505e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4505e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4505ec: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x4505ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4505f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4505f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4505f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4505f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4505f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4505f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4505fc: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x4505fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x450600: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x450600u;
    SET_GPR_U32(ctx, 31, 0x450608u);
    ctx->pc = 0x450604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450600u;
    // 0x450604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x450600u, 0x450608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450608u;
label_450608:
    // 0x450608: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45060c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x450610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450610u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x450614: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450618: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x450618u;
    {
        const bool branch_taken_0x450618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450618u;
        // 0x45061c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450618) {
            ctx->pc = 0x450674u;
            goto label_450674;
        }
    }
    ctx->pc = 0x450620u;
    // 0x450620: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x450620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x450624: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450628u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45062c: 0xf  sync
    ctx->pc = 0x45062cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450630: 0x40f  sync.p
    ctx->pc = 0x450630u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450634:
    // 0x450634: 0x0  nop
    ctx->pc = 0x450634u;
    // NOP
    // 0x450638: 0x0  nop
    ctx->pc = 0x450638u;
    // NOP
    // 0x45063c: 0x0  nop
    ctx->pc = 0x45063cu;
    // NOP
    // 0x450640: 0x0  nop
    ctx->pc = 0x450640u;
    // NOP
    // 0x450644: 0x0  nop
    ctx->pc = 0x450644u;
    // NOP
    // 0x450648: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450648u;
    {
        const bool branch_taken_0x450648 = (false);
        if (branch_taken_0x450648) {
            ctx->pc = 0x450634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450634;
        }
    }
    ctx->pc = 0x450650u;
    // 0x450650: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450654: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_450658:
    // 0x450658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450658u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45065c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45065cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450660: 0x0  nop
    ctx->pc = 0x450660u;
    // NOP
    // 0x450664: 0x0  nop
    ctx->pc = 0x450664u;
    // NOP
    // 0x450668: 0x0  nop
    ctx->pc = 0x450668u;
    // NOP
    // 0x45066c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45066Cu;
    {
        const bool branch_taken_0x45066c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45066c) {
            ctx->pc = 0x450658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450658;
        }
    }
    ctx->pc = 0x450674u;
label_450674:
    // 0x450674: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450678: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45067c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45067cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x450680: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450684: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450684u;
    {
        const bool branch_taken_0x450684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450684u;
        // 0x450688: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450684) {
            ctx->pc = 0x4506C0u;
            goto label_4506c0;
        }
    }
    ctx->pc = 0x45068Cu;
    // 0x45068c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450690: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450694: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450694u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450698: 0xf  sync
    ctx->pc = 0x450698u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45069c: 0x40f  sync.p
    ctx->pc = 0x45069cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4506a0:
    // 0x4506a0: 0x0  nop
    ctx->pc = 0x4506a0u;
    // NOP
    // 0x4506a4: 0x0  nop
    ctx->pc = 0x4506a4u;
    // NOP
    // 0x4506a8: 0x0  nop
    ctx->pc = 0x4506a8u;
    // NOP
    // 0x4506ac: 0x0  nop
    ctx->pc = 0x4506acu;
    // NOP
    // 0x4506b0: 0x0  nop
    ctx->pc = 0x4506b0u;
    // NOP
    // 0x4506b4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4506B4u;
    {
        const bool branch_taken_0x4506b4 = (false);
        if (branch_taken_0x4506b4) {
            ctx->pc = 0x4506A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4506a0;
        }
    }
    ctx->pc = 0x4506BCu;
    // 0x4506bc: 0x0  nop
    ctx->pc = 0x4506bcu;
    // NOP
label_4506c0:
    // 0x4506c0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4506c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4506c4: 0x2a050401  slti        $a1, $s0, 0x401
    ctx->pc = 0x4506c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x4506c8: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x4506c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x4506cc: 0x0  nop
    ctx->pc = 0x4506ccu;
    // NOP
label_4506d0:
    // 0x4506d0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x4506d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4506d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4506d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4506d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4506d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4506dc: 0x0  nop
    ctx->pc = 0x4506dcu;
    // NOP
    // 0x4506e0: 0x0  nop
    ctx->pc = 0x4506e0u;
    // NOP
    // 0x4506e4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4506E4u;
    {
        const bool branch_taken_0x4506e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4506E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4506E4u;
        // 0x4506e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4506e4) {
            ctx->pc = 0x4506D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4506d0;
        }
    }
    ctx->pc = 0x4506ECu;
    // 0x4506ec: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x4506ECu;
    {
        const bool branch_taken_0x4506ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4506ec) {
            ctx->pc = 0x450798u;
            goto label_450798;
        }
    }
    ctx->pc = 0x4506F4u;
    // 0x4506f4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4506f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x4506f8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x4506f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x4506fc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x4506fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x450700: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x450700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x450704: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x450704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x450708: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45070c: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x45070cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x450710: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x450710u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x450714: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x450714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450718: 0x34e7e010  ori         $a3, $a3, 0xE010
    ctx->pc = 0x450718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57360);
    // 0x45071c: 0x34c6d080  ori         $a2, $a2, 0xD080
    ctx->pc = 0x45071cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53376);
    // 0x450720: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x450720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x450724: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x450724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x450728: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x450728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x45072c: 0x0  nop
    ctx->pc = 0x45072cu;
    // NOP
label_450730:
    // 0x450730: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x450730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x450734: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450738: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x450738u;
    {
        const bool branch_taken_0x450738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450738) {
            ctx->pc = 0x450768u;
            goto label_450768;
        }
    }
    ctx->pc = 0x450740u;
    // 0x450740: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x450740u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x450744: 0xf  sync
    ctx->pc = 0x450744u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450748: 0x40f  sync.p
    ctx->pc = 0x450748u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45074c:
    // 0x45074c: 0x0  nop
    ctx->pc = 0x45074cu;
    // NOP
    // 0x450750: 0x0  nop
    ctx->pc = 0x450750u;
    // NOP
    // 0x450754: 0x0  nop
    ctx->pc = 0x450754u;
    // NOP
    // 0x450758: 0x0  nop
    ctx->pc = 0x450758u;
    // NOP
    // 0x45075c: 0x0  nop
    ctx->pc = 0x45075cu;
    // NOP
    // 0x450760: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450760u;
    {
        const bool branch_taken_0x450760 = (false);
        if (branch_taken_0x450760) {
            ctx->pc = 0x45074Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45074c;
        }
    }
    ctx->pc = 0x450768u;
label_450768:
    // 0x450768: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x450768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x45076c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x45076cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x450770: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x450770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x450774: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x450774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x450778: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x450778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x45077c: 0xac23d000  sw          $v1, -0x3000($at)
    ctx->pc = 0x45077cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x450780: 0xf  sync
    ctx->pc = 0x450780u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450784: 0x40f  sync.p
    ctx->pc = 0x450784u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450788: 0x2610fc00  addiu       $s0, $s0, -0x400
    ctx->pc = 0x450788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x45078c: 0x2a020401  slti        $v0, $s0, 0x401
    ctx->pc = 0x45078cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x450790: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x450790u;
    {
        const bool branch_taken_0x450790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450790u;
        // 0x450794: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450790) {
            ctx->pc = 0x450730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450730;
        }
    }
    ctx->pc = 0x450798u;
label_450798:
    // 0x450798: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x450798u;
    {
        const bool branch_taken_0x450798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x45079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450798u;
        // 0x45079c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450798) {
            ctx->pc = 0x450830u;
            goto label_450830;
        }
    }
    ctx->pc = 0x4507A0u;
    // 0x4507a0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4507a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4507a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4507a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x4507a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4507a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4507ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4507ACu;
    {
        const bool branch_taken_0x4507ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4507B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4507ACu;
        // 0x4507b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4507ac) {
            ctx->pc = 0x4507E8u;
            goto label_4507e8;
        }
    }
    ctx->pc = 0x4507B4u;
    // 0x4507b4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4507b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4507b8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4507b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4507bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4507bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4507c0: 0xf  sync
    ctx->pc = 0x4507c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4507c4: 0x40f  sync.p
    ctx->pc = 0x4507c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4507c8:
    // 0x4507c8: 0x0  nop
    ctx->pc = 0x4507c8u;
    // NOP
    // 0x4507cc: 0x0  nop
    ctx->pc = 0x4507ccu;
    // NOP
    // 0x4507d0: 0x0  nop
    ctx->pc = 0x4507d0u;
    // NOP
    // 0x4507d4: 0x0  nop
    ctx->pc = 0x4507d4u;
    // NOP
    // 0x4507d8: 0x0  nop
    ctx->pc = 0x4507d8u;
    // NOP
    // 0x4507dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4507DCu;
    {
        const bool branch_taken_0x4507dc = (false);
        if (branch_taken_0x4507dc) {
            ctx->pc = 0x4507C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4507c8;
        }
    }
    ctx->pc = 0x4507E4u;
    // 0x4507e4: 0x0  nop
    ctx->pc = 0x4507e4u;
    // NOP
label_4507e8:
    // 0x4507e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4507e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4507ec: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x4507ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4507f0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x4507f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x4507f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4507f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4507f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4507f8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x4507fc: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x4507fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x450800: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450804: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x450804u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x450808: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x450808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x45080c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450810: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x450810u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x450814: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x450814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x450818: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x450818u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x45081c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x45081cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x450820: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x450820u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x450824: 0xf  sync
    ctx->pc = 0x450824u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450828: 0x40f  sync.p
    ctx->pc = 0x450828u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45082c: 0x0  nop
    ctx->pc = 0x45082cu;
    // NOP
label_450830:
    // 0x450830: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x450830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x450834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450838: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x450838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45083c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450840: 0x3e00008  jr          $ra
    ctx->pc = 0x450840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450840u;
        // 0x450844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450848u;
}
