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

// Function: sub_001A2060
// Address: 0x1a2060 - 0x1a2108
void sub_001A2060_0x1a2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2060_0x1a2060");
#endif

    switch (ctx->pc) {
        case 0x1a2060u: goto label_1a2060;
        case 0x1a2064u: goto label_1a2064;
        case 0x1a2068u: goto label_1a2068;
        case 0x1a206cu: goto label_1a206c;
        case 0x1a2070u: goto label_1a2070;
        case 0x1a2074u: goto label_1a2074;
        case 0x1a2078u: goto label_1a2078;
        case 0x1a207cu: goto label_1a207c;
        case 0x1a2080u: goto label_1a2080;
        case 0x1a2084u: goto label_1a2084;
        case 0x1a2088u: goto label_1a2088;
        case 0x1a208cu: goto label_1a208c;
        case 0x1a2090u: goto label_1a2090;
        case 0x1a2094u: goto label_1a2094;
        case 0x1a2098u: goto label_1a2098;
        case 0x1a209cu: goto label_1a209c;
        case 0x1a20a0u: goto label_1a20a0;
        case 0x1a20a4u: goto label_1a20a4;
        case 0x1a20a8u: goto label_1a20a8;
        case 0x1a20acu: goto label_1a20ac;
        case 0x1a20b0u: goto label_1a20b0;
        case 0x1a20b4u: goto label_1a20b4;
        case 0x1a20b8u: goto label_1a20b8;
        case 0x1a20bcu: goto label_1a20bc;
        case 0x1a20c0u: goto label_1a20c0;
        case 0x1a20c4u: goto label_1a20c4;
        case 0x1a20c8u: goto label_1a20c8;
        case 0x1a20ccu: goto label_1a20cc;
        case 0x1a20d0u: goto label_1a20d0;
        case 0x1a20d4u: goto label_1a20d4;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20dcu: goto label_1a20dc;
        case 0x1a20e0u: goto label_1a20e0;
        case 0x1a20e4u: goto label_1a20e4;
        case 0x1a20e8u: goto label_1a20e8;
        case 0x1a20ecu: goto label_1a20ec;
        case 0x1a20f0u: goto label_1a20f0;
        case 0x1a20f4u: goto label_1a20f4;
        case 0x1a20f8u: goto label_1a20f8;
        case 0x1a20fcu: goto label_1a20fc;
        case 0x1a2100u: goto label_1a2100;
        case 0x1a2104u: goto label_1a2104;
        default: break;
    }

    ctx->pc = 0x1a2060u;

label_1a2060:
    // 0x1a2060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a2064:
    // 0x1a2064: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a2064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a2068:
    // 0x1a2068: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1a2068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a206c:
    // 0x1a206c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2070:
    // 0x1a2070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a2074:
    // 0x1a2074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2078:
    // 0x1a2078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a2078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a207c:
    // 0x1a207c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2080:
    // 0x1a2080: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1a2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2084:
    // 0x1a2084: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2084u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a2088:
    // 0x1a2088: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1a2088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a208c:
    // 0x1a208c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a208cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2090:
    // 0x1a2090: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1a2090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a2094:
    // 0x1a2094: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a2094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a2098:
    // 0x1a2098: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a2098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a209c:
    // 0x1a209c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1a209cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_1a20a0:
    // 0x1a20a0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_1a20a4:
    if (ctx->pc == 0x1A20A4u) {
        ctx->pc = 0x1A20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20A0u;
        // 0x1a20a4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20A8u;
        goto label_1a20a8;
    }
    ctx->pc = 0x1A20A0u;
    {
        const bool branch_taken_0x1a20a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20A0u;
        // 0x1a20a4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20a0) {
            ctx->pc = 0x1A20E8u;
            goto label_1a20e8;
        }
    }
    ctx->pc = 0x1A20A8u;
label_1a20a8:
    // 0x1a20a8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1a20a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a20ac:
    // 0x1a20ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a20b0:
    // 0x1a20b0: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a20b4:
    // 0x1a20b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a20b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a20b8:
    // 0x1a20b8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1a20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1a20bc:
    // 0x1a20bc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a20c0:
    // 0x1a20c0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1a20c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1a20c4:
    // 0x1a20c4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1a20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1a20c8:
    // 0x1a20c8: 0x60f809  jalr        $v1
label_1a20cc:
    if (ctx->pc == 0x1A20CCu) {
        ctx->pc = 0x1A20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C8u;
        // 0x1a20cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20D0u;
        goto label_1a20d0;
    }
    ctx->pc = 0x1A20C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A20D0u);
        ctx->pc = 0x1A20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C8u;
        // 0x1a20cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20C8u, 0x1A20D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A20D0u;
label_1a20d0:
    // 0x1a20d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a20d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a20d4:
    // 0x1a20d4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a20d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a20d8:
    // 0x1a20d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a20d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a20dc:
    // 0x1a20dc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a20dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a20e0:
    // 0x1a20e0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1a20e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a20e4:
    // 0x1a20e4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a20e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a20e8:
    // 0x1a20e8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1a20e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a20ec:
    // 0x1a20ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a20ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a20f0:
    // 0x1a20f0: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x1a20f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
label_1a20f4:
    // 0x1a20f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a20f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a20f8:
    // 0x1a20f8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a20f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a20fc:
    // 0x1a20fc: 0x3e00008  jr          $ra
label_1a2100:
    if (ctx->pc == 0x1A2100u) {
        ctx->pc = 0x1A2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20FCu;
        // 0x1a2100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2104u;
        goto label_1a2104;
    }
    ctx->pc = 0x1A20FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20FCu;
        // 0x1a2100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2104u;
label_1a2104:
    // 0x1a2104: 0x0  nop
    ctx->pc = 0x1a2104u;
    // NOP
    ctx->pc = 0x1a2108u;
}
