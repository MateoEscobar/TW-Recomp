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

// Function: sub_0018D1D0
// Address: 0x18d1d0 - 0x18d450
void sub_0018D1D0_0x18d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D1D0_0x18d1d0");
#endif

    switch (ctx->pc) {
        case 0x18d1d0u: goto label_18d1d0;
        case 0x18d1d4u: goto label_18d1d4;
        case 0x18d1d8u: goto label_18d1d8;
        case 0x18d1dcu: goto label_18d1dc;
        case 0x18d1e0u: goto label_18d1e0;
        case 0x18d1e4u: goto label_18d1e4;
        case 0x18d1e8u: goto label_18d1e8;
        case 0x18d1ecu: goto label_18d1ec;
        case 0x18d1f0u: goto label_18d1f0;
        case 0x18d1f4u: goto label_18d1f4;
        case 0x18d1f8u: goto label_18d1f8;
        case 0x18d1fcu: goto label_18d1fc;
        case 0x18d200u: goto label_18d200;
        case 0x18d204u: goto label_18d204;
        case 0x18d208u: goto label_18d208;
        case 0x18d20cu: goto label_18d20c;
        case 0x18d210u: goto label_18d210;
        case 0x18d214u: goto label_18d214;
        case 0x18d218u: goto label_18d218;
        case 0x18d21cu: goto label_18d21c;
        case 0x18d220u: goto label_18d220;
        case 0x18d224u: goto label_18d224;
        case 0x18d228u: goto label_18d228;
        case 0x18d22cu: goto label_18d22c;
        case 0x18d230u: goto label_18d230;
        case 0x18d234u: goto label_18d234;
        case 0x18d238u: goto label_18d238;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d240u: goto label_18d240;
        case 0x18d244u: goto label_18d244;
        case 0x18d248u: goto label_18d248;
        case 0x18d24cu: goto label_18d24c;
        case 0x18d250u: goto label_18d250;
        case 0x18d254u: goto label_18d254;
        case 0x18d258u: goto label_18d258;
        case 0x18d25cu: goto label_18d25c;
        case 0x18d260u: goto label_18d260;
        case 0x18d264u: goto label_18d264;
        case 0x18d268u: goto label_18d268;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d270u: goto label_18d270;
        case 0x18d274u: goto label_18d274;
        case 0x18d278u: goto label_18d278;
        case 0x18d27cu: goto label_18d27c;
        case 0x18d280u: goto label_18d280;
        case 0x18d284u: goto label_18d284;
        case 0x18d288u: goto label_18d288;
        case 0x18d28cu: goto label_18d28c;
        case 0x18d290u: goto label_18d290;
        case 0x18d294u: goto label_18d294;
        case 0x18d298u: goto label_18d298;
        case 0x18d29cu: goto label_18d29c;
        case 0x18d2a0u: goto label_18d2a0;
        case 0x18d2a4u: goto label_18d2a4;
        case 0x18d2a8u: goto label_18d2a8;
        case 0x18d2acu: goto label_18d2ac;
        case 0x18d2b0u: goto label_18d2b0;
        case 0x18d2b4u: goto label_18d2b4;
        case 0x18d2b8u: goto label_18d2b8;
        case 0x18d2bcu: goto label_18d2bc;
        case 0x18d2c0u: goto label_18d2c0;
        case 0x18d2c4u: goto label_18d2c4;
        case 0x18d2c8u: goto label_18d2c8;
        case 0x18d2ccu: goto label_18d2cc;
        case 0x18d2d0u: goto label_18d2d0;
        case 0x18d2d4u: goto label_18d2d4;
        case 0x18d2d8u: goto label_18d2d8;
        case 0x18d2dcu: goto label_18d2dc;
        case 0x18d2e0u: goto label_18d2e0;
        case 0x18d2e4u: goto label_18d2e4;
        case 0x18d2e8u: goto label_18d2e8;
        case 0x18d2ecu: goto label_18d2ec;
        case 0x18d2f0u: goto label_18d2f0;
        case 0x18d2f4u: goto label_18d2f4;
        case 0x18d2f8u: goto label_18d2f8;
        case 0x18d2fcu: goto label_18d2fc;
        case 0x18d300u: goto label_18d300;
        case 0x18d304u: goto label_18d304;
        case 0x18d308u: goto label_18d308;
        case 0x18d30cu: goto label_18d30c;
        case 0x18d310u: goto label_18d310;
        case 0x18d314u: goto label_18d314;
        case 0x18d318u: goto label_18d318;
        case 0x18d31cu: goto label_18d31c;
        case 0x18d320u: goto label_18d320;
        case 0x18d324u: goto label_18d324;
        case 0x18d328u: goto label_18d328;
        case 0x18d32cu: goto label_18d32c;
        case 0x18d330u: goto label_18d330;
        case 0x18d334u: goto label_18d334;
        case 0x18d338u: goto label_18d338;
        case 0x18d33cu: goto label_18d33c;
        case 0x18d340u: goto label_18d340;
        case 0x18d344u: goto label_18d344;
        case 0x18d348u: goto label_18d348;
        case 0x18d34cu: goto label_18d34c;
        case 0x18d350u: goto label_18d350;
        case 0x18d354u: goto label_18d354;
        case 0x18d358u: goto label_18d358;
        case 0x18d35cu: goto label_18d35c;
        case 0x18d360u: goto label_18d360;
        case 0x18d364u: goto label_18d364;
        case 0x18d368u: goto label_18d368;
        case 0x18d36cu: goto label_18d36c;
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        default: break;
    }

    ctx->pc = 0x18d1d0u;

