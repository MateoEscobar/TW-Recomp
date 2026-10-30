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

// Function: sub_0023F158
// Address: 0x23f158 - 0x23f238
void sub_0023F158_0x23f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F158_0x23f158");
#endif

    switch (ctx->pc) {
        case 0x23f158u: goto label_23f158;
        case 0x23f15cu: goto label_23f15c;
        case 0x23f160u: goto label_23f160;
        case 0x23f164u: goto label_23f164;
        case 0x23f168u: goto label_23f168;
        case 0x23f16cu: goto label_23f16c;
        case 0x23f170u: goto label_23f170;
        case 0x23f174u: goto label_23f174;
        case 0x23f178u: goto label_23f178;
        case 0x23f17cu: goto label_23f17c;
        case 0x23f180u: goto label_23f180;
        case 0x23f184u: goto label_23f184;
        case 0x23f188u: goto label_23f188;
        case 0x23f18cu: goto label_23f18c;
        case 0x23f190u: goto label_23f190;
        case 0x23f194u: goto label_23f194;
        case 0x23f198u: goto label_23f198;
        case 0x23f19cu: goto label_23f19c;
        case 0x23f1a0u: goto label_23f1a0;
        case 0x23f1a4u: goto label_23f1a4;
        case 0x23f1a8u: goto label_23f1a8;
        case 0x23f1acu: goto label_23f1ac;
        case 0x23f1b0u: goto label_23f1b0;
        case 0x23f1b4u: goto label_23f1b4;
        case 0x23f1b8u: goto label_23f1b8;
        case 0x23f1bcu: goto label_23f1bc;
        case 0x23f1c0u: goto label_23f1c0;
        case 0x23f1c4u: goto label_23f1c4;
        case 0x23f1c8u: goto label_23f1c8;
        case 0x23f1ccu: goto label_23f1cc;
        case 0x23f1d0u: goto label_23f1d0;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f1d8u: goto label_23f1d8;
        case 0x23f1dcu: goto label_23f1dc;
        case 0x23f1e0u: goto label_23f1e0;
        case 0x23f1e4u: goto label_23f1e4;
        case 0x23f1e8u: goto label_23f1e8;
        case 0x23f1ecu: goto label_23f1ec;
        case 0x23f1f0u: goto label_23f1f0;
        case 0x23f1f4u: goto label_23f1f4;
        case 0x23f1f8u: goto label_23f1f8;
        case 0x23f1fcu: goto label_23f1fc;
        case 0x23f200u: goto label_23f200;
        case 0x23f204u: goto label_23f204;
        case 0x23f208u: goto label_23f208;
        case 0x23f20cu: goto label_23f20c;
        case 0x23f210u: goto label_23f210;
        case 0x23f214u: goto label_23f214;
        case 0x23f218u: goto label_23f218;
        case 0x23f21cu: goto label_23f21c;
        case 0x23f220u: goto label_23f220;
        case 0x23f224u: goto label_23f224;
        case 0x23f228u: goto label_23f228;
        case 0x23f22cu: goto label_23f22c;
        case 0x23f230u: goto label_23f230;
        case 0x23f234u: goto label_23f234;
        default: break;
    }

    ctx->pc = 0x23f158u;

label_23f158:
    // 0x23f158: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23f15c:
    // 0x23f15c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_23f160:
    // 0x23f160: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x23f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_23f164:
    // 0x23f164: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x23f164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_23f168:
    // 0x23f168: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x23f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_23f16c:
    // 0x23f16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f170:
    // 0x23f170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_23f174:
    // 0x23f174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23f178:
    // 0x23f178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23f17c:
    // 0x23f17c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x23f17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_23f180:
    // 0x23f180: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x23f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_23f184:
    // 0x23f184: 0x60f809  jalr        $v1
label_23f188:
    if (ctx->pc == 0x23F188u) {
        ctx->pc = 0x23F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F184u;
        // 0x23f188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F18Cu;
        goto label_23f18c;
    }
    ctx->pc = 0x23F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23F18Cu);
        ctx->pc = 0x23F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F184u;
        // 0x23f188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F184u, 0x23F18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F18Cu;
label_23f18c:
    // 0x23f18c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23f190:
    // 0x23f190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f194:
    // 0x23f194: 0x260302e0  addiu       $v1, $s0, 0x2E0
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
label_23f198:
    // 0x23f198: 0xae000308  sw          $zero, 0x308($s0)
    ctx->pc = 0x23f198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 0));
