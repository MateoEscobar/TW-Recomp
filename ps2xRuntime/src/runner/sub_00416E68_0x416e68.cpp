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

// Function: sub_00416E68
// Address: 0x416e68 - 0x416ed0
void sub_00416E68_0x416e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416E68_0x416e68");
#endif

    switch (ctx->pc) {
        case 0x416e68u: goto label_416e68;
        case 0x416e6cu: goto label_416e6c;
        case 0x416e70u: goto label_416e70;
        case 0x416e74u: goto label_416e74;
        case 0x416e78u: goto label_416e78;
        case 0x416e7cu: goto label_416e7c;
        case 0x416e80u: goto label_416e80;
        case 0x416e84u: goto label_416e84;
        case 0x416e88u: goto label_416e88;
        case 0x416e8cu: goto label_416e8c;
        case 0x416e90u: goto label_416e90;
        case 0x416e94u: goto label_416e94;
        case 0x416e98u: goto label_416e98;
        case 0x416e9cu: goto label_416e9c;
        case 0x416ea0u: goto label_416ea0;
        case 0x416ea4u: goto label_416ea4;
        case 0x416ea8u: goto label_416ea8;
        case 0x416eacu: goto label_416eac;
        case 0x416eb0u: goto label_416eb0;
        case 0x416eb4u: goto label_416eb4;
        case 0x416eb8u: goto label_416eb8;
        case 0x416ebcu: goto label_416ebc;
        case 0x416ec0u: goto label_416ec0;
        case 0x416ec4u: goto label_416ec4;
        case 0x416ec8u: goto label_416ec8;
        case 0x416eccu: goto label_416ecc;
        default: break;
    }

    ctx->pc = 0x416e68u;

label_416e68:
    // 0x416e68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x416e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_416e6c:
    // 0x416e6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x416e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_416e70:
    // 0x416e70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x416e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_416e74:
    // 0x416e74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x416e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416e78:
    // 0x416e78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x416e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_416e7c:
    // 0x416e7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x416e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_416e80:
    // 0x416e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_416e84:
    // 0x416e84: 0x10000007  b           . + 4 + (0x7 << 2)
label_416e88:
    if (ctx->pc == 0x416E88u) {
        ctx->pc = 0x416E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E84u;
        // 0x416e88: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416E8Cu;
        goto label_416e8c;
    }
    ctx->pc = 0x416E84u;
    {
        const bool branch_taken_0x416e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E84u;
        // 0x416e88: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416e84) {
            ctx->pc = 0x416EA4u;
            goto label_416ea4;
        }
    }
    ctx->pc = 0x416E8Cu;
label_416e8c:
    // 0x416e8c: 0x0  nop
    ctx->pc = 0x416e8cu;
    // NOP
label_416e90:
    // 0x416e90: 0xc105774  jal         func_415DD0
label_416e94:
    if (ctx->pc == 0x416E94u) {
        ctx->pc = 0x416E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E90u;
        // 0x416e94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416E98u;
        goto label_416e98;
    }
    ctx->pc = 0x416E90u;
    SET_GPR_U32(ctx, 31, 0x416E98u);
    ctx->pc = 0x416E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416E90u;
    // 0x416e94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x416E90u, 0x416E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416E98u;
label_416e98:
    // 0x416e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x416e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416e9c:
    // 0x416e9c: 0x240f809  jalr        $s2
label_416ea0:
    if (ctx->pc == 0x416EA0u) {
        ctx->pc = 0x416EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E9Cu;
        // 0x416ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416EA4u;
        goto label_416ea4;
    }
    ctx->pc = 0x416E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x416EA4u);
        ctx->pc = 0x416EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E9Cu;
        // 0x416ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416E9Cu, 0x416EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416EA4u;
label_416ea4:
    // 0x416ea4: 0xc10574c  jal         func_415D30
label_416ea8:
    if (ctx->pc == 0x416EA8u) {
        ctx->pc = 0x416EACu;
        goto label_416eac;
    }
    ctx->pc = 0x416EA4u;
    SET_GPR_U32(ctx, 31, 0x416EACu);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x416EA4u, 0x416EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416EACu;
label_416eac:
    // 0x416eac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x416eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_416eb0:
    // 0x416eb0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_416eb4:
    if (ctx->pc == 0x416EB4u) {
        ctx->pc = 0x416EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416EB0u;
        // 0x416eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416EB8u;
        goto label_416eb8;
    }
    ctx->pc = 0x416EB0u;
    {
        const bool branch_taken_0x416eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416EB0u;
        // 0x416eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416eb0) {
            ctx->pc = 0x416E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_416e90;
        }
    }
    ctx->pc = 0x416EB8u;
label_416eb8:
    // 0x416eb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x416eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_416ebc:
    // 0x416ebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x416ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_416ec0:
    // 0x416ec0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x416ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416ec4:
    // 0x416ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_416ec8:
    // 0x416ec8: 0x3e00008  jr          $ra
label_416ecc:
    if (ctx->pc == 0x416ECCu) {
        ctx->pc = 0x416ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416EC8u;
        // 0x416ecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416ED0u;
        goto label_fallthrough_0x416ec8;
    }
    ctx->pc = 0x416EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416EC8u;
        // 0x416ecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x416ec8:
    ctx->pc = 0x416ED0u;
}