label_18d1d0:
    // 0x18d1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18d1d4:
    // 0x18d1d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18d1d8:
    // 0x18d1d8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x18d1d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_18d1dc:
    // 0x18d1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d1e0:
    // 0x18d1e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18d1e4:
    // 0x18d1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18d1e8:
    // 0x18d1e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x18d1e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_18d1ec:
    // 0x18d1ec: 0x92020214  lbu         $v0, 0x214($s0)
    ctx->pc = 0x18d1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
label_18d1f0:
    // 0x18d1f0: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
label_18d1f4:
    if (ctx->pc == 0x18D1F4u) {
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1F8u;
        goto label_18d1f8;
    }
    ctx->pc = 0x18D1F0u;
    {
        const bool branch_taken_0x18d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1f0) {
            ctx->pc = 0x18D430u;
            goto label_18d430;
        }
    }
    ctx->pc = 0x18D1F8u;
label_18d1f8:
    // 0x18d1f8: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x18d1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d1fc:
    // 0x18d1fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18d1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18d200:
    // 0x18d200: 0x0  nop
    ctx->pc = 0x18d200u;
    // NOP
label_18d204:
    // 0x18d204: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d204u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d208:
    // 0x18d208: 0x0  nop
    ctx->pc = 0x18d208u;
    // NOP
label_18d20c:
    // 0x18d20c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_18d210:
    if (ctx->pc == 0x18D210u) {
        ctx->pc = 0x18D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D20Cu;
        // 0x18d210: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D214u;
        goto label_18d214;
    }
    ctx->pc = 0x18D20Cu;
    {
        const bool branch_taken_0x18d20c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D20Cu;
        // 0x18d210: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d20c) {
            ctx->pc = 0x18D244u;
            goto label_18d244;
        }
    }
    ctx->pc = 0x18D214u;
label_18d214:
    // 0x18d214: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18d214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18d218:
    // 0x18d218: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d21c:
    // 0x18d21c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18d21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18d220:
    // 0x18d220: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18d224:
    // 0x18d224: 0x40f809  jalr        $v0
label_18d228:
    if (ctx->pc == 0x18D228u) {
        ctx->pc = 0x18D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D224u;
        // 0x18d228: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D22Cu;
        goto label_18d22c;
    }
    ctx->pc = 0x18D224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D22Cu);
        ctx->pc = 0x18D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D224u;
        // 0x18d228: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D224u, 0x18D22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D22Cu;
label_18d22c:
    // 0x18d22c: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x18d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_18d230:
    // 0x18d230: 0x8e040204  lw          $a0, 0x204($s0)
    ctx->pc = 0x18d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
label_18d234:
    // 0x18d234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18d238:
    // 0x18d238: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x18d238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18d23c:
    // 0x18d23c: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_18d240:
    if (ctx->pc == 0x18D240u) {
        ctx->pc = 0x18D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D23Cu;
        // 0x18d240: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D244u;
        goto label_18d244;
    }
    ctx->pc = 0x18D23Cu;
    {
        const bool branch_taken_0x18d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d23c) {
            ctx->pc = 0x18D240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D23Cu;
            // 0x18d240: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D434u;
            goto label_18d434;
        }
    }
    ctx->pc = 0x18D244u;
