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

// Function: sub_003F01D8
// Address: 0x3f01d8 - 0x3f0360
void sub_003F01D8_0x3f01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F01D8_0x3f01d8");
#endif

    switch (ctx->pc) {
        case 0x3f01d8u: goto label_3f01d8;
        case 0x3f01dcu: goto label_3f01dc;
        case 0x3f01e0u: goto label_3f01e0;
        case 0x3f01e4u: goto label_3f01e4;
        case 0x3f01e8u: goto label_3f01e8;
        case 0x3f01ecu: goto label_3f01ec;
        case 0x3f01f0u: goto label_3f01f0;
        case 0x3f01f4u: goto label_3f01f4;
        case 0x3f01f8u: goto label_3f01f8;
        case 0x3f01fcu: goto label_3f01fc;
        case 0x3f0200u: goto label_3f0200;
        case 0x3f0204u: goto label_3f0204;
        case 0x3f0208u: goto label_3f0208;
        case 0x3f020cu: goto label_3f020c;
        case 0x3f0210u: goto label_3f0210;
        case 0x3f0214u: goto label_3f0214;
        case 0x3f0218u: goto label_3f0218;
        case 0x3f021cu: goto label_3f021c;
        case 0x3f0220u: goto label_3f0220;
        case 0x3f0224u: goto label_3f0224;
        case 0x3f0228u: goto label_3f0228;
        case 0x3f022cu: goto label_3f022c;
        case 0x3f0230u: goto label_3f0230;
        case 0x3f0234u: goto label_3f0234;
        case 0x3f0238u: goto label_3f0238;
        case 0x3f023cu: goto label_3f023c;
        case 0x3f0240u: goto label_3f0240;
        case 0x3f0244u: goto label_3f0244;
        case 0x3f0248u: goto label_3f0248;
        case 0x3f024cu: goto label_3f024c;
        case 0x3f0250u: goto label_3f0250;
        case 0x3f0254u: goto label_3f0254;
        case 0x3f0258u: goto label_3f0258;
        case 0x3f025cu: goto label_3f025c;
        case 0x3f0260u: goto label_3f0260;
        case 0x3f0264u: goto label_3f0264;
        case 0x3f0268u: goto label_3f0268;
        case 0x3f026cu: goto label_3f026c;
        case 0x3f0270u: goto label_3f0270;
        case 0x3f0274u: goto label_3f0274;
        case 0x3f0278u: goto label_3f0278;
        case 0x3f027cu: goto label_3f027c;
        case 0x3f0280u: goto label_3f0280;
        case 0x3f0284u: goto label_3f0284;
        case 0x3f0288u: goto label_3f0288;
        case 0x3f028cu: goto label_3f028c;
        case 0x3f0290u: goto label_3f0290;
        case 0x3f0294u: goto label_3f0294;
        case 0x3f0298u: goto label_3f0298;
        case 0x3f029cu: goto label_3f029c;
        case 0x3f02a0u: goto label_3f02a0;
        case 0x3f02a4u: goto label_3f02a4;
        case 0x3f02a8u: goto label_3f02a8;
        case 0x3f02acu: goto label_3f02ac;
        case 0x3f02b0u: goto label_3f02b0;
        case 0x3f02b4u: goto label_3f02b4;
        case 0x3f02b8u: goto label_3f02b8;
        case 0x3f02bcu: goto label_3f02bc;
        case 0x3f02c0u: goto label_3f02c0;
        case 0x3f02c4u: goto label_3f02c4;
        case 0x3f02c8u: goto label_3f02c8;
        case 0x3f02ccu: goto label_3f02cc;
        case 0x3f02d0u: goto label_3f02d0;
        case 0x3f02d4u: goto label_3f02d4;
        case 0x3f02d8u: goto label_3f02d8;
        case 0x3f02dcu: goto label_3f02dc;
        case 0x3f02e0u: goto label_3f02e0;
        case 0x3f02e4u: goto label_3f02e4;
        case 0x3f02e8u: goto label_3f02e8;
        case 0x3f02ecu: goto label_3f02ec;
        case 0x3f02f0u: goto label_3f02f0;
        case 0x3f02f4u: goto label_3f02f4;
        case 0x3f02f8u: goto label_3f02f8;
        case 0x3f02fcu: goto label_3f02fc;
        case 0x3f0300u: goto label_3f0300;
        case 0x3f0304u: goto label_3f0304;
        case 0x3f0308u: goto label_3f0308;
        case 0x3f030cu: goto label_3f030c;
        case 0x3f0310u: goto label_3f0310;
        case 0x3f0314u: goto label_3f0314;
        case 0x3f0318u: goto label_3f0318;
        case 0x3f031cu: goto label_3f031c;
        case 0x3f0320u: goto label_3f0320;
        case 0x3f0324u: goto label_3f0324;
        case 0x3f0328u: goto label_3f0328;
        case 0x3f032cu: goto label_3f032c;
        case 0x3f0330u: goto label_3f0330;
        case 0x3f0334u: goto label_3f0334;
        case 0x3f0338u: goto label_3f0338;
        case 0x3f033cu: goto label_3f033c;
        case 0x3f0340u: goto label_3f0340;
        case 0x3f0344u: goto label_3f0344;
        case 0x3f0348u: goto label_3f0348;
        case 0x3f034cu: goto label_3f034c;
        case 0x3f0350u: goto label_3f0350;
        case 0x3f0354u: goto label_3f0354;
        case 0x3f0358u: goto label_3f0358;
        case 0x3f035cu: goto label_3f035c;
        default: break;
    }

    ctx->pc = 0x3f01d8u;

