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

// Function: sub_0031D0E8
// Address: 0x31d0e8 - 0x31d358
void sub_0031D0E8_0x31d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D0E8_0x31d0e8");
#endif

    switch (ctx->pc) {
        case 0x31d0e8u: goto label_31d0e8;
        case 0x31d0ecu: goto label_31d0ec;
        case 0x31d0f0u: goto label_31d0f0;
        case 0x31d0f4u: goto label_31d0f4;
        case 0x31d0f8u: goto label_31d0f8;
        case 0x31d0fcu: goto label_31d0fc;
        case 0x31d100u: goto label_31d100;
        case 0x31d104u: goto label_31d104;
        case 0x31d108u: goto label_31d108;
        case 0x31d10cu: goto label_31d10c;
        case 0x31d110u: goto label_31d110;
        case 0x31d114u: goto label_31d114;
        case 0x31d118u: goto label_31d118;
        case 0x31d11cu: goto label_31d11c;
        case 0x31d120u: goto label_31d120;
        case 0x31d124u: goto label_31d124;
        case 0x31d128u: goto label_31d128;
        case 0x31d12cu: goto label_31d12c;
        case 0x31d130u: goto label_31d130;
        case 0x31d134u: goto label_31d134;
        case 0x31d138u: goto label_31d138;
        case 0x31d13cu: goto label_31d13c;
        case 0x31d140u: goto label_31d140;
        case 0x31d144u: goto label_31d144;
        case 0x31d148u: goto label_31d148;
        case 0x31d14cu: goto label_31d14c;
        case 0x31d150u: goto label_31d150;
        case 0x31d154u: goto label_31d154;
        case 0x31d158u: goto label_31d158;
        case 0x31d15cu: goto label_31d15c;
        case 0x31d160u: goto label_31d160;
        case 0x31d164u: goto label_31d164;
        case 0x31d168u: goto label_31d168;
        case 0x31d16cu: goto label_31d16c;
        case 0x31d170u: goto label_31d170;
        case 0x31d174u: goto label_31d174;
        case 0x31d178u: goto label_31d178;
        case 0x31d17cu: goto label_31d17c;
        case 0x31d180u: goto label_31d180;
        case 0x31d184u: goto label_31d184;
        case 0x31d188u: goto label_31d188;
        case 0x31d18cu: goto label_31d18c;
        case 0x31d190u: goto label_31d190;
        case 0x31d194u: goto label_31d194;
        case 0x31d198u: goto label_31d198;
        case 0x31d19cu: goto label_31d19c;
        case 0x31d1a0u: goto label_31d1a0;
        case 0x31d1a4u: goto label_31d1a4;
        case 0x31d1a8u: goto label_31d1a8;
        case 0x31d1acu: goto label_31d1ac;
        case 0x31d1b0u: goto label_31d1b0;
        case 0x31d1b4u: goto label_31d1b4;
        case 0x31d1b8u: goto label_31d1b8;
        case 0x31d1bcu: goto label_31d1bc;
        case 0x31d1c0u: goto label_31d1c0;
        case 0x31d1c4u: goto label_31d1c4;
        case 0x31d1c8u: goto label_31d1c8;
        case 0x31d1ccu: goto label_31d1cc;
        case 0x31d1d0u: goto label_31d1d0;
        case 0x31d1d4u: goto label_31d1d4;
        case 0x31d1d8u: goto label_31d1d8;
        case 0x31d1dcu: goto label_31d1dc;
        case 0x31d1e0u: goto label_31d1e0;
        case 0x31d1e4u: goto label_31d1e4;
        case 0x31d1e8u: goto label_31d1e8;
        case 0x31d1ecu: goto label_31d1ec;
        case 0x31d1f0u: goto label_31d1f0;
        case 0x31d1f4u: goto label_31d1f4;
        case 0x31d1f8u: goto label_31d1f8;
        case 0x31d1fcu: goto label_31d1fc;
        case 0x31d200u: goto label_31d200;
        case 0x31d204u: goto label_31d204;
        case 0x31d208u: goto label_31d208;
        case 0x31d20cu: goto label_31d20c;
        case 0x31d210u: goto label_31d210;
        case 0x31d214u: goto label_31d214;
        case 0x31d218u: goto label_31d218;
        case 0x31d21cu: goto label_31d21c;
        case 0x31d220u: goto label_31d220;
        case 0x31d224u: goto label_31d224;
        case 0x31d228u: goto label_31d228;
        case 0x31d22cu: goto label_31d22c;
        case 0x31d230u: goto label_31d230;
        case 0x31d234u: goto label_31d234;
        case 0x31d238u: goto label_31d238;
        case 0x31d23cu: goto label_31d23c;
        case 0x31d240u: goto label_31d240;
        case 0x31d244u: goto label_31d244;
        case 0x31d248u: goto label_31d248;
        case 0x31d24cu: goto label_31d24c;
        case 0x31d250u: goto label_31d250;
        case 0x31d254u: goto label_31d254;
        case 0x31d258u: goto label_31d258;
        case 0x31d25cu: goto label_31d25c;
        case 0x31d260u: goto label_31d260;
        case 0x31d264u: goto label_31d264;
        case 0x31d268u: goto label_31d268;
        case 0x31d26cu: goto label_31d26c;
        case 0x31d270u: goto label_31d270;
        case 0x31d274u: goto label_31d274;
        case 0x31d278u: goto label_31d278;
        case 0x31d27cu: goto label_31d27c;
        case 0x31d280u: goto label_31d280;
        case 0x31d284u: goto label_31d284;
        case 0x31d288u: goto label_31d288;
        case 0x31d28cu: goto label_31d28c;
        case 0x31d290u: goto label_31d290;
        case 0x31d294u: goto label_31d294;
        case 0x31d298u: goto label_31d298;
        case 0x31d29cu: goto label_31d29c;
        case 0x31d2a0u: goto label_31d2a0;
        case 0x31d2a4u: goto label_31d2a4;
        case 0x31d2a8u: goto label_31d2a8;
        case 0x31d2acu: goto label_31d2ac;
        case 0x31d2b0u: goto label_31d2b0;
        case 0x31d2b4u: goto label_31d2b4;
        case 0x31d2b8u: goto label_31d2b8;
        case 0x31d2bcu: goto label_31d2bc;
        case 0x31d2c0u: goto label_31d2c0;
        case 0x31d2c4u: goto label_31d2c4;
        case 0x31d2c8u: goto label_31d2c8;
        case 0x31d2ccu: goto label_31d2cc;
        case 0x31d2d0u: goto label_31d2d0;
        case 0x31d2d4u: goto label_31d2d4;
        case 0x31d2d8u: goto label_31d2d8;
        case 0x31d2dcu: goto label_31d2dc;
        case 0x31d2e0u: goto label_31d2e0;
        case 0x31d2e4u: goto label_31d2e4;
        case 0x31d2e8u: goto label_31d2e8;
        case 0x31d2ecu: goto label_31d2ec;
        case 0x31d2f0u: goto label_31d2f0;
        case 0x31d2f4u: goto label_31d2f4;
        case 0x31d2f8u: goto label_31d2f8;
        case 0x31d2fcu: goto label_31d2fc;
        case 0x31d300u: goto label_31d300;
        case 0x31d304u: goto label_31d304;
        case 0x31d308u: goto label_31d308;
        case 0x31d30cu: goto label_31d30c;
        case 0x31d310u: goto label_31d310;
        case 0x31d314u: goto label_31d314;
        case 0x31d318u: goto label_31d318;
        case 0x31d31cu: goto label_31d31c;
        case 0x31d320u: goto label_31d320;
        case 0x31d324u: goto label_31d324;
        case 0x31d328u: goto label_31d328;
        case 0x31d32cu: goto label_31d32c;
        case 0x31d330u: goto label_31d330;
        case 0x31d334u: goto label_31d334;
        case 0x31d338u: goto label_31d338;
        case 0x31d33cu: goto label_31d33c;
        case 0x31d340u: goto label_31d340;
        case 0x31d344u: goto label_31d344;
        case 0x31d348u: goto label_31d348;
        case 0x31d34cu: goto label_31d34c;
        case 0x31d350u: goto label_31d350;
        case 0x31d354u: goto label_31d354;
        default: break;
    }

    ctx->pc = 0x31d0e8u;

