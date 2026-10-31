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

// Function: sub_001A2120
// Address: 0x1a2120 - 0x1a2190
void sub_001A2120_0x1a2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2120_0x1a2120");
#endif

    switch (ctx->pc) {
        case 0x1a2120u: goto label_1a2120;
        case 0x1a2124u: goto label_1a2124;
        case 0x1a2128u: goto label_1a2128;
        case 0x1a212cu: goto label_1a212c;
        case 0x1a2130u: goto label_1a2130;
        case 0x1a2134u: goto label_1a2134;
        case 0x1a2138u: goto label_1a2138;
        case 0x1a213cu: goto label_1a213c;
        case 0x1a2140u: goto label_1a2140;
        case 0x1a2144u: goto label_1a2144;
        case 0x1a2148u: goto label_1a2148;
        case 0x1a214cu: goto label_1a214c;
        case 0x1a2150u: goto label_1a2150;
        case 0x1a2154u: goto label_1a2154;
        case 0x1a2158u: goto label_1a2158;
        case 0x1a215cu: goto label_1a215c;
        case 0x1a2160u: goto label_1a2160;
        case 0x1a2164u: goto label_1a2164;
        case 0x1a2168u: goto label_1a2168;
        case 0x1a216cu: goto label_1a216c;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2174u: goto label_1a2174;
        case 0x1a2178u: goto label_1a2178;
        case 0x1a217cu: goto label_1a217c;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a2184u: goto label_1a2184;
        case 0x1a2188u: goto label_1a2188;
        case 0x1a218cu: goto label_1a218c;
        default: break;
    }

    ctx->pc = 0x1a2120u;

label_1a2120:
    // 0x1a2120: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a2120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2124:
    // 0x1a2124: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2128:
    // 0x1a2128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a212c:
    // 0x1a212c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a212cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2130:
    // 0x1a2130: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x1a2130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2134:
    // 0x1a2134: 0x0  nop
    ctx->pc = 0x1a2134u;
    // NOP
label_1a2138:
    // 0x1a2138: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a213c:
    if (ctx->pc == 0x1A213Cu) {
        ctx->pc = 0x1A213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2138u;
        // 0x1a213c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2140u;
        goto label_1a2140;
    }
    ctx->pc = 0x1A2138u;
    {
        const bool branch_taken_0x1a2138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2138u;
        // 0x1a213c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2138) {
            ctx->pc = 0x1A2144u;
            goto label_1a2144;
        }
    }
    ctx->pc = 0x1A2140u;
label_1a2140:
    // 0x1a2140: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x1a2140u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
label_1a2144:
    // 0x1a2144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2148:
    // 0x1a2148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a214c:
    // 0x1a214c: 0x24850090  addiu       $a1, $a0, 0x90
    ctx->pc = 0x1a214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_1a2150:
    // 0x1a2150: 0xe48c0090  swc1        $f12, 0x90($a0)
    ctx->pc = 0x1a2150u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
label_1a2154:
    // 0x1a2154: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1a2154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1a2158:
    // 0x1a2158: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x1a2158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1a215c:
    // 0x1a215c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a2160:
    if (ctx->pc == 0x1A2160u) {
        ctx->pc = 0x1A2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A215Cu;
        // 0x1a2160: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2164u;
        goto label_1a2164;
    }
    ctx->pc = 0x1A215Cu;
    {
        const bool branch_taken_0x1a215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A215Cu;
        // 0x1a2160: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a215c) {
            ctx->pc = 0x1A2184u;
            goto label_1a2184;
        }
    }
    ctx->pc = 0x1A2164u;
label_1a2164:
    // 0x1a2164: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a2168:
    // 0x1a2168: 0x24860094  addiu       $a2, $a0, 0x94
    ctx->pc = 0x1a2168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
label_1a216c:
    // 0x1a216c: 0x8c47cdb4  lw          $a3, -0x324C($v0)
    ctx->pc = 0x1a216cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a2170:
    // 0x1a2170: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1a2174:
    // 0x1a2174: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1a2174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1a2178:
    // 0x1a2178: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1a2178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1a217c:
    // 0x1a217c: 0x60f809  jalr        $v1
label_1a2180:
    if (ctx->pc == 0x1A2180u) {
        ctx->pc = 0x1A2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A217Cu;
        // 0x1a2180: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2184u;
        goto label_1a2184;
    }
    ctx->pc = 0x1A217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A2184u);
        ctx->pc = 0x1A2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A217Cu;
        // 0x1a2180: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A217Cu, 0x1A2184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2184u;
label_1a2184:
    // 0x1a2184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2188:
    // 0x1a2188: 0x3e00008  jr          $ra
label_1a218c:
    if (ctx->pc == 0x1A218Cu) {
        ctx->pc = 0x1A218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2188u;
        // 0x1a218c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2190u;
        goto label_fallthrough_0x1a2188;
    }
    ctx->pc = 0x1A2188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2188u;
        // 0x1a218c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2188:
    ctx->pc = 0x1A2190u;
}
