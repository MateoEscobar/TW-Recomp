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

// Function: sub_00450048
// Address: 0x450048 - 0x450320
void sub_00450048_0x450048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450048_0x450048");
#endif

    switch (ctx->pc) {
        case 0x45008cu: goto label_45008c;
        case 0x4500b8u: goto label_4500b8;
        case 0x450108u: goto label_450108;
        case 0x450130u: goto label_450130;
        case 0x450168u: goto label_450168;
        case 0x4501c8u: goto label_4501c8;
        case 0x4501e4u: goto label_4501e4;
        case 0x450260u: goto label_450260;
        case 0x4502e8u: goto label_4502e8;
        default: break;
    }

    ctx->pc = 0x450048u;

    // 0x450048: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x450048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45004c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45004cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x450050: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x450050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x450054: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x450054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x450058: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x450058u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x45005c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x45005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x450060: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x450060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x450064: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x450064u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x450068: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x450068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x45006c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x45006cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x450070: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x450070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x450074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x450074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45007c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x45007cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x450080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450084: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x450084u;
    SET_GPR_U32(ctx, 31, 0x45008Cu);
    ctx->pc = 0x450088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450084u;
    // 0x450088: 0xa29823  subu        $s3, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x450084u, 0x45008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45008Cu;
label_45008c:
    // 0x45008c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450090: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x450094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450094u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x450098: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45009c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45009Cu;
    {
        const bool branch_taken_0x45009c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4500A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45009Cu;
        // 0x4500a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45009c) {
            ctx->pc = 0x4500D8u;
            goto label_4500d8;
        }
    }
    ctx->pc = 0x4500A4u;
    // 0x4500a4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4500a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4500a8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4500a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4500ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4500acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4500b0: 0xf  sync
    ctx->pc = 0x4500b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4500b4: 0x40f  sync.p
    ctx->pc = 0x4500b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4500b8:
    // 0x4500b8: 0x0  nop
    ctx->pc = 0x4500b8u;
    // NOP
    // 0x4500bc: 0x0  nop
    ctx->pc = 0x4500bcu;
    // NOP
    // 0x4500c0: 0x0  nop
    ctx->pc = 0x4500c0u;
    // NOP
    // 0x4500c4: 0x0  nop
    ctx->pc = 0x4500c4u;
    // NOP
    // 0x4500c8: 0x0  nop
    ctx->pc = 0x4500c8u;
    // NOP
    // 0x4500cc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4500CCu;
    {
        const bool branch_taken_0x4500cc = (false);
        if (branch_taken_0x4500cc) {
            ctx->pc = 0x4500B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4500b8;
        }
    }
    ctx->pc = 0x4500D4u;
    // 0x4500d4: 0x0  nop
    ctx->pc = 0x4500d4u;
    // NOP
label_4500d8:
    // 0x4500d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4500d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4500dc: 0x2a250401  slti        $a1, $s1, 0x401
    ctx->pc = 0x4500dcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x4500e0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4500e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x4500e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4500e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4500e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4500e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4500ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4500ECu;
    {
        const bool branch_taken_0x4500ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4500F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4500ECu;
        // 0x4500f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4500ec) {
            ctx->pc = 0x45014Cu;
            goto label_45014c;
        }
    }
    ctx->pc = 0x4500F4u;
    // 0x4500f4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x4500f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4500f8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4500f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4500fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4500fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450100: 0xf  sync
    ctx->pc = 0x450100u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450104: 0x40f  sync.p
    ctx->pc = 0x450104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450108:
    // 0x450108: 0x0  nop
    ctx->pc = 0x450108u;
    // NOP
    // 0x45010c: 0x0  nop
    ctx->pc = 0x45010cu;
    // NOP
    // 0x450110: 0x0  nop
    ctx->pc = 0x450110u;
    // NOP
    // 0x450114: 0x0  nop
    ctx->pc = 0x450114u;
    // NOP
    // 0x450118: 0x0  nop
    ctx->pc = 0x450118u;
    // NOP
    // 0x45011c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45011Cu;
    {
        const bool branch_taken_0x45011c = (false);
        if (branch_taken_0x45011c) {
            ctx->pc = 0x450108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450108;
        }
    }
    ctx->pc = 0x450124u;
    // 0x450124: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450128: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45012c: 0x0  nop
    ctx->pc = 0x45012cu;
    // NOP
