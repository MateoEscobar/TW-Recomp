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

// Function: sub_0013B2B8
// Address: 0x13b2b8 - 0x13b358
void sub_0013B2B8_0x13b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B2B8_0x13b2b8");
#endif

    switch (ctx->pc) {
        case 0x13b2b8u: goto label_13b2b8;
        case 0x13b2bcu: goto label_13b2bc;
        case 0x13b2c0u: goto label_13b2c0;
        case 0x13b2c4u: goto label_13b2c4;
        case 0x13b2c8u: goto label_13b2c8;
        case 0x13b2ccu: goto label_13b2cc;
        case 0x13b2d0u: goto label_13b2d0;
        case 0x13b2d4u: goto label_13b2d4;
        case 0x13b2d8u: goto label_13b2d8;
        case 0x13b2dcu: goto label_13b2dc;
        case 0x13b2e0u: goto label_13b2e0;
        case 0x13b2e4u: goto label_13b2e4;
        case 0x13b2e8u: goto label_13b2e8;
        case 0x13b2ecu: goto label_13b2ec;
        case 0x13b2f0u: goto label_13b2f0;
        case 0x13b2f4u: goto label_13b2f4;
        case 0x13b2f8u: goto label_13b2f8;
        case 0x13b2fcu: goto label_13b2fc;
        case 0x13b300u: goto label_13b300;
        case 0x13b304u: goto label_13b304;
        case 0x13b308u: goto label_13b308;
        case 0x13b30cu: goto label_13b30c;
        case 0x13b310u: goto label_13b310;
        case 0x13b314u: goto label_13b314;
        case 0x13b318u: goto label_13b318;
        case 0x13b31cu: goto label_13b31c;
        case 0x13b320u: goto label_13b320;
        case 0x13b324u: goto label_13b324;
        case 0x13b328u: goto label_13b328;
        case 0x13b32cu: goto label_13b32c;
        case 0x13b330u: goto label_13b330;
        case 0x13b334u: goto label_13b334;
        case 0x13b338u: goto label_13b338;
        case 0x13b33cu: goto label_13b33c;
        case 0x13b340u: goto label_13b340;
        case 0x13b344u: goto label_13b344;
        case 0x13b348u: goto label_13b348;
        case 0x13b34cu: goto label_13b34c;
        case 0x13b350u: goto label_13b350;
        case 0x13b354u: goto label_13b354;
        default: break;
    }

    ctx->pc = 0x13b2b8u;

label_13b2b8:
    // 0x13b2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13b2bc:
    // 0x13b2bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13b2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b2c0:
    // 0x13b2c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13b2c4:
    // 0x13b2c4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x13b2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_13b2c8:
    // 0x13b2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13b2cc:
    // 0x13b2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b2d0:
    // 0x13b2d0: 0xa20003e6  sb          $zero, 0x3E6($s0)
    ctx->pc = 0x13b2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 998), (uint8_t)GPR_U32(ctx, 0));
label_13b2d4:
    // 0x13b2d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13b2d8:
    // 0x13b2d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b2dc:
    // 0x13b2dc: 0xac46b2b0  sw          $a2, -0x4D50($v0)
    ctx->pc = 0x13b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947504), GPR_U32(ctx, 6));
label_13b2e0:
    // 0x13b2e0: 0x846401f0  lh          $a0, 0x1F0($v1)
    ctx->pc = 0x13b2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 496)));
label_13b2e4:
    // 0x13b2e4: 0x8c6501f4  lw          $a1, 0x1F4($v1)
    ctx->pc = 0x13b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_13b2e8:
    // 0x13b2e8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x13b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_13b2ec:
    // 0x13b2ec: 0xa0f809  jalr        $a1
label_13b2f0:
    if (ctx->pc == 0x13B2F0u) {
        ctx->pc = 0x13B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2ECu;
        // 0x13b2f0: 0xace6b2ac  sw          $a2, -0x4D54($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294947500), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B2F4u;
        goto label_13b2f4;
    }
    ctx->pc = 0x13B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13B2F4u);
        ctx->pc = 0x13B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2ECu;
        // 0x13b2f0: 0xace6b2ac  sw          $a2, -0x4D54($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294947500), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B2ECu, 0x13B2F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B2F4u;
label_13b2f4:
    // 0x13b2f4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_13b2f8:
    // 0x13b2f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13b2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_13b2fc:
    // 0x13b2fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13b300:
    // 0x13b300: 0xc4419284  lwc1        $f1, -0x6D7C($v0)
    ctx->pc = 0x13b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b304:
    // 0x13b304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b308:
    // 0x13b308: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x13b308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
label_13b30c:
    // 0x13b30c: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x13b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
label_13b310:
    // 0x13b310: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x13b310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
label_13b314:
    // 0x13b314: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x13b314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
label_13b318:
    // 0x13b318: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x13b318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
label_13b31c:
    // 0x13b31c: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x13b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
label_13b320:
    // 0x13b320: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x13b320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
label_13b324:
    // 0x13b324: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x13b324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
label_13b328:
    // 0x13b328: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x13b328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_13b32c:
    // 0x13b32c: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x13b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
label_13b330:
    // 0x13b330: 0xa20003ed  sb          $zero, 0x3ED($s0)
    ctx->pc = 0x13b330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1005), (uint8_t)GPR_U32(ctx, 0));
label_13b334:
    // 0x13b334: 0xe6000374  swc1        $f0, 0x374($s0)
    ctx->pc = 0x13b334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
label_13b338:
    // 0x13b338: 0xe602037c  swc1        $f2, 0x37C($s0)
    ctx->pc = 0x13b338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
label_13b33c:
    // 0x13b33c: 0xe6010368  swc1        $f1, 0x368($s0)
    ctx->pc = 0x13b33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
label_13b340:
    // 0x13b340: 0xc04eddc  jal         func_13B770
label_13b344:
    if (ctx->pc == 0x13B344u) {
        ctx->pc = 0x13B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B340u;
        // 0x13b344: 0xe6010388  swc1        $f1, 0x388($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B348u;
        goto label_13b348;
    }
    ctx->pc = 0x13B340u;
    SET_GPR_U32(ctx, 31, 0x13B348u);
    ctx->pc = 0x13B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B340u;
    // 0x13b344: 0xe6010388  swc1        $f1, 0x388($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x13B340u, 0x13B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B348u;
label_13b348:
    // 0x13b348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b34c:
    // 0x13b34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b350:
    // 0x13b350: 0x3e00008  jr          $ra
label_13b354:
    if (ctx->pc == 0x13B354u) {
        ctx->pc = 0x13B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B350u;
        // 0x13b354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B358u;
        goto label_fallthrough_0x13b350;
    }
    ctx->pc = 0x13B350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B350u;
        // 0x13b354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b350:
    ctx->pc = 0x13B358u;
}