label_23f19c:
    // 0x23f19c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23f19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23f1a0:
    // 0x23f1a0: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x23f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
label_23f1a4:
    // 0x23f1a4: 0xa2000332  sb          $zero, 0x332($s0)
    ctx->pc = 0x23f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 818), (uint8_t)GPR_U32(ctx, 0));
label_23f1a8:
    // 0x23f1a8: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x23f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
label_23f1ac:
    // 0x23f1ac: 0xa2000331  sb          $zero, 0x331($s0)
    ctx->pc = 0x23f1acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 0));
label_23f1b0:
    // 0x23f1b0: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x23f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
label_23f1b4:
    // 0x23f1b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23f1b8:
    // 0x23f1b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23f1bc:
    // 0x23f1bc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x23f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_23f1c0:
    // 0x23f1c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23f1c4:
    // 0x23f1c4: 0x845100b0  lh          $s1, 0xB0($v0)
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_23f1c8:
    // 0x23f1c8: 0x245200b0  addiu       $s2, $v0, 0xB0
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_23f1cc:
    // 0x23f1cc: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x23f1ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_23f1d0:
    // 0x23f1d0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x23f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_23f1d4:
    // 0x23f1d4: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x23f1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_23f1d8:
    // 0x23f1d8: 0x60f809  jalr        $v1
label_23f1dc:
    if (ctx->pc == 0x23F1DCu) {
        ctx->pc = 0x23F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1D8u;
        // 0x23f1dc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1E0u;
        goto label_23f1e0;
    }
    ctx->pc = 0x23F1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23F1E0u);
        ctx->pc = 0x23F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1D8u;
        // 0x23f1dc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1D8u, 0x23F1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F1E0u;
label_23f1e0:
    // 0x23f1e0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x23f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23f1e4:
    // 0x23f1e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23f1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23f1e8:
    // 0x23f1e8: 0xc0f809  jalr        $a2
label_23f1ec:
    if (ctx->pc == 0x23F1ECu) {
        ctx->pc = 0x23F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1E8u;
        // 0x23f1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1F0u;
        goto label_23f1f0;
    }
    ctx->pc = 0x23F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x23F1F0u);
        ctx->pc = 0x23F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1E8u;
        // 0x23f1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1E8u, 0x23F1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F1F0u;
label_23f1f0:
    // 0x23f1f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23f1f4:
    // 0x23f1f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23f1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23f1f8:
    // 0x23f1f8: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_23f1fc:
    // 0x23f1fc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_23f200:
    // 0x23f200: 0x60f809  jalr        $v1
label_23f204:
    if (ctx->pc == 0x23F204u) {
        ctx->pc = 0x23F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F200u;
        // 0x23f204: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F208u;
        goto label_23f208;
    }
    ctx->pc = 0x23F200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23F208u);
        ctx->pc = 0x23F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F200u;
        // 0x23f204: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F200u, 0x23F208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F208u;
label_23f208:
    // 0x23f208: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23f208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23f20c:
    // 0x23f20c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x23f20cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23f210:
    // 0x23f210: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x23f210u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_23f214:
    // 0x23f214: 0xc0e8568  jal         func_3A15A0
label_23f218:
    if (ctx->pc == 0x23F218u) {
        ctx->pc = 0x23F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F214u;
        // 0x23f218: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F21Cu;
        goto label_23f21c;
    }
    ctx->pc = 0x23F214u;
    SET_GPR_U32(ctx, 31, 0x23F21Cu);
    ctx->pc = 0x23F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F214u;
    // 0x23f218: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x23F214u, 0x23F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F21Cu;
label_23f21c:
    // 0x23f21c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x23f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_23f220:
    // 0x23f220: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x23f220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23f224:
    // 0x23f224: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23f224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23f228:
    // 0x23f228: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23f228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23f22c:
    // 0x23f22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f230:
    // 0x23f230: 0x3e00008  jr          $ra
label_23f234:
    if (ctx->pc == 0x23F234u) {
        ctx->pc = 0x23F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F230u;
        // 0x23f234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F238u;
        goto label_fallthrough_0x23f230;
    }
    ctx->pc = 0x23F230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F230u;
        // 0x23f234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23f230:
    ctx->pc = 0x23F238u;
}