label_3f01d8:
    // 0x3f01d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f01d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f01dc:
    // 0x3f01dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3f01dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3f01e0:
    // 0x3f01e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3f01e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3f01e4:
    // 0x3f01e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f01e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f01e8:
    // 0x3f01e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3f01e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3f01ec:
    // 0x3f01ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f01ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f01f0:
    // 0x3f01f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3f01f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3f01f4:
    // 0x3f01f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f01f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3f01f8:
    // 0x3f01f8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3f01f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_3f01fc:
    // 0x3f01fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f01fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f0200:
    // 0x3f0200: 0x3673ff00  ori         $s3, $s3, 0xFF00
    ctx->pc = 0x3f0200u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65280);
label_3f0204:
    // 0x3f0204: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f0204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f0208:
    // 0x3f0208: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f0208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f020c:
    // 0x3f020c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f0210:
    // 0x3f0210: 0x40f809  jalr        $v0
label_3f0214:
    if (ctx->pc == 0x3F0214u) {
        ctx->pc = 0x3F0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0210u;
        // 0x3f0214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0218u;
        goto label_3f0218;
    }
    ctx->pc = 0x3F0210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F0218u);
        ctx->pc = 0x3F0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0210u;
        // 0x3f0214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0210u, 0x3F0218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0218u;
label_3f0218:
    // 0x3f0218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f0218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f021c:
    // 0x3f021c: 0xc0ea14c  jal         func_3A8530
label_3f0220:
    if (ctx->pc == 0x3F0220u) {
        ctx->pc = 0x3F0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F021Cu;
        // 0x3f0220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0224u;
        goto label_3f0224;
    }
    ctx->pc = 0x3F021Cu;
    SET_GPR_U32(ctx, 31, 0x3F0224u);
    ctx->pc = 0x3F0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F021Cu;
    // 0x3f0220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F021Cu, 0x3F0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0224u;
label_3f0224:
    // 0x3f0224: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f0224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f0228:
    // 0x3f0228: 0xc0ea12a  jal         func_3A84A8
label_3f022c:
    if (ctx->pc == 0x3F022Cu) {
        ctx->pc = 0x3F022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0228u;
        // 0x3f022c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0230u;
        goto label_3f0230;
    }
    ctx->pc = 0x3F0228u;
    SET_GPR_U32(ctx, 31, 0x3F0230u);
    ctx->pc = 0x3F022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0228u;
    // 0x3f022c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F0228u, 0x3F0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0230u;
