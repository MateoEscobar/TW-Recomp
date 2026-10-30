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

// Function: sub_002A9E40
// Address: 0x2a9e40 - 0x2a9eb8
void sub_002A9E40_0x2a9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9E40_0x2a9e40");
#endif

    switch (ctx->pc) {
        case 0x2a9e70u: goto label_2a9e70;
        case 0x2a9e9cu: goto label_2a9e9c;
        default: break;
    }

    ctx->pc = 0x2a9e40u;

    // 0x2a9e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9e48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a9e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a9e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9e54: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2a9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2a9e58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A9E58u;
    {
        const bool branch_taken_0x2a9e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E58u;
        // 0x2a9e5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e58) {
            ctx->pc = 0x2A9EA4u;
            goto label_2a9ea4;
        }
    }
    ctx->pc = 0x2A9E60u;
    // 0x2a9e60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a9e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e68: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x2A9E68u;
    SET_GPR_U32(ctx, 31, 0x2A9E70u);
    ctx->pc = 0x2A9E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E68u;
    // 0x2a9e6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2A9E68u, 0x2A9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E70u;
label_2a9e70:
    // 0x2a9e70: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2a9e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2a9e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e78: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2a9e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2a9e7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2a9e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2a9e80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a9e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a9e84: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2a9e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2a9e88: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a9e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a9e8c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a9e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2a9e90: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2a9e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2a9e94: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x2A9E94u;
    SET_GPR_U32(ctx, 31, 0x2A9E9Cu);
    ctx->pc = 0x2A9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E94u;
    // 0x2a9e98: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x2A9E94u, 0x2A9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E9Cu;
label_2a9e9c:
    // 0x2a9e9c: 0xa2220030  sb          $v0, 0x30($s1)
    ctx->pc = 0x2a9e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9ea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a9ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9ea4:
    // 0x2a9ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9eac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EACu;
        // 0x2a9eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9EB4u;
    // 0x2a9eb4: 0x0  nop
    ctx->pc = 0x2a9eb4u;
    // NOP
    ctx->pc = 0x2a9eb8u;
}
