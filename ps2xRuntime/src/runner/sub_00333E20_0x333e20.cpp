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

// Function: sub_00333E20
// Address: 0x333e20 - 0x333ef8
void sub_00333E20_0x333e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333E20_0x333e20");
#endif

    switch (ctx->pc) {
        case 0x333e54u: goto label_333e54;
        case 0x333e78u: goto label_333e78;
        case 0x333ec0u: goto label_333ec0;
        case 0x333ed4u: goto label_333ed4;
        default: break;
    }

    ctx->pc = 0x333e20u;

    // 0x333e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333e24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x333e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x333e28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x333e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x333e2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x333e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x333e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e34: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x333e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x333e38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x333e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x333e3c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x333e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x333e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x333e44: 0x2624ffe0  addiu       $a0, $s1, -0x20
    ctx->pc = 0x333e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x333e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333e4c: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x333E4Cu;
    SET_GPR_U32(ctx, 31, 0x333E54u);
    ctx->pc = 0x333E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E4Cu;
    // 0x333e50: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x333E4Cu, 0x333E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E54u;
label_333e54:
    // 0x333e54: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x333e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x333e58: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x333e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x333e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333e60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x333e64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x333e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333e68: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x333E68u;
    {
        const bool branch_taken_0x333e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x333E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E68u;
        // 0x333e6c: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e68) {
            ctx->pc = 0x333EA4u;
            goto label_333ea4;
        }
    }
    ctx->pc = 0x333E70u;
    // 0x333e70: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x333E70u;
    SET_GPR_U32(ctx, 31, 0x333E78u);
    ctx->pc = 0x333E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E70u;
    // 0x333e74: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x333E70u, 0x333E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E78u;
label_333e78:
    // 0x333e78: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x333e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x333e7c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x333e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x333e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333e84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x333e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x333e88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x333e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333e8c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x333E8Cu;
    {
        const bool branch_taken_0x333e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x333e8c) {
            ctx->pc = 0x333E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333E8Cu;
            // 0x333e90: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333EA8u;
            goto label_333ea8;
        }
    }
    ctx->pc = 0x333E94u;
    // 0x333e94: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x333e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x333e98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x333e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333e9c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x333E9Cu;
    {
        const bool branch_taken_0x333e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x333EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E9Cu;
        // 0x333ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e9c) {
            ctx->pc = 0x333ED8u;
            goto label_333ed8;
        }
    }
    ctx->pc = 0x333EA4u;
label_333ea4:
    // 0x333ea4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x333ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_333ea8:
    // 0x333ea8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x333ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x333eac: 0x24426458  addiu       $v0, $v0, 0x6458
    ctx->pc = 0x333eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25688));
    // 0x333eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x333eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x333eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333eb8: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x333EB8u;
    SET_GPR_U32(ctx, 31, 0x333EC0u);
    ctx->pc = 0x333EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333EB8u;
    // 0x333ebc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x333EB8u, 0x333EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333EC0u;
label_333ec0:
    // 0x333ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x333ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ec8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x333ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333ecc: 0xc0ca2b4  jal         func_328AD0
    ctx->pc = 0x333ECCu;
    SET_GPR_U32(ctx, 31, 0x333ED4u);
    ctx->pc = 0x333ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333ECCu;
    // 0x333ed0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328AD0u, 0x333ECCu, 0x333ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333ED4u;
label_333ed4:
    // 0x333ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333ed8:
    // 0x333ed8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x333ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x333edc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x333edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333ee0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x333ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333ee4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x333ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333ee8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x333ee8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x333EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EF0u;
        // 0x333ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333EF8u;
}