label_3f0230:
    // 0x3f0230: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f0230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0234:
    // 0x3f0234: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f0238:
    // 0x3f0238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f0238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f023c:
    // 0x3f023c: 0xc0ea12a  jal         func_3A84A8
label_3f0240:
    if (ctx->pc == 0x3F0240u) {
        ctx->pc = 0x3F0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F023Cu;
        // 0x3f0240: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0244u;
        goto label_3f0244;
    }
    ctx->pc = 0x3F023Cu;
    SET_GPR_U32(ctx, 31, 0x3F0244u);
    ctx->pc = 0x3F0240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F023Cu;
    // 0x3f0240: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F023Cu, 0x3F0244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0244u;
label_3f0244:
    // 0x3f0244: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f0244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0248:
    // 0x3f0248: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f0248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f024c:
    // 0x3f024c: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x3f024cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_3f0250:
    // 0x3f0250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0254:
    // 0x3f0254: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f0254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f0258:
    // 0x3f0258: 0xc0e858c  jal         func_3A1630
label_3f025c:
    if (ctx->pc == 0x3F025Cu) {
        ctx->pc = 0x3F025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0258u;
        // 0x3f025c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0260u;
        goto label_3f0260;
    }
    ctx->pc = 0x3F0258u;
    SET_GPR_U32(ctx, 31, 0x3F0260u);
    ctx->pc = 0x3F025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0258u;
    // 0x3f025c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0258u, 0x3F0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0260u;
label_3f0260:
    // 0x3f0260: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f0260u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0264:
    // 0x3f0264: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x3f0264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_3f0268:
    // 0x3f0268: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3f0268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f026c:
    // 0x3f026c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0270:
    // 0x3f0270: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3f0270u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3f0274:
    // 0x3f0274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0278:
    // 0x3f0278: 0xc0e9132  jal         func_3A44C8
label_3f027c:
    if (ctx->pc == 0x3F027Cu) {
        ctx->pc = 0x3F027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0278u;
        // 0x3f027c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0280u;
        goto label_3f0280;
    }
    ctx->pc = 0x3F0278u;
    SET_GPR_U32(ctx, 31, 0x3F0280u);
    ctx->pc = 0x3F027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0278u;
    // 0x3f027c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F0278u, 0x3F0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0280u;
label_3f0280:
    // 0x3f0280: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f0280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f0284:
    // 0x3f0284: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f0284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f0288:
    // 0x3f0288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f028c:
    // 0x3f028c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3f028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f0290:
    // 0x3f0290: 0x3c01c3a1  lui         $at, 0xC3A1
    ctx->pc = 0x3f0290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50081 << 16));
label_3f0294:
    // 0x3f0294: 0x3421a666  ori         $at, $at, 0xA666
    ctx->pc = 0x3f0294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42598);
label_3f0298:
    // 0x3f0298: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f029c:
    // 0x3f029c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f029cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3f02a0:
    // 0x3f02a0: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x3f02a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
label_3f02a4:
    // 0x3f02a4: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x3f02a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_3f02a8:
    // 0x3f02a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f02a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f02ac:
    // 0x3f02ac: 0x263116c0  addiu       $s1, $s1, 0x16C0
    ctx->pc = 0x3f02acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
label_3f02b0:
    // 0x3f02b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f02b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f02b4:
    // 0x3f02b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f02b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f02b8:
    // 0x3f02b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f02b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f02bc:
    // 0x3f02bc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3f02bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f02c0:
    // 0x3f02c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f02c4:
    // 0x3f02c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f02c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f02c8:
    // 0x3f02c8: 0x24845eb8  addiu       $a0, $a0, 0x5EB8
    ctx->pc = 0x3f02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24248));