label_31d0e8:
    // 0x31d0e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31d0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31d0ec:
    // 0x31d0ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31d0f0:
    // 0x31d0f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31d0f4:
    // 0x31d0f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31d0f8:
    // 0x31d0f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d0fc:
    // 0x31d0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31d100:
    // 0x31d100: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31d100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31d104:
    // 0x31d104: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31d104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31d108:
    // 0x31d108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d10c:
    // 0x31d10c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x31d10cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_31d110:
    // 0x31d110: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x31d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_31d114:
    // 0x31d114: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31d118:
    if (ctx->pc == 0x31D118u) {
        ctx->pc = 0x31D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D114u;
        // 0x31d118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D11Cu;
        goto label_31d11c;
    }
    ctx->pc = 0x31D114u;
    {
        const bool branch_taken_0x31d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D114u;
        // 0x31d118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d114) {
            ctx->pc = 0x31D13Cu;
            goto label_31d13c;
        }
    }
    ctx->pc = 0x31D11Cu;
label_31d11c:
    // 0x31d11c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31d120:
    // 0x31d120: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x31d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_31d124:
    // 0x31d124: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x31d124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
label_31d128:
    // 0x31d128: 0x54600081  bnel        $v1, $zero, . + 4 + (0x81 << 2)
label_31d12c:
    if (ctx->pc == 0x31D12Cu) {
        ctx->pc = 0x31D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D128u;
        // 0x31d12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D130u;
        goto label_31d130;
    }
    ctx->pc = 0x31D128u;
    {
        const bool branch_taken_0x31d128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d128) {
            ctx->pc = 0x31D12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D128u;
            // 0x31d12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D330u;
            goto label_31d330;
        }
    }
    ctx->pc = 0x31D130u;