label_450130:
    // 0x450130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450130u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x450134: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450138: 0x0  nop
    ctx->pc = 0x450138u;
    // NOP
    // 0x45013c: 0x0  nop
    ctx->pc = 0x45013cu;
    // NOP
    // 0x450140: 0x0  nop
    ctx->pc = 0x450140u;
    // NOP
    // 0x450144: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x450144u;
    {
        const bool branch_taken_0x450144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450144) {
            ctx->pc = 0x450130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450130;
        }
    }
    ctx->pc = 0x45014Cu;
label_45014c:
    // 0x45014c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x45014cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x450150: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x450150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x450154: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x450154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x450158: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x450158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x45015c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x45015cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x450160: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x450160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x450164: 0x0  nop
    ctx->pc = 0x450164u;
    // NOP
label_450168:
    // 0x450168: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x450168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45016c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x45016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x450170: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x450170u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x450174: 0x0  nop
    ctx->pc = 0x450174u;
    // NOP
    // 0x450178: 0x0  nop
    ctx->pc = 0x450178u;
    // NOP
    // 0x45017c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45017Cu;
    {
        const bool branch_taken_0x45017c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x450180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45017Cu;
        // 0x450180: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45017c) {
            ctx->pc = 0x450168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450168;
        }
    }
    ctx->pc = 0x450184u;
    // 0x450184: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x450184u;
    {
        const bool branch_taken_0x450184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x450184) {
            ctx->pc = 0x450230u;
            goto label_450230;
        }
    }
    ctx->pc = 0x45018Cu;
    // 0x45018c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45018cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x450190: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x450190u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x450194: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x450194u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x450198: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x450198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x45019c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x45019cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4501a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4501a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4501a4: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x4501a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x4501a8: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x4501a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x4501ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4501acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4501b0: 0x34e7e010  ori         $a3, $a3, 0xE010
    ctx->pc = 0x4501b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57360);
    // 0x4501b4: 0x34c6d080  ori         $a2, $a2, 0xD080
    ctx->pc = 0x4501b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53376);
    // 0x4501b8: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x4501b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x4501bc: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x4501bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x4501c0: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x4501c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4501c4: 0x0  nop
    ctx->pc = 0x4501c4u;
    // NOP
label_4501c8:
    // 0x4501c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4501c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4501cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4501ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4501d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4501D0u;
    {
        const bool branch_taken_0x4501d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4501d0) {
            ctx->pc = 0x450200u;
            goto label_450200;
        }
    }
    ctx->pc = 0x4501D8u;
    // 0x4501d8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4501d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4501dc: 0xf  sync
    ctx->pc = 0x4501dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4501e0: 0x40f  sync.p
    ctx->pc = 0x4501e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4501e4:
    // 0x4501e4: 0x0  nop
    ctx->pc = 0x4501e4u;
    // NOP
    // 0x4501e8: 0x0  nop
    ctx->pc = 0x4501e8u;
    // NOP
    // 0x4501ec: 0x0  nop
    ctx->pc = 0x4501ecu;
    // NOP
    // 0x4501f0: 0x0  nop
    ctx->pc = 0x4501f0u;
    // NOP
    // 0x4501f4: 0x0  nop
    ctx->pc = 0x4501f4u;
    // NOP
    // 0x4501f8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4501F8u;
    {
        const bool branch_taken_0x4501f8 = (false);
        if (branch_taken_0x4501f8) {
            ctx->pc = 0x4501E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4501e4;
        }
    }
    ctx->pc = 0x450200u;
label_450200:
    // 0x450200: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x450200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x450204: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x450204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x450208: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x450208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x45020c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x45020cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x450210: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x450210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x450214: 0xac23d000  sw          $v1, -0x3000($at)
    ctx->pc = 0x450214u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x450218: 0xf  sync
    ctx->pc = 0x450218u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45021c: 0x40f  sync.p
    ctx->pc = 0x45021cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450220: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x450220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x450224: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x450224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x450228: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x450228u;
    {
        const bool branch_taken_0x450228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450228u;
        // 0x45022c: 0x26104000  addiu       $s0, $s0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450228) {
            ctx->pc = 0x4501C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4501c8;
        }
    }
    ctx->pc = 0x450230u;
