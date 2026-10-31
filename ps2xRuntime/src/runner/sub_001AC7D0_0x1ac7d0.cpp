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

// Function: sub_001AC7D0
// Address: 0x1ac7d0 - 0x1ac828
void sub_001AC7D0_0x1ac7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC7D0_0x1ac7d0");
#endif

    switch (ctx->pc) {
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        default: break;
    }

    ctx->pc = 0x1ac7d0u;

label_1ac7d0:
    // 0x1ac7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac7d4:
    // 0x1ac7d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac7d8:
    // 0x1ac7d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ac7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ac7dc:
    // 0x1ac7dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ac7e0:
    // 0x1ac7e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7e4:
    // 0x1ac7e4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1ac7e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1ac7e8:
    // 0x1ac7e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1ac7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1ac7ec:
    // 0x1ac7ec: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1ac7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1ac7f0:
    // 0x1ac7f0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1ac7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1ac7f4:
    // 0x1ac7f4: 0x40f809  jalr        $v0
label_1ac7f8:
    if (ctx->pc == 0x1AC7F8u) {
        ctx->pc = 0x1AC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F4u;
        // 0x1ac7f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7FCu;
        goto label_1ac7fc;
    }
    ctx->pc = 0x1AC7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC7FCu);
        ctx->pc = 0x1AC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F4u;
        // 0x1ac7f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC7F4u, 0x1AC7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC7FCu;
label_1ac7fc:
    // 0x1ac7fc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1ac7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac800:
    // 0x1ac800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ac800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac804:
    // 0x1ac804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac808:
    // 0x1ac808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ac808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ac80c:
    // 0x1ac80c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ac80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ac810:
    // 0x1ac810: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1ac810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac814:
    // 0x1ac814: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1ac814u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1ac818:
    // 0x1ac818: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ac818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac81c:
    // 0x1ac81c: 0x3e00008  jr          $ra
label_1ac820:
    if (ctx->pc == 0x1AC820u) {
        ctx->pc = 0x1AC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC81Cu;
        // 0x1ac820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC824u;
        goto label_1ac824;
    }
    ctx->pc = 0x1AC81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC81Cu;
        // 0x1ac820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC824u;
label_1ac824:
    // 0x1ac824: 0x0  nop
    ctx->pc = 0x1ac824u;
    // NOP
    ctx->pc = 0x1ac828u;
}