label_31d130:
    // 0x31d130: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x31d130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_31d134:
    // 0x31d134: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31d138:
    if (ctx->pc == 0x31D138u) {
        ctx->pc = 0x31D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D134u;
        // 0x31d138: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D13Cu;
        goto label_31d13c;
    }
    ctx->pc = 0x31D134u;
    {
        const bool branch_taken_0x31d134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d134) {
            ctx->pc = 0x31D138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D134u;
            // 0x31d138: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D144u;
            goto label_31d144;
        }
    }
    ctx->pc = 0x31D13Cu;
label_31d13c:
    // 0x31d13c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_31d140:
    if (ctx->pc == 0x31D140u) {
        ctx->pc = 0x31D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D13Cu;
        // 0x31d140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D144u;
        goto label_31d144;
    }
    ctx->pc = 0x31D13Cu;
    {
        const bool branch_taken_0x31d13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D13Cu;
        // 0x31d140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d13c) {
            ctx->pc = 0x31D330u;
            goto label_31d330;
        }
    }
    ctx->pc = 0x31D144u;
label_31d144:
    // 0x31d144: 0xc059856  jal         func_166158
label_31d148:
    if (ctx->pc == 0x31D148u) {
        ctx->pc = 0x31D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D144u;
        // 0x31d148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D14Cu;
        goto label_31d14c;
    }
    ctx->pc = 0x31D144u;
    SET_GPR_U32(ctx, 31, 0x31D14Cu);
    ctx->pc = 0x31D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D144u;
    // 0x31d148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31D144u, 0x31D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D14Cu;
