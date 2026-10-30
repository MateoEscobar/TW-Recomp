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

// Function: sub_00221670
// Address: 0x221670 - 0x2216c0
void sub_00221670_0x221670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221670_0x221670");
#endif

    switch (ctx->pc) {
        case 0x2216a8u: goto label_2216a8;
        case 0x2216b0u: goto label_2216b0;
        default: break;
    }

    ctx->pc = 0x221670u;

    // 0x221670: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x221670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x221674: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221678: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x221678u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5101E0u));
    // 0x22167c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22167Cu;
    {
        const bool branch_taken_0x22167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22167Cu;
        // 0x221680: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22167c) {
            ctx->pc = 0x2216A0u;
            goto label_2216a0;
        }
    }
    ctx->pc = 0x221684u;
    // 0x221684: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x221684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x221688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221688u;
    {
        const bool branch_taken_0x221688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221688) {
            ctx->pc = 0x2216A0u;
            goto label_2216a0;
        }
    }
    ctx->pc = 0x221690u;
    // 0x221690: 0xc48103a4  lwc1        $f1, 0x3A4($a0)
    ctx->pc = 0x221690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221694: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x221694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221698: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x221698u;
    {
        const bool branch_taken_0x221698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221698u;
        // 0x22169c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221698) {
            ctx->pc = 0x2216B4u;
            goto label_2216b4;
        }
    }
    ctx->pc = 0x2216A0u;
label_2216a0:
    // 0x2216a0: 0xc08a200  jal         func_228800
    ctx->pc = 0x2216A0u;
    SET_GPR_U32(ctx, 31, 0x2216A8u);
    ctx->pc = 0x2216A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216A0u;
    // 0x2216a4: 0x8c8400cc  lw          $a0, 0xCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2216A0u, 0x2216A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216A8u;
label_2216a8:
    // 0x2216a8: 0xc08a206  jal         func_228818
    ctx->pc = 0x2216A8u;
    SET_GPR_U32(ctx, 31, 0x2216B0u);
    ctx->pc = 0x2216ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216A8u;
    // 0x2216ac: 0x9044011c  lbu         $a0, 0x11C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x2216A8u, 0x2216B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216B0u;
label_2216b0:
    // 0x2216b0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2216b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2216b4:
    // 0x2216b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2216b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2216b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2216B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2216BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216B8u;
        // 0x2216bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2216B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2216C0u;
}