label_18d244:
    // 0x18d244: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x18d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_18d248:
    // 0x18d248: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18d24c:
    // 0x18d24c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_18d250:
    if (ctx->pc == 0x18D250u) {
        ctx->pc = 0x18D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D24Cu;
        // 0x18d250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D254u;
        goto label_18d254;
    }
    ctx->pc = 0x18D24Cu;
    {
        const bool branch_taken_0x18d24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D24Cu;
        // 0x18d250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d24c) {
            ctx->pc = 0x18D2C8u;
            goto label_18d2c8;
        }
    }
    ctx->pc = 0x18D254u;
label_18d254:
    // 0x18d254: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x18d254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_18d258:
    // 0x18d258: 0xc60c014c  lwc1        $f12, 0x14C($s0)
    ctx->pc = 0x18d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d25c:
    // 0x18d25c: 0xc0630c4  jal         func_18C310
label_18d260:
    if (ctx->pc == 0x18D260u) {
        ctx->pc = 0x18D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D25Cu;
        // 0x18d260: 0xc60d0150  lwc1        $f13, 0x150($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D264u;
        goto label_18d264;
    }
    ctx->pc = 0x18D25Cu;
    SET_GPR_U32(ctx, 31, 0x18D264u);
    ctx->pc = 0x18D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D25Cu;
    // 0x18d260: 0xc60d0150  lwc1        $f13, 0x150($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C310u, 0x18D25Cu, 0x18D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D264u;
label_18d264:
    // 0x18d264: 0x96030210  lhu         $v1, 0x210($s0)
    ctx->pc = 0x18d264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 528)));
label_18d268:
    // 0x18d268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d26c:
    // 0x18d26c: 0x54620071  bnel        $v1, $v0, . + 4 + (0x71 << 2)
label_18d270:
    if (ctx->pc == 0x18D270u) {
        ctx->pc = 0x18D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D26Cu;
        // 0x18d270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D274u;
        goto label_18d274;
    }
    ctx->pc = 0x18D26Cu;
    {
        const bool branch_taken_0x18d26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d26c) {
            ctx->pc = 0x18D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D26Cu;
            // 0x18d270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D434u;
            goto label_18d434;
        }
    }
    ctx->pc = 0x18D274u;
label_18d274:
    // 0x18d274: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18d278:
    // 0x18d278: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18d27c:
    // 0x18d27c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d280:
    // 0x18d280: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18d280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18d284:
    // 0x18d284: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18d288:
    // 0x18d288: 0x40f809  jalr        $v0
label_18d28c:
    if (ctx->pc == 0x18D28Cu) {
        ctx->pc = 0x18D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D288u;
        // 0x18d28c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D290u;
        goto label_18d290;
    }
    ctx->pc = 0x18D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D290u);
        ctx->pc = 0x18D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D288u;
        // 0x18d28c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D288u, 0x18D290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D290u;
label_18d290:
    // 0x18d290: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18d294:
    // 0x18d294: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x18d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_18d298:
    // 0x18d298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d29c:
    // 0x18d29c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x18d29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_18d2a0:
    // 0x18d2a0: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
label_18d2a4:
    if (ctx->pc == 0x18D2A4u) {
        ctx->pc = 0x18D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2A0u;
        // 0x18d2a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2A8u;
        goto label_18d2a8;
    }
    ctx->pc = 0x18D2A0u;
    {
        const bool branch_taken_0x18d2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2a0) {
            ctx->pc = 0x18D2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D2A0u;
            // 0x18d2a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D434u;
            goto label_18d434;
        }
    }
    ctx->pc = 0x18D2A8u;
label_18d2a8:
    // 0x18d2a8: 0xc60c008c  lwc1        $f12, 0x8C($s0)
    ctx->pc = 0x18d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d2ac:
    // 0x18d2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d2b0:
    // 0x18d2b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18d2b4:
    // 0x18d2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d2b8:
    // 0x18d2b8: 0xc063514  jal         func_18D450
label_18d2bc:
    if (ctx->pc == 0x18D2BCu) {
        ctx->pc = 0x18D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B8u;
        // 0x18d2bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2C0u;
        goto label_18d2c0;
    }
    ctx->pc = 0x18D2B8u;
    SET_GPR_U32(ctx, 31, 0x18D2C0u);
    ctx->pc = 0x18D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2B8u;
    // 0x18d2bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x18D2B8u, 0x18D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2C0u;