label_31d14c:
    // 0x31d14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d150:
    // 0x31d150: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x31d150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d154:
    // 0x31d154: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31d154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_31d158:
    // 0x31d158: 0x1603006d  bne         $s0, $v1, . + 4 + (0x6D << 2)
label_31d15c:
    if (ctx->pc == 0x31D15Cu) {
        ctx->pc = 0x31D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D158u;
        // 0x31d15c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D160u;
        goto label_31d160;
    }
    ctx->pc = 0x31D158u;
    {
        const bool branch_taken_0x31d158 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x31D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D158u;
        // 0x31d15c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d158) {
            ctx->pc = 0x31D310u;
            goto label_31d310;
        }
    }
    ctx->pc = 0x31D160u;
label_31d160:
    // 0x31d160: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d164:
    // 0x31d164: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31d164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31d168:
    // 0x31d168: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31d168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_31d16c:
    // 0x31d16c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31d16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31d170:
    // 0x31d170: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x31d170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31d174:
    // 0x31d174: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x31d174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_31d178:
    // 0x31d178: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31d178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d17c:
    // 0x31d17c: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x31d17cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_31d180:
    // 0x31d180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31d184:
    // 0x31d184: 0x0  nop
    ctx->pc = 0x31d184u;
    // NOP
label_31d188:
    // 0x31d188: 0xc137826  jal         func_4DE098
label_31d18c:
    if (ctx->pc == 0x31D18Cu) {
        ctx->pc = 0x31D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D188u;
        // 0x31d18c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D190u;
        goto label_31d190;
    }
    ctx->pc = 0x31D188u;
    SET_GPR_U32(ctx, 31, 0x31D190u);
    ctx->pc = 0x31D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D188u;
    // 0x31d18c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31D188u, 0x31D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D190u;
label_31d190:
    // 0x31d190: 0xc0e409a  jal         func_390268
label_31d194:
    if (ctx->pc == 0x31D194u) {
        ctx->pc = 0x31D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D190u;
        // 0x31d194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D198u;
        goto label_31d198;
    }
    ctx->pc = 0x31D190u;
    SET_GPR_U32(ctx, 31, 0x31D198u);
    ctx->pc = 0x31D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D190u;
    // 0x31d194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31D190u, 0x31D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D198u;
label_31d198:
    // 0x31d198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d19c:
    // 0x31d19c: 0x52000053  beql        $s0, $zero, . + 4 + (0x53 << 2)
label_31d1a0:
    if (ctx->pc == 0x31D1A0u) {
        ctx->pc = 0x31D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D19Cu;
        // 0x31d1a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1A4u;
        goto label_31d1a4;
    }
    ctx->pc = 0x31D19Cu;
    {
        const bool branch_taken_0x31d19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d19c) {
            ctx->pc = 0x31D1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D19Cu;
            // 0x31d1a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D1A4u;
label_31d1a4:
    // 0x31d1a4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31d1a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_31d1a8:
    // 0x31d1a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31d1a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31d1ac:
    // 0x31d1ac: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_31d1b0:
    if (ctx->pc == 0x31D1B0u) {
        ctx->pc = 0x31D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1ACu;
        // 0x31d1b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1B4u;
        goto label_31d1b4;
    }
    ctx->pc = 0x31D1ACu;
    {
        const bool branch_taken_0x31d1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d1ac) {
            ctx->pc = 0x31D1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D1ACu;
            // 0x31d1b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D1B4u;
label_31d1b4:
    // 0x31d1b4: 0xc087502  jal         func_21D408
label_31d1b8:
    if (ctx->pc == 0x31D1B8u) {
        ctx->pc = 0x31D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1B4u;
        // 0x31d1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1BCu;
        goto label_31d1bc;
    }
    ctx->pc = 0x31D1B4u;
    SET_GPR_U32(ctx, 31, 0x31D1BCu);
    ctx->pc = 0x31D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1B4u;
    // 0x31d1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D1B4u, 0x31D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1BCu;
label_31d1bc:
    // 0x31d1bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31d1bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d1c0:
    // 0x31d1c0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31d1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31d1c4:
    // 0x31d1c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31d1c8:
    if (ctx->pc == 0x31D1C8u) {
        ctx->pc = 0x31D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1C4u;
        // 0x31d1c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1CCu;
        goto label_31d1cc;
    }
    ctx->pc = 0x31D1C4u;
    {
        const bool branch_taken_0x31d1c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1C4u;
        // 0x31d1c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1c4) {
            ctx->pc = 0x31D1D8u;
            goto label_31d1d8;
        }
    }
    ctx->pc = 0x31D1CCu;
label_31d1cc:
    // 0x31d1cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31d1d0:
    // 0x31d1d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_31d1d4:
    if (ctx->pc == 0x31D1D4u) {
        ctx->pc = 0x31D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1D0u;
        // 0x31d1d4: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1D8u;
        goto label_31d1d8;
    }
    ctx->pc = 0x31D1D0u;
    {
        const bool branch_taken_0x31d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1D0u;
        // 0x31d1d4: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1d0) {
            ctx->pc = 0x31D1DCu;
            goto label_31d1dc;
        }
    }
    ctx->pc = 0x31D1D8u;
