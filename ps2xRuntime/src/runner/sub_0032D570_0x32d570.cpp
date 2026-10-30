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

// Function: sub_0032D570
// Address: 0x32d570 - 0x32d658
void sub_0032D570_0x32d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D570_0x32d570");
#endif

    switch (ctx->pc) {
        case 0x32d5b0u: goto label_32d5b0;
        case 0x32d5c4u: goto label_32d5c4;
        case 0x32d5fcu: goto label_32d5fc;
        case 0x32d630u: goto label_32d630;
        default: break;
    }

    ctx->pc = 0x32d570u;

    // 0x32d570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32d574: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32d578: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32d578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x32d57c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32d57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d580: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x32d580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x32d584: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32d584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d588: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32d58c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32d58cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d590: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32d590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32d594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d598: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x32d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x32d59c: 0x8e550028  lw          $s5, 0x28($s2)
    ctx->pc = 0x32d59cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x32d5a0: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x32d5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x32d5a4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32D5A4u;
    {
        const bool branch_taken_0x32d5a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x32D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5A4u;
        // 0x32d5a8: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5a4) {
            ctx->pc = 0x32D5D4u;
            goto label_32d5d4;
        }
    }
    ctx->pc = 0x32D5ACu;
    // 0x32d5ac: 0x2690002c  addiu       $s0, $s4, 0x2C
    ctx->pc = 0x32d5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_32d5b0:
    // 0x32d5b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32d5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d5bc: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32D5BCu;
    SET_GPR_U32(ctx, 31, 0x32D5C4u);
    ctx->pc = 0x32D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5BCu;
    // 0x32d5c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32D5BCu, 0x32D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5C4u;
label_32d5c4:
    // 0x32d5c4: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x32d5c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x32d5c8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32d5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32d5cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32D5CCu;
    {
        const bool branch_taken_0x32d5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5CCu;
        // 0x32d5d0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5cc) {
            ctx->pc = 0x32D5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d5b0;
        }
    }
    ctx->pc = 0x32D5D4u;
label_32d5d4:
    // 0x32d5d4: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x32d5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x32d5d8: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x32d5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x32d5dc: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x32d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x32d5e0: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x32d5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x32d5e4: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x32d5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32d5e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32d5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d5ec: 0x25295c18  addiu       $t1, $t1, 0x5C18
    ctx->pc = 0x32d5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23576));
    // 0x32d5f0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x32d5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d5f4: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x32D5F4u;
    SET_GPR_U32(ctx, 31, 0x32D5FCu);
    ctx->pc = 0x32D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5F4u;
    // 0x32d5f8: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x32D5F4u, 0x32D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5FCu;
label_32d5fc:
    // 0x32d5fc: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x32d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x32d600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32d600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d604: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x32d604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x32d608: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32d608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32d60c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x32d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x32d610: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x32d610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32d614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32d614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32d618: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32d618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32d61c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32d620: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x32d620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x32d624: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x32d624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x32d628: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x32D628u;
    SET_GPR_U32(ctx, 31, 0x32D630u);
    ctx->pc = 0x32D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D628u;
    // 0x32d62c: 0x86870020  lh          $a3, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x32D628u, 0x32D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D630u;
label_32d630:
    // 0x32d630: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32d630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32d634: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32d634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32d638: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32d638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d63c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32d63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d640: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x32d640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d644: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x32d644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D64Cu;
        // 0x32d650: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D654u;
    // 0x32d654: 0x0  nop
    ctx->pc = 0x32d654u;
    // NOP
    ctx->pc = 0x32d658u;
}
