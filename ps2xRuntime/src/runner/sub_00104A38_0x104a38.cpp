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

// Function: sub_00104A38
// Address: 0x104a38 - 0x104ac8
void sub_00104A38_0x104a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A38_0x104a38");
#endif

    switch (ctx->pc) {
        case 0x104a54u: goto label_104a54;
        case 0x104a74u: goto label_104a74;
        case 0x104a94u: goto label_104a94;
        default: break;
    }

    ctx->pc = 0x104a38u;

    // 0x104a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104a3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x104a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x104a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x104a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x104a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104a4c: 0xc095388  jal         func_254E20
    ctx->pc = 0x104A4Cu;
    SET_GPR_U32(ctx, 31, 0x104A54u);
    ctx->pc = 0x104A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A4Cu;
    // 0x104a50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E20u, 0x104A4Cu, 0x104A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A54u;
label_104a54:
    // 0x104a54: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x104a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x104a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104A58u;
    {
        const bool branch_taken_0x104a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A58u;
        // 0x104a5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a58) {
            ctx->pc = 0x104A68u;
            goto label_104a68;
        }
    }
    ctx->pc = 0x104A60u;
    // 0x104a60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x104A60u;
    {
        const bool branch_taken_0x104a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A60u;
        // 0x104a64: 0xc4400264  lwc1        $f0, 0x264($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a60) {
            ctx->pc = 0x104AB0u;
            goto label_104ab0;
        }
    }
    ctx->pc = 0x104A68u;
label_104a68:
    // 0x104a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a6c: 0xc095388  jal         func_254E20
    ctx->pc = 0x104A6Cu;
    SET_GPR_U32(ctx, 31, 0x104A74u);
    ctx->pc = 0x104A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A6Cu;
    // 0x104a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E20u, 0x104A6Cu, 0x104A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A74u;
label_104a74:
    // 0x104a74: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x104a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x104a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104A78u;
    {
        const bool branch_taken_0x104a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A78u;
        // 0x104a7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a78) {
            ctx->pc = 0x104A88u;
            goto label_104a88;
        }
    }
    ctx->pc = 0x104A80u;
    // 0x104a80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104A80u;
    {
        const bool branch_taken_0x104a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A80u;
        // 0x104a84: 0xc4400268  lwc1        $f0, 0x268($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a80) {
            ctx->pc = 0x104AB0u;
            goto label_104ab0;
        }
    }
    ctx->pc = 0x104A88u;
label_104a88:
    // 0x104a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a8c: 0xc095388  jal         func_254E20
    ctx->pc = 0x104A8Cu;
    SET_GPR_U32(ctx, 31, 0x104A94u);
    ctx->pc = 0x104A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A8Cu;
    // 0x104a90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E20u, 0x104A8Cu, 0x104A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A94u;
label_104a94:
    // 0x104a94: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x104a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x104a98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104A98u;
    {
        const bool branch_taken_0x104a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A98u;
        // 0x104a9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a98) {
            ctx->pc = 0x104AACu;
            goto label_104aac;
        }
    }
    ctx->pc = 0x104AA0u;
    // 0x104aa0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x104aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x104aa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104AA4u;
    {
        const bool branch_taken_0x104aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AA4u;
        // 0x104aa8: 0xc4400260  lwc1        $f0, 0x260($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104aa4) {
            ctx->pc = 0x104AB0u;
            goto label_104ab0;
        }
    }
    ctx->pc = 0x104AACu;
label_104aac:
    // 0x104aac: 0xc440026c  lwc1        $f0, 0x26C($v0)
    ctx->pc = 0x104aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_104ab0:
    // 0x104ab0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x104ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x104ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104abc: 0x3e00008  jr          $ra
    ctx->pc = 0x104ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ABCu;
        // 0x104ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104AC4u;
    // 0x104ac4: 0x0  nop
    ctx->pc = 0x104ac4u;
    // NOP
    ctx->pc = 0x104ac8u;
}