label_31d1d8:
    // 0x31d1d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d1dc:
    // 0x31d1dc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_31d1e0:
    if (ctx->pc == 0x31D1E0u) {
        ctx->pc = 0x31D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1DCu;
        // 0x31d1e0: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1E4u;
        goto label_31d1e4;
    }
    ctx->pc = 0x31D1DCu;
    {
        const bool branch_taken_0x31d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d1dc) {
            ctx->pc = 0x31D1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D1DCu;
            // 0x31d1e0: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D230u;
            goto label_31d230;
        }
    }
    ctx->pc = 0x31D1E4u;
label_31d1e4:
    // 0x31d1e4: 0xc087502  jal         func_21D408
label_31d1e8:
    if (ctx->pc == 0x31D1E8u) {
        ctx->pc = 0x31D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1E4u;
        // 0x31d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1ECu;
        goto label_31d1ec;
    }
    ctx->pc = 0x31D1E4u;
    SET_GPR_U32(ctx, 31, 0x31D1ECu);
    ctx->pc = 0x31D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1E4u;
    // 0x31d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D1E4u, 0x31D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1ECu;
label_31d1ec:
    // 0x31d1ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31d1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d1f0:
    // 0x31d1f0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31d1f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31d1f4:
    // 0x31d1f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31d1f8:
    if (ctx->pc == 0x31D1F8u) {
        ctx->pc = 0x31D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1F4u;
        // 0x31d1f8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1FCu;
        goto label_31d1fc;
    }
    ctx->pc = 0x31D1F4u;
    {
        const bool branch_taken_0x31d1f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1F4u;
        // 0x31d1f8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1f4) {
            ctx->pc = 0x31D208u;
            goto label_31d208;
        }
    }
    ctx->pc = 0x31D1FCu;
label_31d1fc:
    // 0x31d1fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31d200:
    // 0x31d200: 0x10000002  b           . + 4 + (0x2 << 2)
label_31d204:
    if (ctx->pc == 0x31D204u) {
        ctx->pc = 0x31D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D200u;
        // 0x31d204: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D208u;
        goto label_31d208;
    }
    ctx->pc = 0x31D200u;
    {
        const bool branch_taken_0x31d200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D200u;
        // 0x31d204: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d200) {
            ctx->pc = 0x31D20Cu;
            goto label_31d20c;
        }
    }
    ctx->pc = 0x31D208u;
label_31d208:
    // 0x31d208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31d208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d20c:
    // 0x31d20c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x31d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_31d210:
    // 0x31d210: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31d210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31d214:
    // 0x31d214: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31d218:
    // 0x31d218: 0x40f809  jalr        $v0