label_18d2c0:
    // 0x18d2c0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_18d2c4:
    if (ctx->pc == 0x18D2C4u) {
        ctx->pc = 0x18D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C0u;
        // 0x18d2c4: 0xae00020c  sw          $zero, 0x20C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2C8u;
        goto label_18d2c8;
    }
    ctx->pc = 0x18D2C0u;
    {
        const bool branch_taken_0x18d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C0u;
        // 0x18d2c4: 0xae00020c  sw          $zero, 0x20C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2c0) {
            ctx->pc = 0x18D430u;
            goto label_18d430;
        }
    }
    ctx->pc = 0x18D2C8u;
label_18d2c8:
    // 0x18d2c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_18d2cc:
    if (ctx->pc == 0x18D2CCu) {
        ctx->pc = 0x18D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C8u;
        // 0x18d2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2D0u;
        goto label_18d2d0;
    }
    ctx->pc = 0x18D2C8u;
    {
        const bool branch_taken_0x18d2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C8u;
        // 0x18d2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2c8) {
            ctx->pc = 0x18D2E8u;
            goto label_18d2e8;
        }
    }
    ctx->pc = 0x18D2D0u;
label_18d2d0:
    // 0x18d2d0: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x18d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d2d4:
    // 0x18d2d4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d2d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d2d8:
    // 0x18d2d8: 0x0  nop
    ctx->pc = 0x18d2d8u;
    // NOP
label_18d2dc:
    // 0x18d2dc: 0x45030055  bc1tl       . + 4 + (0x55 << 2)
label_18d2e0:
    if (ctx->pc == 0x18D2E0u) {
        ctx->pc = 0x18D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2DCu;
        // 0x18d2e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2E4u;
        goto label_18d2e4;
    }
    ctx->pc = 0x18D2DCu;
    {
        const bool branch_taken_0x18d2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d2dc) {
            ctx->pc = 0x18D2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D2DCu;
            // 0x18d2e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D434u;
            goto label_18d434;
        }
    }
    ctx->pc = 0x18D2E4u;
label_18d2e4:
    // 0x18d2e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d2e8:
    // 0x18d2e8: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_18d2ec:
    if (ctx->pc == 0x18D2ECu) {
        ctx->pc = 0x18D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E8u;
        // 0x18d2ec: 0xc6000200  lwc1        $f0, 0x200($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2F0u;
        goto label_18d2f0;
    }
    ctx->pc = 0x18D2E8u;
    {
        const bool branch_taken_0x18d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d2e8) {
            ctx->pc = 0x18D2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D2E8u;
            // 0x18d2ec: 0xc6000200  lwc1        $f0, 0x200($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D330u;
            goto label_18d330;
        }
    }
    ctx->pc = 0x18D2F0u;
label_18d2f0:
    // 0x18d2f0: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x18d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d2f4:
    // 0x18d2f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d2f8:
    // 0x18d2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d2fc:
    // 0x18d2fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d300:
    // 0x18d300: 0x0  nop
    ctx->pc = 0x18d300u;
    // NOP
label_18d304:
    // 0x18d304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18d304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d308:
    // 0x18d308: 0x0  nop
    ctx->pc = 0x18d308u;
    // NOP
label_18d30c:
    // 0x18d30c: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_18d310:
    if (ctx->pc == 0x18D310u) {
        ctx->pc = 0x18D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D30Cu;
        // 0x18d310: 0xae0201f8  sw          $v0, 0x1F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D314u;
        goto label_18d314;
    }
    ctx->pc = 0x18D30Cu;
    {
        const bool branch_taken_0x18d30c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D30Cu;
        // 0x18d310: 0xae0201f8  sw          $v0, 0x1F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d30c) {
            ctx->pc = 0x18D430u;
            goto label_18d430;
        }
    }
    ctx->pc = 0x18D314u;
label_18d314:
    // 0x18d314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d318:
    // 0x18d318: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x18d318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_18d31c:
    // 0x18d31c: 0xc48c014c  lwc1        $f12, 0x14C($a0)
    ctx->pc = 0x18d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d320:
    // 0x18d320: 0xc0630c4  jal         func_18C310
label_18d324:
    if (ctx->pc == 0x18D324u) {
        ctx->pc = 0x18D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D320u;
        // 0x18d324: 0xc48d0150  lwc1        $f13, 0x150($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D328u;
        goto label_18d328;
    }
    ctx->pc = 0x18D320u;
    SET_GPR_U32(ctx, 31, 0x18D328u);
    ctx->pc = 0x18D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D320u;
    // 0x18d324: 0xc48d0150  lwc1        $f13, 0x150($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C310u, 0x18D320u, 0x18D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D328u;
