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

// Function: sub_003A42D8
// Address: 0x3a42d8 - 0x3a4328
void sub_003A42D8_0x3a42d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A42D8_0x3a42d8");
#endif

    switch (ctx->pc) {
        case 0x3a42d8u: goto label_3a42d8;
        case 0x3a42dcu: goto label_3a42dc;
        case 0x3a42e0u: goto label_3a42e0;
        case 0x3a42e4u: goto label_3a42e4;
        case 0x3a42e8u: goto label_3a42e8;
        case 0x3a42ecu: goto label_3a42ec;
        case 0x3a42f0u: goto label_3a42f0;
        case 0x3a42f4u: goto label_3a42f4;
        case 0x3a42f8u: goto label_3a42f8;
        case 0x3a42fcu: goto label_3a42fc;
        case 0x3a4300u: goto label_3a4300;
        case 0x3a4304u: goto label_3a4304;
        case 0x3a4308u: goto label_3a4308;
        case 0x3a430cu: goto label_3a430c;
        case 0x3a4310u: goto label_3a4310;
        case 0x3a4314u: goto label_3a4314;
        case 0x3a4318u: goto label_3a4318;
        case 0x3a431cu: goto label_3a431c;
        case 0x3a4320u: goto label_3a4320;
        case 0x3a4324u: goto label_3a4324;
        default: break;
    }

    ctx->pc = 0x3a42d8u;

label_3a42d8:
    // 0x3a42d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a42d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a42dc:
    // 0x3a42dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3a42e0:
    // 0x3a42e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a42e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a42e4:
    // 0x3a42e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a42e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a42e8:
    // 0x3a42e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a42ec:
    // 0x3a42ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a42f0:
    // 0x3a42f0: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x3a42f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a42f4:
    // 0x3a42f4: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x3a42f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a42f8:
    // 0x3a42f8: 0xc0f809  jalr        $a2
label_3a42fc:
    if (ctx->pc == 0x3A42FCu) {
        ctx->pc = 0x3A42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42F8u;
        // 0x3a42fc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4300u;
        goto label_3a4300;
    }
    ctx->pc = 0x3A42F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3A4300u);
        ctx->pc = 0x3A42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42F8u;
        // 0x3a42fc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A42F8u, 0x3A4300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A4300u;
label_3a4300:
    // 0x3a4300: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3a4300u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4304:
    // 0x3a4304: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4308:
    // 0x3a4308: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3a4308u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a430c:
    // 0x3a430c: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x3a430cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
label_3a4310:
    // 0x3a4310: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a4310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a4314:
    // 0x3a4314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a4314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a4318:
    // 0x3a4318: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3a431c:
    // 0x3a431c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3a431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3a4320:
    // 0x3a4320: 0x3e00008  jr          $ra
label_3a4324:
    if (ctx->pc == 0x3A4324u) {
        ctx->pc = 0x3A4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4320u;
        // 0x3a4324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4328u;
        goto label_fallthrough_0x3a4320;
    }
    ctx->pc = 0x3A4320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4320u;
        // 0x3a4324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a4320:
    ctx->pc = 0x3A4328u;
}