label_31d21c:
    if (ctx->pc == 0x31D21Cu) {
        ctx->pc = 0x31D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D218u;
        // 0x31d21c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D220u;
        goto label_31d220;
    }
    ctx->pc = 0x31D218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D220u);
        ctx->pc = 0x31D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D218u;
        // 0x31d21c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D218u, 0x31D220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D220u;
label_31d220:
    // 0x31d220: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31d224:
    // 0x31d224: 0x50430031  beql        $v0, $v1, . + 4 + (0x31 << 2)
label_31d228:
    if (ctx->pc == 0x31D228u) {
        ctx->pc = 0x31D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D224u;
        // 0x31d228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D22Cu;
        goto label_31d22c;
    }
    ctx->pc = 0x31D224u;
    {
        const bool branch_taken_0x31d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d224) {
            ctx->pc = 0x31D228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D224u;
            // 0x31d228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D22Cu;
label_31d22c:
    // 0x31d22c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_31d230:
    // 0x31d230: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_31d234:
    if (ctx->pc == 0x31D234u) {
        ctx->pc = 0x31D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D230u;
        // 0x31d234: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D238u;
        goto label_31d238;
    }
    ctx->pc = 0x31D230u;
    {
        const bool branch_taken_0x31d230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d230) {
            ctx->pc = 0x31D234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D230u;
            // 0x31d234: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D28Cu;
            goto label_31d28c;
        }
    }
    ctx->pc = 0x31D238u;
label_31d238:
    // 0x31d238: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x31d238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
label_31d23c:
    // 0x31d23c: 0xc0cd4ee  jal         func_3353B8
label_31d240:
    if (ctx->pc == 0x31D240u) {
        ctx->pc = 0x31D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D23Cu;
        // 0x31d240: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D244u;
        goto label_31d244;
    }
    ctx->pc = 0x31D23Cu;
    SET_GPR_U32(ctx, 31, 0x31D244u);
    ctx->pc = 0x31D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D23Cu;
    // 0x31d240: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31D23Cu, 0x31D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D244u;
label_31d244:
    // 0x31d244: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31d244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_31d248:
    // 0x31d248: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31d24c:
    if (ctx->pc == 0x31D24Cu) {
        ctx->pc = 0x31D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D248u;
        // 0x31d24c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D250u;
        goto label_31d250;
    }
    ctx->pc = 0x31D248u;
    {
        const bool branch_taken_0x31d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D248u;
        // 0x31d24c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d248) {
            ctx->pc = 0x31D28Cu;
            goto label_31d28c;
        }
    }
    ctx->pc = 0x31D250u;
label_31d250:
    // 0x31d250: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_31d254:
    if (ctx->pc == 0x31D254u) {
        ctx->pc = 0x31D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D250u;
        // 0x31d254: 0xae30004c  sw          $s0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D258u;
        goto label_31d258;
    }
    ctx->pc = 0x31D250u;
    {
        const bool branch_taken_0x31d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d250) {
            ctx->pc = 0x31D254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D250u;
            // 0x31d254: 0xae30004c  sw          $s0, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2E8u;
            goto label_31d2e8;
        }
    }
    ctx->pc = 0x31D258u;
label_31d258:
    // 0x31d258: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31d258u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_31d25c:
    // 0x31d25c: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x31d25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31d260:
    // 0x31d260: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31d260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31d264:
    // 0x31d264: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31d264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31d268:
    // 0x31d268: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_31d26c:
    // 0x31d26c: 0xc0cdb38  jal         func_336CE0
label_31d270:
    if (ctx->pc == 0x31D270u) {
        ctx->pc = 0x31D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D26Cu;
        // 0x31d270: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D274u;
        goto label_31d274;
    }
    ctx->pc = 0x31D26Cu;
    SET_GPR_U32(ctx, 31, 0x31D274u);
    ctx->pc = 0x31D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D26Cu;
    // 0x31d270: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31D26Cu, 0x31D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D274u;
label_31d274:
    // 0x31d274: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31d274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d278:
    // 0x31d278: 0x0  nop
    ctx->pc = 0x31d278u;
    // NOP