label_450230:
    // 0x450230: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x450230u;
    {
        const bool branch_taken_0x450230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x450234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450230u;
        // 0x450234: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450230) {
            ctx->pc = 0x4502D0u;
            goto label_4502d0;
        }
    }
    ctx->pc = 0x450238u;
    // 0x450238: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45023c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45023cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x450240: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450244: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450244u;
    {
        const bool branch_taken_0x450244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450244u;
        // 0x450248: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450244) {
            ctx->pc = 0x450280u;
            goto label_450280;
        }
    }
    ctx->pc = 0x45024Cu;
    // 0x45024c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450250: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450254: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450254u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450258: 0xf  sync
    ctx->pc = 0x450258u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45025c: 0x40f  sync.p
    ctx->pc = 0x45025cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450260:
    // 0x450260: 0x0  nop
    ctx->pc = 0x450260u;
    // NOP
    // 0x450264: 0x0  nop
    ctx->pc = 0x450264u;
    // NOP
    // 0x450268: 0x0  nop
    ctx->pc = 0x450268u;
    // NOP
    // 0x45026c: 0x0  nop
    ctx->pc = 0x45026cu;
    // NOP
    // 0x450270: 0x0  nop
    ctx->pc = 0x450270u;
    // NOP
    // 0x450274: 0x0  nop
    ctx->pc = 0x450274u;
    // NOP
    // 0x450278: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x450278u;
    {
        const bool branch_taken_0x450278 = (false);
        if (branch_taken_0x450278) {
            ctx->pc = 0x450260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450260;
        }
    }
    ctx->pc = 0x450280u;
label_450280:
    // 0x450280: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450284: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x450284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450288: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x450288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45028c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45028cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450290: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x450290u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x450294: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x450294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x450298: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45029c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45029cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x4502a0: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x4502a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x4502a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4502a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4502a8: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x4502a8u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x4502ac: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x4502acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x4502b0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x4502b0u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x4502b4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x4502b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x4502b8: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x4502b8u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x4502bc: 0xf  sync
    ctx->pc = 0x4502bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4502c0: 0x40f  sync.p
    ctx->pc = 0x4502c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4502c4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x4502c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x4502c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4502c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4502cc: 0x0  nop
    ctx->pc = 0x4502ccu;
    // NOP
label_4502d0:
    // 0x4502d0: 0x5260000d  beql        $s3, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4502D0u;
    {
        const bool branch_taken_0x4502d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4502d0) {
            ctx->pc = 0x4502D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4502D0u;
            // 0x4502d4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x450308u;
            goto label_450308;
        }
    }
    ctx->pc = 0x4502D8u;
    // 0x4502d8: 0x5a60000b  blezl       $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x4502D8u;
    {
        const bool branch_taken_0x4502d8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x4502d8) {
            ctx->pc = 0x4502DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4502D8u;
            // 0x4502dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x450308u;
            goto label_450308;
        }
    }
    ctx->pc = 0x4502E0u;
    // 0x4502e0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x4502e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4502e4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4502e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_4502e8:
    // 0x4502e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4502e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x70000000
    // 0x4502ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4502ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4502f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4502f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4502f4: 0x0  nop
    ctx->pc = 0x4502f4u;
    // NOP
    // 0x4502f8: 0x0  nop
    ctx->pc = 0x4502f8u;
    // NOP
    // 0x4502fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4502FCu;
    {
        const bool branch_taken_0x4502fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x450300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4502FCu;
        // 0x450300: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4502fc) {
            ctx->pc = 0x4502E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4502e8;
        }
    }
    ctx->pc = 0x450304u;
    // 0x450304: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x450304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_450308:
    // 0x450308: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x450308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45030c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45030cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450310: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x450310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x450314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450318: 0x3e00008  jr          $ra
    ctx->pc = 0x450318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450318u;
        // 0x45031c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450320u;
}
