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

// Function: sub_004E64D0
// Address: 0x4e64d0 - 0x4e65d8
void sub_004E64D0_0x4e64d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E64D0_0x4e64d0");
#endif

    switch (ctx->pc) {
        case 0x4e6510u: goto label_4e6510;
        case 0x4e652cu: goto label_4e652c;
        case 0x4e653cu: goto label_4e653c;
        case 0x4e6544u: goto label_4e6544;
        case 0x4e6550u: goto label_4e6550;
        case 0x4e6580u: goto label_4e6580;
        case 0x4e659cu: goto label_4e659c;
        default: break;
    }

    ctx->pc = 0x4e64d0u;

    // 0x4e64d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e64d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4e64d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e64d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4e64d8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4e64d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4e64dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e64dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e64e0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4e64e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4e64e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4e64e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e64e8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4e64e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4e64ec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4e64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4e64f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4e64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4e64f4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4e64f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4e64f8: 0x1295002c  beq         $s4, $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x4E64F8u;
    {
        const bool branch_taken_0x4e64f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x4E64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E64F8u;
        // 0x4e64fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e64f8) {
            ctx->pc = 0x4E65ACu;
            goto label_4e65ac;
        }
    }
    ctx->pc = 0x4E6500u;
    // 0x4e6500: 0x26920004  addiu       $s2, $s4, 0x4
    ctx->pc = 0x4e6500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4e6504: 0x12550029  beq         $s2, $s5, . + 4 + (0x29 << 2)
    ctx->pc = 0x4E6504u;
    {
        const bool branch_taken_0x4e6504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x4E6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6504u;
        // 0x4e6508: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6504) {
            ctx->pc = 0x4E65ACu;
            goto label_4e65ac;
        }
    }
    ctx->pc = 0x4E650Cu;
    // 0x4e650c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x4e650cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e6510:
    // 0x4e6510: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e6510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6514: 0x8ed0489c  lw          $s0, 0x489C($s6)
    ctx->pc = 0x4e6514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    // 0x4e6518: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e6518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e651c: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e651cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e6520: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4e6520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6524: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6524u;
    SET_GPR_U32(ctx, 31, 0x4E652Cu);
    ctx->pc = 0x4E6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6524u;
    // 0x4e6528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6524u, 0x4E652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E652Cu;
label_4e652c:
    // 0x4e652c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e652cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6534: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6534u;
    SET_GPR_U32(ctx, 31, 0x4E653Cu);
    ctx->pc = 0x4E6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6534u;
    // 0x4e6538: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6534u, 0x4E653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E653Cu;
label_4e653c:
    // 0x4e653c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E653Cu;
    SET_GPR_U32(ctx, 31, 0x4E6544u);
    ctx->pc = 0x4E6540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E653Cu;
    // 0x4e6540: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E653Cu, 0x4E6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6544u;
label_4e6544:
    // 0x4e6544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6548: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6548u;
    SET_GPR_U32(ctx, 31, 0x4E6550u);
    ctx->pc = 0x4E654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6548u;
    // 0x4e654c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6548u, 0x4E6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6550u;
label_4e6550:
    // 0x4e6550: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e6554: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e6554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e6558: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e6558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e655c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E655Cu;
    {
        const bool branch_taken_0x4e655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E655Cu;
        // 0x4e6560: 0x2542023  subu        $a0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e655c) {
            ctx->pc = 0x4E658Cu;
            goto label_4e658c;
        }
    }
    ctx->pc = 0x4E6564u;
    // 0x4e6564: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x4e6564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4e6568: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4e6568u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4e656c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6570: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e6570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4e6574: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4e6574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6578: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x4E6578u;
    SET_GPR_U32(ctx, 31, 0x4E6580u);
    ctx->pc = 0x4E657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6578u;
    // 0x4e657c: 0x2042023  subu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E6578u, 0x4E6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6580u;
label_4e6580:
    // 0x4e6580: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x4e6580u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x4e6584: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E6584u;
    {
        const bool branch_taken_0x4e6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6584u;
        // 0x4e6588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6584) {
            ctx->pc = 0x4E65A0u;
            goto label_4e65a0;
        }
    }
    ctx->pc = 0x4E658Cu;
label_4e658c:
    // 0x4e658c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6590: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e6590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6594: 0xc139904  jal         func_4E6410
    ctx->pc = 0x4E6594u;
    SET_GPR_U32(ctx, 31, 0x4E659Cu);
    ctx->pc = 0x4E6598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6594u;
    // 0x4e6598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6410u, 0x4E6594u, 0x4E659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E659Cu;
label_4e659c:
    // 0x4e659c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4e659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4e65a0:
    // 0x4e65a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e65a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e65a4: 0x5655ffda  bnel        $s2, $s5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x4E65A4u;
    {
        const bool branch_taken_0x4e65a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x4e65a4) {
            ctx->pc = 0x4E65A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E65A4u;
            // 0x4e65a8: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6510;
        }
    }
    ctx->pc = 0x4E65ACu;
label_4e65ac:
    // 0x4e65ac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4e65acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e65b0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4e65b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e65b4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4e65b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e65b8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4e65b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e65bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e65bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e65c0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4e65c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e65c4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4e65c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e65c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e65c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e65cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E65CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E65CCu;
        // 0x4e65d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E65CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E65D4u;
    // 0x4e65d4: 0x0  nop
    ctx->pc = 0x4e65d4u;
    // NOP
    ctx->pc = 0x4e65d8u;
}