label_31d27c:
    // 0x31d27c: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_31d280:
    if (ctx->pc == 0x31D280u) {
        ctx->pc = 0x31D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D27Cu;
        // 0x31d280: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D284u;
        goto label_31d284;
    }
    ctx->pc = 0x31D27Cu;
    {
        const bool branch_taken_0x31d27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d27c) {
            ctx->pc = 0x31D280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D27Cu;
            // 0x31d280: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D284u;
label_31d284:
    // 0x31d284: 0x10000018  b           . + 4 + (0x18 << 2)
label_31d288:
    if (ctx->pc == 0x31D288u) {
        ctx->pc = 0x31D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D284u;
        // 0x31d288: 0xae30004c  sw          $s0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D28Cu;
        goto label_31d28c;
    }
    ctx->pc = 0x31D284u;
    {
        const bool branch_taken_0x31d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D284u;
        // 0x31d288: 0xae30004c  sw          $s0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d284) {
            ctx->pc = 0x31D2E8u;
            goto label_31d2e8;
        }
    }
    ctx->pc = 0x31D28Cu;
label_31d28c:
    // 0x31d28c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_31d290:
    if (ctx->pc == 0x31D290u) {
        ctx->pc = 0x31D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D28Cu;
        // 0x31d290: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D294u;
        goto label_31d294;
    }
    ctx->pc = 0x31D28Cu;
    {
        const bool branch_taken_0x31d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d28c) {
            ctx->pc = 0x31D290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D28Cu;
            // 0x31d290: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D294u;
label_31d294:
    // 0x31d294: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x31d294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
label_31d298:
    // 0x31d298: 0xc0cd4ee  jal         func_3353B8
label_31d29c:
    if (ctx->pc == 0x31D29Cu) {
        ctx->pc = 0x31D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D298u;
        // 0x31d29c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2A0u;
        goto label_31d2a0;
    }
    ctx->pc = 0x31D298u;
    SET_GPR_U32(ctx, 31, 0x31D2A0u);
    ctx->pc = 0x31D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D298u;
    // 0x31d29c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31D298u, 0x31D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2A0u;
label_31d2a0:
    // 0x31d2a0: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31d2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_31d2a4:
    // 0x31d2a4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_31d2a8:
    if (ctx->pc == 0x31D2A8u) {
        ctx->pc = 0x31D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2A4u;
        // 0x31d2a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2ACu;
        goto label_31d2ac;
    }
    ctx->pc = 0x31D2A4u;
    {
        const bool branch_taken_0x31d2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2a4) {
            ctx->pc = 0x31D2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D2A4u;
            // 0x31d2a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D2ACu;
label_31d2ac:
    // 0x31d2ac: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x31d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_31d2b0:
    // 0x31d2b0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_31d2b4:
    if (ctx->pc == 0x31D2B4u) {
        ctx->pc = 0x31D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2B0u;
        // 0x31d2b4: 0xae300050  sw          $s0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2B8u;
        goto label_31d2b8;
    }
    ctx->pc = 0x31D2B0u;
    {
        const bool branch_taken_0x31d2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2b0) {
            ctx->pc = 0x31D2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D2B0u;
            // 0x31d2b4: 0xae300050  sw          $s0, 0x50($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2E8u;
            goto label_31d2e8;
        }
    }
    ctx->pc = 0x31D2B8u;
label_31d2b8:
    // 0x31d2b8: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31d2b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_31d2bc:
    // 0x31d2bc: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x31d2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31d2c0:
    // 0x31d2c0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31d2c4:
    // 0x31d2c4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31d2c8:
    // 0x31d2c8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x31d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_31d2cc:
    // 0x31d2cc: 0xc0cdb38  jal         func_336CE0
label_31d2d0:
    if (ctx->pc == 0x31D2D0u) {
        ctx->pc = 0x31D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2CCu;
        // 0x31d2d0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2D4u;
        goto label_31d2d4;
    }
    ctx->pc = 0x31D2CCu;
    SET_GPR_U32(ctx, 31, 0x31D2D4u);
    ctx->pc = 0x31D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2CCu;
    // 0x31d2d0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31D2CCu, 0x31D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2D4u;
label_31d2d4:
    // 0x31d2d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31d2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d2d8:
    // 0x31d2d8: 0x0  nop
    ctx->pc = 0x31d2d8u;
    // NOP
label_31d2dc:
    // 0x31d2dc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_31d2e0:
    if (ctx->pc == 0x31D2E0u) {
        ctx->pc = 0x31D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2DCu;
        // 0x31d2e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2E4u;
        goto label_31d2e4;
    }
    ctx->pc = 0x31D2DCu;
    {
        const bool branch_taken_0x31d2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d2dc) {
            ctx->pc = 0x31D2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D2DCu;
            // 0x31d2e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D2E4u;
label_31d2e4:
    // 0x31d2e4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x31d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_31d2e8:
    // 0x31d2e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31d2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31d2ec:
    // 0x31d2ec: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31d2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31d2f0:
    // 0x31d2f0: 0x5440ffa5  bnel        $v0, $zero, . + 4 + (-0x5B << 2)
label_31d2f4:
    if (ctx->pc == 0x31D2F4u) {
        ctx->pc = 0x31D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2F0u;
        // 0x31d2f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2F8u;
        goto label_31d2f8;
    }
    ctx->pc = 0x31D2F0u;
    {
        const bool branch_taken_0x31d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d2f0) {
            ctx->pc = 0x31D2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D2F0u;
            // 0x31d2f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d188;
        }
    }
    ctx->pc = 0x31D2F8u;
label_31d2f8:
    // 0x31d2f8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x31d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_31d2fc:
    // 0x31d2fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31d300:
    if (ctx->pc == 0x31D300u) {
        ctx->pc = 0x31D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2FCu;
        // 0x31d300: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D304u;
        goto label_31d304;
    }
    ctx->pc = 0x31D2FCu;
    {
        const bool branch_taken_0x31d2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2FCu;
        // 0x31d300: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2fc) {
            ctx->pc = 0x31D314u;
            goto label_31d314;
        }
    }
    ctx->pc = 0x31D304u;