label_18d328:
    // 0x18d328: 0x10000042  b           . + 4 + (0x42 << 2)
label_18d32c:
    if (ctx->pc == 0x18D32Cu) {
        ctx->pc = 0x18D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D328u;
        // 0x18d32c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D330u;
        goto label_18d330;
    }
    ctx->pc = 0x18D328u;
    {
        const bool branch_taken_0x18d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D328u;
        // 0x18d32c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d328) {
            ctx->pc = 0x18D434u;
            goto label_18d434;
        }
    }
    ctx->pc = 0x18D330u;
label_18d330:
    // 0x18d330: 0xc60101fc  lwc1        $f1, 0x1FC($s0)
    ctx->pc = 0x18d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d334:
    // 0x18d334: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18d334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_18d338:
    // 0x18d338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d33c:
    // 0x18d33c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18d33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d340:
    // 0x18d340: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x18d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_18d344:
    // 0x18d344: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d348:
    // 0x18d348: 0x461408e8  max.s       $f3, $f1, $f20
    ctx->pc = 0x18d348u;
    ctx->f[3] = std::max(ctx->f[1], ctx->f[20]);
label_18d34c:
    // 0x18d34c: 0x460218a9  min.s       $f2, $f3, $f2
    ctx->pc = 0x18d34cu;
    ctx->f[2] = std::min(ctx->f[3], ctx->f[2]);
label_18d350:
    // 0x18d350: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18d354:
    if (ctx->pc == 0x18D354u) {
        ctx->pc = 0x18D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D350u;
        // 0x18d354: 0xe60201fc  swc1        $f2, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D358u;
        goto label_18d358;
    }
    ctx->pc = 0x18D350u;
    {
        const bool branch_taken_0x18d350 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D350u;
        // 0x18d354: 0xe60201fc  swc1        $f2, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d350) {
            ctx->pc = 0x18D36Cu;
            goto label_18d36c;
        }
    }
    ctx->pc = 0x18D358u;
label_18d358:
    // 0x18d358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d35c:
    // 0x18d35c: 0x0  nop
    ctx->pc = 0x18d35cu;
    // NOP
label_18d360:
    // 0x18d360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d364:
    // 0x18d364: 0x10000009  b           . + 4 + (0x9 << 2)
label_18d368:
    if (ctx->pc == 0x18D368u) {
        ctx->pc = 0x18D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D364u;
        // 0x18d368: 0xc60001fc  lwc1        $f0, 0x1FC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D36Cu;
        goto label_18d36c;
    }
    ctx->pc = 0x18D364u;
    {
        const bool branch_taken_0x18d364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D364u;
        // 0x18d368: 0xc60001fc  lwc1        $f0, 0x1FC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d364) {
            ctx->pc = 0x18D38Cu;
            goto label_18d38c;
        }
    }
    ctx->pc = 0x18D36Cu;
label_18d36c:
    // 0x18d36c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d370:
    // 0x18d370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d374:
    // 0x18d374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18d378:
    // 0x18d378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d37c:
    // 0x18d37c: 0x0  nop
    ctx->pc = 0x18d37cu;
    // NOP
label_18d380:
    // 0x18d380: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d384:
    // 0x18d384: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18d384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18d388:
    // 0x18d388: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x18d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d38c:
    // 0x18d38c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d390:
    // 0x18d390: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18d390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d394:
    // 0x18d394: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18d394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d398:
    // 0x18d398: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x18d398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d39c:
    // 0x18d39c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18d39cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18d3a0:
    // 0x18d3a0: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x18d3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_18d3a4:
    // 0x18d3a4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18d3a8:
    if (ctx->pc == 0x18D3A8u) {
        ctx->pc = 0x18D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A4u;
        // 0x18d3a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3ACu;
        goto label_18d3ac;
    }
    ctx->pc = 0x18D3A4u;
    {
        const bool branch_taken_0x18d3a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A4u;
        // 0x18d3a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3a4) {
            ctx->pc = 0x18D3D8u;
            goto label_18d3d8;
        }
    }
    ctx->pc = 0x18D3ACu;
label_18d3ac:
    // 0x18d3ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18d3b0:
    // 0x18d3b0: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x18d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
label_18d3b4:
    // 0x18d3b4: 0xe60201fc  swc1        $f2, 0x1FC($s0)
    ctx->pc = 0x18d3b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
