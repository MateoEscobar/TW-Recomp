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

// Function: sub_001D11F8
// Address: 0x1d11f8 - 0x1d1250
void sub_001D11F8_0x1d11f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D11F8_0x1d11f8");
#endif

    switch (ctx->pc) {
        case 0x1d11f8u: goto label_1d11f8;
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1200u: goto label_1d1200;
        case 0x1d1204u: goto label_1d1204;
        case 0x1d1208u: goto label_1d1208;
        case 0x1d120cu: goto label_1d120c;
        case 0x1d1210u: goto label_1d1210;
        case 0x1d1214u: goto label_1d1214;
        case 0x1d1218u: goto label_1d1218;
        case 0x1d121cu: goto label_1d121c;
        case 0x1d1220u: goto label_1d1220;
        case 0x1d1224u: goto label_1d1224;
        case 0x1d1228u: goto label_1d1228;
        case 0x1d122cu: goto label_1d122c;
        case 0x1d1230u: goto label_1d1230;
        case 0x1d1234u: goto label_1d1234;
        case 0x1d1238u: goto label_1d1238;
        case 0x1d123cu: goto label_1d123c;
        case 0x1d1240u: goto label_1d1240;
        case 0x1d1244u: goto label_1d1244;
        case 0x1d1248u: goto label_1d1248;
        case 0x1d124cu: goto label_1d124c;
        default: break;
    }

    ctx->pc = 0x1d11f8u;

label_1d11f8:
    // 0x1d11f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d11f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d11fc:
    // 0x1d11fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d1200:
    // 0x1d1200: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d1200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d1204:
    // 0x1d1204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d1208:
    // 0x1d1208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d120c:
    // 0x1d120c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1d120cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1d1210:
    // 0x1d1210: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d1210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1d1214:
    // 0x1d1214: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d1214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d1218:
    // 0x1d1218: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d121c:
    // 0x1d121c: 0x40f809  jalr        $v0
label_1d1220:
    if (ctx->pc == 0x1D1220u) {
        ctx->pc = 0x1D1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D121Cu;
        // 0x1d1220: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1224u;
        goto label_1d1224;
    }
    ctx->pc = 0x1D121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1224u);
        ctx->pc = 0x1D1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D121Cu;
        // 0x1d1220: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D121Cu, 0x1D1224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1224u;
label_1d1224:
    // 0x1d1224: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1d1224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1228:
    // 0x1d1228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d122c:
    // 0x1d122c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d122cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1230:
    // 0x1d1230: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d1230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d1234:
    // 0x1d1234: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d1234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d1238:
    // 0x1d1238: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1d1238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d123c:
    // 0x1d123c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1d123cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1d1240:
    // 0x1d1240: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d1240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1244:
    // 0x1d1244: 0x3e00008  jr          $ra
label_1d1248:
    if (ctx->pc == 0x1D1248u) {
        ctx->pc = 0x1D1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1244u;
        // 0x1d1248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D124Cu;
        goto label_1d124c;
    }
    ctx->pc = 0x1D1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1244u;
        // 0x1d1248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D124Cu;
label_1d124c:
    // 0x1d124c: 0x0  nop
    ctx->pc = 0x1d124cu;
    // NOP
    ctx->pc = 0x1d1250u;
}