label_31d304:
    // 0x31d304: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x31d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_31d308:
    // 0x31d308: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_31d30c:
    if (ctx->pc == 0x31D30Cu) {
        ctx->pc = 0x31D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D308u;
        // 0x31d30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D310u;
        goto label_31d310;
    }
    ctx->pc = 0x31D308u;
    {
        const bool branch_taken_0x31d308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D308u;
        // 0x31d30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d308) {
            ctx->pc = 0x31D330u;
            goto label_31d330;
        }
    }
    ctx->pc = 0x31D310u;
label_31d310:
    // 0x31d310: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31d314:
    // 0x31d314: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x31d314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_31d318:
    // 0x31d318: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31d318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31d31c:
    // 0x31d31c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x31d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_31d320:
    // 0x31d320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d324:
    // 0x31d324: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_31d328:
    // 0x31d328: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x31d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
label_31d32c:
    // 0x31d32c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x31d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_31d330:
    // 0x31d330: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31d334:
    // 0x31d334: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31d334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31d338:
    // 0x31d338: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31d338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31d33c:
    // 0x31d33c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d340:
    // 0x31d340: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31d340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d344:
    // 0x31d344: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31d344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d348:
    // 0x31d348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d34c:
    // 0x31d34c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x31d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31d350:
    // 0x31d350: 0x3e00008  jr          $ra
label_31d354:
    if (ctx->pc == 0x31D354u) {
        ctx->pc = 0x31D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D350u;
        // 0x31d354: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D358u;
        goto label_fallthrough_0x31d350;
    }
    ctx->pc = 0x31D350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D350u;
        // 0x31d354: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31d350:
    ctx->pc = 0x31D358u;
}