label_18d3b8:
    // 0x18d3b8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x18d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_18d3bc:
    // 0x18d3bc: 0x8e110148  lw          $s1, 0x148($s0)
    ctx->pc = 0x18d3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_18d3c0:
    // 0x18d3c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d3c4:
    // 0x18d3c4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18d3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18d3c8:
    // 0x18d3c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18d3cc:
    // 0x18d3cc: 0x40f809  jalr        $v0
label_18d3d0:
    if (ctx->pc == 0x18D3D0u) {
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D4u;
        goto label_18d3d4;
    }
    ctx->pc = 0x18D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D3D4u);
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D3CCu, 0x18D3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D3D4u;
label_18d3d4:
    // 0x18d3d4: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x18d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
label_18d3d8:
    // 0x18d3d8: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x18d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d3dc:
    // 0x18d3dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d3e0:
    // 0x18d3e0: 0x0  nop
    ctx->pc = 0x18d3e0u;
    // NOP
label_18d3e4:
    // 0x18d3e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18d3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d3e8:
    // 0x18d3e8: 0x0  nop
    ctx->pc = 0x18d3e8u;
    // NOP
label_18d3ec:
    // 0x18d3ec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18d3f0:
    if (ctx->pc == 0x18D3F0u) {
        ctx->pc = 0x18D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ECu;
        // 0x18d3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3F4u;
        goto label_18d3f4;
    }
    ctx->pc = 0x18D3ECu;
    {
        const bool branch_taken_0x18d3ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ECu;
        // 0x18d3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3ec) {
            ctx->pc = 0x18D420u;
            goto label_18d420;
        }
    }
    ctx->pc = 0x18D3F4u;
label_18d3f4:
    // 0x18d3f4: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x18d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d3f8:
    // 0x18d3f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18d3f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d3fc:
    // 0x18d3fc: 0x0  nop
    ctx->pc = 0x18d3fcu;
    // NOP
label_18d400:
    // 0x18d400: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18d404:
    if (ctx->pc == 0x18D404u) {
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D400u;
        // 0x18d404: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D408u;
        goto label_18d408;
    }
    ctx->pc = 0x18D400u;
    {
        const bool branch_taken_0x18d400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D400u;
        // 0x18d404: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d400) {
            ctx->pc = 0x18D420u;
            goto label_18d420;
        }
    }
    ctx->pc = 0x18D408u;
label_18d408:
    // 0x18d408: 0xe60101fc  swc1        $f1, 0x1FC($s0)
    ctx->pc = 0x18d408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
label_18d40c:
    // 0x18d40c: 0xa6000210  sh          $zero, 0x210($s0)
    ctx->pc = 0x18d40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 528), (uint16_t)GPR_U32(ctx, 0));
label_18d410:
    // 0x18d410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18d410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d414:
    // 0x18d414: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x18d414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
label_18d418:
    // 0x18d418: 0xac400174  sw          $zero, 0x174($v0)
    ctx->pc = 0x18d418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 0));
label_18d41c:
    // 0x18d41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d420:
    // 0x18d420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d424:
    // 0x18d424: 0xc48c014c  lwc1        $f12, 0x14C($a0)
    ctx->pc = 0x18d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d428:
    // 0x18d428: 0xc0630c4  jal         func_18C310
label_18d42c:
    if (ctx->pc == 0x18D42Cu) {
        ctx->pc = 0x18D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D428u;
        // 0x18d42c: 0xc48d0150  lwc1        $f13, 0x150($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D430u;
        goto label_18d430;
    }
    ctx->pc = 0x18D428u;
    SET_GPR_U32(ctx, 31, 0x18D430u);
    ctx->pc = 0x18D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D428u;
    // 0x18d42c: 0xc48d0150  lwc1        $f13, 0x150($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C310u, 0x18D428u, 0x18D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D430u;
label_18d430:
    // 0x18d430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18d430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18d434:
    // 0x18d434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18d438:
    // 0x18d438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d43c:
    // 0x18d43c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x18d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18d440:
    // 0x18d440: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18d440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d444:
    // 0x18d444: 0x3e00008  jr          $ra
label_18d448:
    if (ctx->pc == 0x18D448u) {
        ctx->pc = 0x18D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D444u;
        // 0x18d448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D44Cu;
        goto label_18d44c;
    }
    ctx->pc = 0x18D444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D444u;
        // 0x18d448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D44Cu;
label_18d44c:
    // 0x18d44c: 0x0  nop
    ctx->pc = 0x18d44cu;
    // NOP
    ctx->pc = 0x18d450u;
}