label_3f02cc:
    // 0x3f02cc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f02ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f02d0:
    // 0x3f02d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f02d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f02d4:
    // 0x3f02d4: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f02d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f02d8:
    // 0x3f02d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f02d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f02dc:
    // 0x3f02dc: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3f02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3f02e0:
    // 0x3f02e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3f02e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f02e4:
    // 0x3f02e4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f02e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f02e8:
    // 0x3f02e8: 0xae1300c8  sw          $s3, 0xC8($s0)
    ctx->pc = 0x3f02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 19));
label_3f02ec:
    // 0x3f02ec: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f02f0:
    // 0x3f02f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f02f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f02f4:
    // 0x3f02f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3f02f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3f02f8:
    // 0x3f02f8: 0xae48000c  sw          $t0, 0xC($s2)
    ctx->pc = 0x3f02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 8));
label_3f02fc:
    // 0x3f02fc: 0xc0e94fc  jal         func_3A53F0
label_3f0300:
    if (ctx->pc == 0x3F0300u) {
        ctx->pc = 0x3F0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F02FCu;
        // 0x3f0300: 0xae480008  sw          $t0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0304u;
        goto label_3f0304;
    }
    ctx->pc = 0x3F02FCu;
    SET_GPR_U32(ctx, 31, 0x3F0304u);
    ctx->pc = 0x3F0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F02FCu;
    // 0x3f0300: 0xae480008  sw          $t0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F02FCu, 0x3F0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0304u;
label_3f0304:
    // 0x3f0304: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3f0304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3f0308:
    // 0x3f0308: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f0308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f030c:
    // 0x3f030c: 0x24845ed0  addiu       $a0, $a0, 0x5ED0
    ctx->pc = 0x3f030cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24272));
label_3f0310:
    // 0x3f0310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f0310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0314:
    // 0x3f0314: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f0314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f0318:
    // 0x3f0318: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3f0318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f031c:
    // 0x3f031c: 0xc0e94fc  jal         func_3A53F0
label_3f0320:
    if (ctx->pc == 0x3F0320u) {
        ctx->pc = 0x3F0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F031Cu;
        // 0x3f0320: 0xac5300c8  sw          $s3, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0324u;
        goto label_3f0324;
    }
    ctx->pc = 0x3F031Cu;
    SET_GPR_U32(ctx, 31, 0x3F0324u);
    ctx->pc = 0x3F0320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F031Cu;
    // 0x3f0320: 0xac5300c8  sw          $s3, 0xC8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F031Cu, 0x3F0324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0324u;
label_3f0324:
    // 0x3f0324: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f0324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f0328:
    // 0x3f0328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f0328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f032c:
    // 0x3f032c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f032cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f0330:
    // 0x3f0330: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3f0330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0334:
    // 0x3f0334: 0xc0e94fc  jal         func_3A53F0
label_3f0338:
    if (ctx->pc == 0x3F0338u) {
        ctx->pc = 0x3F0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0334u;
        // 0x3f0338: 0x24845ee8  addiu       $a0, $a0, 0x5EE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F033Cu;
        goto label_3f033c;
    }
    ctx->pc = 0x3F0334u;
    SET_GPR_U32(ctx, 31, 0x3F033Cu);
    ctx->pc = 0x3F0338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0334u;
    // 0x3f0338: 0x24845ee8  addiu       $a0, $a0, 0x5EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F0334u, 0x3F033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F033Cu;
label_3f033c:
    // 0x3f033c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3f033cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f0340:
    // 0x3f0340: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3f0340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f0344:
    // 0x3f0344: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3f0344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f0348:
    // 0x3f0348: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3f0348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f034c:
    // 0x3f034c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f034cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f0350:
    // 0x3f0350: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0354:
    // 0x3f0354: 0x3e00008  jr          $ra
label_3f0358:
    if (ctx->pc == 0x3F0358u) {
        ctx->pc = 0x3F0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0354u;
        // 0x3f0358: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F035Cu;
        goto label_3f035c;
    }
    ctx->pc = 0x3F0354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0354u;
        // 0x3f0358: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F035Cu;
label_3f035c:
    // 0x3f035c: 0x0  nop
    ctx->pc = 0x3f035cu;
    // NOP
    ctx->pc = 0x3f0360u;
}
