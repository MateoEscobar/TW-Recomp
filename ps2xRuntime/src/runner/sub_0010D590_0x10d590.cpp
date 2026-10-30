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

// Function: sub_0010D590
// Address: 0x10d590 - 0x10d668
void sub_0010D590_0x10d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D590_0x10d590");
#endif

    switch (ctx->pc) {
        case 0x10d5d8u: goto label_10d5d8;
        case 0x10d5e4u: goto label_10d5e4;
        case 0x10d600u: goto label_10d600;
        default: break;
    }

    ctx->pc = 0x10d590u;

    // 0x10d590: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10d594: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x10d594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10d598: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x10d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x10d59c: 0x249000bd  addiu       $s0, $a0, 0xBD
    ctx->pc = 0x10d59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 189));
    // 0x10d5a0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x10d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x10d5a4: 0x2491009e  addiu       $s1, $a0, 0x9E
    ctx->pc = 0x10d5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 158));
    // 0x10d5a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x10d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x10d5ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10d5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10d5b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10d5b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5b8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x10d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x10d5bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10d5bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5c0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x10d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x10d5c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10d5c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5c8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x10d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x10d5cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x10d5ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d5d4: 0x24970020  addiu       $s7, $a0, 0x20
    ctx->pc = 0x10d5d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_10d5d8:
    // 0x10d5d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5dc: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x10D5DCu;
    SET_GPR_U32(ctx, 31, 0x10D5E4u);
    ctx->pc = 0x10D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5DCu;
    // 0x10d5e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x10D5DCu, 0x10D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5E4u;
label_10d5e4:
    // 0x10d5e4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10D5E4u;
    {
        const bool branch_taken_0x10d5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d5e4) {
            ctx->pc = 0x10D5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D5E4u;
            // 0x10d5e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D624u;
            goto label_10d624;
        }
    }
    ctx->pc = 0x10D5ECu;
    // 0x10d5ec: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x10d5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x10d5f0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D5F0u;
    {
        const bool branch_taken_0x10d5f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5F0u;
        // 0x10d5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5f0) {
            ctx->pc = 0x10D638u;
            goto label_10d638;
        }
    }
    ctx->pc = 0x10D5F8u;
    // 0x10d5f8: 0x2972021  addu        $a0, $s4, $s7
    ctx->pc = 0x10d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x10d5fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10d5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10d600:
    // 0x10d600: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10d600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10d608: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x10d608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x10d60c: 0xb2182b  sltu        $v1, $a1, $s2
    ctx->pc = 0x10d60cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x10d610: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10d610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10d614: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D614u;
    {
        const bool branch_taken_0x10d614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D614u;
        // 0x10d618: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d614) {
            ctx->pc = 0x10D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d600;
        }
    }
    ctx->pc = 0x10D61Cu;
    // 0x10d61c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10D61Cu;
    {
        const bool branch_taken_0x10d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D61Cu;
        // 0x10d620: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d61c) {
            ctx->pc = 0x10D63Cu;
            goto label_10d63c;
        }
    }
    ctx->pc = 0x10D624u;
label_10d624:
    // 0x10d624: 0x263100d0  addiu       $s1, $s1, 0xD0
    ctx->pc = 0x10d624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x10d628: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x10d628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x10d62c: 0x2e620200  sltiu       $v0, $s3, 0x200
    ctx->pc = 0x10d62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x10d630: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x10D630u;
    {
        const bool branch_taken_0x10d630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D630u;
        // 0x10d634: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d630) {
            ctx->pc = 0x10D5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d5d8;
        }
    }
    ctx->pc = 0x10D638u;
label_10d638:
    // 0x10d638: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x10d638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_10d63c:
    // 0x10d63c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x10d63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d640: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x10d640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d644: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x10d644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10d648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d64c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x10d64cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d650: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x10d650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d654: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x10d654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d65c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D65Cu;
        // 0x10d660: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D664u;
    // 0x10d664: 0x0  nop
    ctx->pc = 0x10d664u;
    // NOP
    ctx->pc = 0x10d668u;
}
