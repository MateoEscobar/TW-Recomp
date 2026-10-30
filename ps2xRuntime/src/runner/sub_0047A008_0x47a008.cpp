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

// Function: sub_0047A008
// Address: 0x47a008 - 0x47a280
void sub_0047A008_0x47a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A008_0x47a008");
#endif

    switch (ctx->pc) {
        case 0x47a008u: goto label_47a008;
        case 0x47a00cu: goto label_47a00c;
        case 0x47a010u: goto label_47a010;
        case 0x47a014u: goto label_47a014;
        case 0x47a018u: goto label_47a018;
        case 0x47a01cu: goto label_47a01c;
        case 0x47a020u: goto label_47a020;
        case 0x47a024u: goto label_47a024;
        case 0x47a028u: goto label_47a028;
        case 0x47a02cu: goto label_47a02c;
        case 0x47a030u: goto label_47a030;
        case 0x47a034u: goto label_47a034;
        case 0x47a038u: goto label_47a038;
        case 0x47a03cu: goto label_47a03c;
        case 0x47a040u: goto label_47a040;
        case 0x47a044u: goto label_47a044;
        case 0x47a048u: goto label_47a048;
        case 0x47a04cu: goto label_47a04c;
        case 0x47a050u: goto label_47a050;
        case 0x47a054u: goto label_47a054;
        case 0x47a058u: goto label_47a058;
        case 0x47a05cu: goto label_47a05c;
        case 0x47a060u: goto label_47a060;
        case 0x47a064u: goto label_47a064;
        case 0x47a068u: goto label_47a068;
        case 0x47a06cu: goto label_47a06c;
        case 0x47a070u: goto label_47a070;
        case 0x47a074u: goto label_47a074;
        case 0x47a078u: goto label_47a078;
        case 0x47a07cu: goto label_47a07c;
        case 0x47a080u: goto label_47a080;
        case 0x47a084u: goto label_47a084;
        case 0x47a088u: goto label_47a088;
        case 0x47a08cu: goto label_47a08c;
        case 0x47a090u: goto label_47a090;
        case 0x47a094u: goto label_47a094;
        case 0x47a098u: goto label_47a098;
        case 0x47a09cu: goto label_47a09c;
        case 0x47a0a0u: goto label_47a0a0;
        case 0x47a0a4u: goto label_47a0a4;
        case 0x47a0a8u: goto label_47a0a8;
        case 0x47a0acu: goto label_47a0ac;
        case 0x47a0b0u: goto label_47a0b0;
        case 0x47a0b4u: goto label_47a0b4;
        case 0x47a0b8u: goto label_47a0b8;
        case 0x47a0bcu: goto label_47a0bc;
        case 0x47a0c0u: goto label_47a0c0;
        case 0x47a0c4u: goto label_47a0c4;
        case 0x47a0c8u: goto label_47a0c8;
        case 0x47a0ccu: goto label_47a0cc;
        case 0x47a0d0u: goto label_47a0d0;
        case 0x47a0d4u: goto label_47a0d4;
        case 0x47a0d8u: goto label_47a0d8;
        case 0x47a0dcu: goto label_47a0dc;
        case 0x47a0e0u: goto label_47a0e0;
        case 0x47a0e4u: goto label_47a0e4;
        case 0x47a0e8u: goto label_47a0e8;
        case 0x47a0ecu: goto label_47a0ec;
        case 0x47a0f0u: goto label_47a0f0;
        case 0x47a0f4u: goto label_47a0f4;
        case 0x47a0f8u: goto label_47a0f8;
        case 0x47a0fcu: goto label_47a0fc;
        case 0x47a100u: goto label_47a100;
        case 0x47a104u: goto label_47a104;
        case 0x47a108u: goto label_47a108;
        case 0x47a10cu: goto label_47a10c;
        case 0x47a110u: goto label_47a110;
        case 0x47a114u: goto label_47a114;
        case 0x47a118u: goto label_47a118;
        case 0x47a11cu: goto label_47a11c;
        case 0x47a120u: goto label_47a120;
        case 0x47a124u: goto label_47a124;
        case 0x47a128u: goto label_47a128;
        case 0x47a12cu: goto label_47a12c;
        case 0x47a130u: goto label_47a130;
        case 0x47a134u: goto label_47a134;
        case 0x47a138u: goto label_47a138;
        case 0x47a13cu: goto label_47a13c;
        case 0x47a140u: goto label_47a140;
        case 0x47a144u: goto label_47a144;
        case 0x47a148u: goto label_47a148;
        case 0x47a14cu: goto label_47a14c;
        case 0x47a150u: goto label_47a150;
        case 0x47a154u: goto label_47a154;
        case 0x47a158u: goto label_47a158;
        case 0x47a15cu: goto label_47a15c;
        case 0x47a160u: goto label_47a160;
        case 0x47a164u: goto label_47a164;
        case 0x47a168u: goto label_47a168;
        case 0x47a16cu: goto label_47a16c;
        case 0x47a170u: goto label_47a170;
        case 0x47a174u: goto label_47a174;
        case 0x47a178u: goto label_47a178;
        case 0x47a17cu: goto label_47a17c;
        case 0x47a180u: goto label_47a180;
        case 0x47a184u: goto label_47a184;
        case 0x47a188u: goto label_47a188;
        case 0x47a18cu: goto label_47a18c;
        case 0x47a190u: goto label_47a190;
        case 0x47a194u: goto label_47a194;
        case 0x47a198u: goto label_47a198;
        case 0x47a19cu: goto label_47a19c;
        case 0x47a1a0u: goto label_47a1a0;
        case 0x47a1a4u: goto label_47a1a4;
        case 0x47a1a8u: goto label_47a1a8;
        case 0x47a1acu: goto label_47a1ac;
        case 0x47a1b0u: goto label_47a1b0;
        case 0x47a1b4u: goto label_47a1b4;
        case 0x47a1b8u: goto label_47a1b8;
        case 0x47a1bcu: goto label_47a1bc;
        case 0x47a1c0u: goto label_47a1c0;
        case 0x47a1c4u: goto label_47a1c4;
        case 0x47a1c8u: goto label_47a1c8;
        case 0x47a1ccu: goto label_47a1cc;
        case 0x47a1d0u: goto label_47a1d0;
        case 0x47a1d4u: goto label_47a1d4;
        case 0x47a1d8u: goto label_47a1d8;
        case 0x47a1dcu: goto label_47a1dc;
        case 0x47a1e0u: goto label_47a1e0;
        case 0x47a1e4u: goto label_47a1e4;
        case 0x47a1e8u: goto label_47a1e8;
        case 0x47a1ecu: goto label_47a1ec;
        case 0x47a1f0u: goto label_47a1f0;
        case 0x47a1f4u: goto label_47a1f4;
        case 0x47a1f8u: goto label_47a1f8;
        case 0x47a1fcu: goto label_47a1fc;
        case 0x47a200u: goto label_47a200;
        case 0x47a204u: goto label_47a204;
        case 0x47a208u: goto label_47a208;
        case 0x47a20cu: goto label_47a20c;
        case 0x47a210u: goto label_47a210;
        case 0x47a214u: goto label_47a214;
        case 0x47a218u: goto label_47a218;
        case 0x47a21cu: goto label_47a21c;
        case 0x47a220u: goto label_47a220;
        case 0x47a224u: goto label_47a224;
        case 0x47a228u: goto label_47a228;
        case 0x47a22cu: goto label_47a22c;
        case 0x47a230u: goto label_47a230;
        case 0x47a234u: goto label_47a234;
        case 0x47a238u: goto label_47a238;
        case 0x47a23cu: goto label_47a23c;
        case 0x47a240u: goto label_47a240;
        case 0x47a244u: goto label_47a244;
        case 0x47a248u: goto label_47a248;
        case 0x47a24cu: goto label_47a24c;
        case 0x47a250u: goto label_47a250;
        case 0x47a254u: goto label_47a254;
        case 0x47a258u: goto label_47a258;
        case 0x47a25cu: goto label_47a25c;
        case 0x47a260u: goto label_47a260;
        case 0x47a264u: goto label_47a264;
        case 0x47a268u: goto label_47a268;
        case 0x47a26cu: goto label_47a26c;
        case 0x47a270u: goto label_47a270;
        case 0x47a274u: goto label_47a274;
        case 0x47a278u: goto label_47a278;
        case 0x47a27cu: goto label_47a27c;
        default: break;
    }

    ctx->pc = 0x47a008u;

label_47a008:
    // 0x47a008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47a00c:
    // 0x47a00c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47a010:
    // 0x47a010: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47a014:
    // 0x47a014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47a014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47a018:
    // 0x47a018: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47a01c:
    // 0x47a01c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47a01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47a020:
    // 0x47a020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47a024:
    // 0x47a024: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_47a028:
    if (ctx->pc == 0x47A028u) {
        ctx->pc = 0x47A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A024u;
        // 0x47a028: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A02Cu;
        goto label_47a02c;
    }
    ctx->pc = 0x47A024u;
    {
        const bool branch_taken_0x47a024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A024u;
        // 0x47a028: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a024) {
            ctx->pc = 0x47A040u;
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A02Cu;
label_47a02c:
    // 0x47a02c: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
label_47a030:
    if (ctx->pc == 0x47A030u) {
        ctx->pc = 0x47A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A02Cu;
        // 0x47a030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A034u;
        goto label_47a034;
    }
    ctx->pc = 0x47A02Cu;
    {
        const bool branch_taken_0x47a02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A02Cu;
        // 0x47a030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a02c) {
            ctx->pc = 0x47A264u;
            goto label_47a264;
        }
    }
    ctx->pc = 0x47A034u;
label_47a034:
    // 0x47a034: 0x2e42000b  sltiu       $v0, $s2, 0xB
    ctx->pc = 0x47a034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_47a038:
    // 0x47a038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_47a03c:
    if (ctx->pc == 0x47A03Cu) {
        ctx->pc = 0x47A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A038u;
        // 0x47a03c: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A040u;
        goto label_47a040;
    }
    ctx->pc = 0x47A038u;
    {
        const bool branch_taken_0x47a038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A038u;
        // 0x47a03c: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a038) {
            ctx->pc = 0x47A048u;
            goto label_47a048;
        }
    }
    ctx->pc = 0x47A040u;
label_47a040:
    // 0x47a040: 0x10000088  b           . + 4 + (0x88 << 2)
label_47a044:
    if (ctx->pc == 0x47A044u) {
        ctx->pc = 0x47A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A040u;
        // 0x47a044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A048u;
        goto label_47a048;
    }
    ctx->pc = 0x47A040u;
    {
        const bool branch_taken_0x47a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A040u;
        // 0x47a044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a040) {
            ctx->pc = 0x47A264u;
            goto label_47a264;
        }
    }
    ctx->pc = 0x47A048u;
label_47a048:
    // 0x47a048: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_47a04c:
    if (ctx->pc == 0x47A04Cu) {
        ctx->pc = 0x47A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A048u;
        // 0x47a04c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A050u;
        goto label_47a050;
    }
    ctx->pc = 0x47A048u;
    {
        const bool branch_taken_0x47a048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A048u;
        // 0x47a04c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a048) {
            ctx->pc = 0x47A1B8u;
            goto label_47a1b8;
        }
    }
    ctx->pc = 0x47A050u;
label_47a050:
    // 0x47a050: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x47a050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_47a054:
    // 0x47a054: 0x2442ee80  addiu       $v0, $v0, -0x1180
    ctx->pc = 0x47a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962816));
label_47a058:
    // 0x47a058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a05c:
    // 0x47a05c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47a060:
    // 0x47a060: 0x800008  jr          $a0
label_47a064:
    if (ctx->pc == 0x47A064u) {
        ctx->pc = 0x47A068u;
        goto label_47a068;
    }
    ctx->pc = 0x47A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x47A068u: goto label_47a068;
            case 0x47A0A0u: goto label_47a0a0;
            case 0x47A0D8u: goto label_47a0d8;
            case 0x47A110u: goto label_47a110;
            case 0x47A148u: goto label_47a148;
            case 0x47A188u: goto label_47a188;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x47A068u;
label_47a068:
    // 0x47a068: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47a06c:
    // 0x47a06c: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x47a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
label_47a070:
    // 0x47a070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47a070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47a074:
    // 0x47a074: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_47a078:
    if (ctx->pc == 0x47A078u) {
        ctx->pc = 0x47A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A074u;
        // 0x47a078: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A07Cu;
        goto label_47a07c;
    }
    ctx->pc = 0x47A074u;
    {
        const bool branch_taken_0x47a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A074u;
        // 0x47a078: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a074) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A07Cu;
label_47a07c:
    // 0x47a07c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a080:
    // 0x47a080: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a084:
    // 0x47a084: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a088:
    // 0x47a088: 0x40f809  jalr        $v0
label_47a08c:
    if (ctx->pc == 0x47A08Cu) {
        ctx->pc = 0x47A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A088u;
        // 0x47a08c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A090u;
        goto label_47a090;
    }
    ctx->pc = 0x47A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A090u);
        ctx->pc = 0x47A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A088u;
        // 0x47a08c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A088u, 0x47A090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A090u;
label_47a090:
    // 0x47a090: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_47a094:
    if (ctx->pc == 0x47A094u) {
        ctx->pc = 0x47A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A090u;
        // 0x47a094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A098u;
        goto label_47a098;
    }
    ctx->pc = 0x47A090u;
    {
        const bool branch_taken_0x47a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A090u;
        // 0x47a094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a090) {
            ctx->pc = 0x47A1B8u;
            goto label_47a1b8;
        }
    }
    ctx->pc = 0x47A098u;
label_47a098:
    // 0x47a098: 0x10000073  b           . + 4 + (0x73 << 2)
label_47a09c:
    if (ctx->pc == 0x47A09Cu) {
        ctx->pc = 0x47A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A098u;
        // 0x47a09c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A0A0u;
        goto label_47a0a0;
    }
    ctx->pc = 0x47A098u;
    {
        const bool branch_taken_0x47a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A098u;
        // 0x47a09c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a098) {
            ctx->pc = 0x47A268u;
            goto label_47a268;
        }
    }
    ctx->pc = 0x47A0A0u;
label_47a0a0:
    // 0x47a0a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47a0a4:
    // 0x47a0a4: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x47a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_47a0a8:
    // 0x47a0a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47a0ac:
    // 0x47a0ac: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
label_47a0b0:
    if (ctx->pc == 0x47A0B0u) {
        ctx->pc = 0x47A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0ACu;
        // 0x47a0b0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A0B4u;
        goto label_47a0b4;
    }
    ctx->pc = 0x47A0ACu;
    {
        const bool branch_taken_0x47a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0ACu;
        // 0x47a0b0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a0ac) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A0B4u;
label_47a0b4:
    // 0x47a0b4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a0b8:
    // 0x47a0b8: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a0bc:
    // 0x47a0bc: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a0c0:
    // 0x47a0c0: 0x40f809  jalr        $v0
label_47a0c4:
    if (ctx->pc == 0x47A0C4u) {
        ctx->pc = 0x47A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0C0u;
        // 0x47a0c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A0C8u;
        goto label_47a0c8;
    }
    ctx->pc = 0x47A0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A0C8u);
        ctx->pc = 0x47A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0C0u;
        // 0x47a0c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A0C0u, 0x47A0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A0C8u;
label_47a0c8:
    // 0x47a0c8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_47a0cc:
    if (ctx->pc == 0x47A0CCu) {
        ctx->pc = 0x47A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0C8u;
        // 0x47a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A0D0u;
        goto label_47a0d0;
    }
    ctx->pc = 0x47A0C8u;
    {
        const bool branch_taken_0x47a0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0C8u;
        // 0x47a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a0c8) {
            ctx->pc = 0x47A1B8u;
            goto label_47a1b8;
        }
    }
    ctx->pc = 0x47A0D0u;
label_47a0d0:
    // 0x47a0d0: 0x10000065  b           . + 4 + (0x65 << 2)
label_47a0d4:
    if (ctx->pc == 0x47A0D4u) {
        ctx->pc = 0x47A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0D0u;
        // 0x47a0d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A0D8u;
        goto label_47a0d8;
    }
    ctx->pc = 0x47A0D0u;
    {
        const bool branch_taken_0x47a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0D0u;
        // 0x47a0d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a0d0) {
            ctx->pc = 0x47A268u;
            goto label_47a268;
        }
    }
    ctx->pc = 0x47A0D8u;
label_47a0d8:
    // 0x47a0d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47a0dc:
    // 0x47a0dc: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x47a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_47a0e0:
    // 0x47a0e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47a0e4:
    // 0x47a0e4: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
label_47a0e8:
    if (ctx->pc == 0x47A0E8u) {
        ctx->pc = 0x47A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0E4u;
        // 0x47a0e8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A0ECu;
        goto label_47a0ec;
    }
    ctx->pc = 0x47A0E4u;
    {
        const bool branch_taken_0x47a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0E4u;
        // 0x47a0e8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a0e4) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A0ECu;
label_47a0ec:
    // 0x47a0ec: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a0f0:
    // 0x47a0f0: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a0f4:
    // 0x47a0f4: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a0f8:
    // 0x47a0f8: 0x40f809  jalr        $v0
label_47a0fc:
    if (ctx->pc == 0x47A0FCu) {
        ctx->pc = 0x47A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0F8u;
        // 0x47a0fc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A100u;
        goto label_47a100;
    }
    ctx->pc = 0x47A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A100u);
        ctx->pc = 0x47A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A0F8u;
        // 0x47a0fc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A0F8u, 0x47A100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A100u;
label_47a100:
    // 0x47a100: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_47a104:
    if (ctx->pc == 0x47A104u) {
        ctx->pc = 0x47A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A100u;
        // 0x47a104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A108u;
        goto label_47a108;
    }
    ctx->pc = 0x47A100u;
    {
        const bool branch_taken_0x47a100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A100u;
        // 0x47a104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a100) {
            ctx->pc = 0x47A1B8u;
            goto label_47a1b8;
        }
    }
    ctx->pc = 0x47A108u;
label_47a108:
    // 0x47a108: 0x10000057  b           . + 4 + (0x57 << 2)
label_47a10c:
    if (ctx->pc == 0x47A10Cu) {
        ctx->pc = 0x47A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A108u;
        // 0x47a10c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A110u;
        goto label_47a110;
    }
    ctx->pc = 0x47A108u;
    {
        const bool branch_taken_0x47a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A108u;
        // 0x47a10c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a108) {
            ctx->pc = 0x47A268u;
            goto label_47a268;
        }
    }
    ctx->pc = 0x47A110u;
label_47a110:
    // 0x47a110: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47a114:
    // 0x47a114: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x47a114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_47a118:
    // 0x47a118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47a11c:
    // 0x47a11c: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
label_47a120:
    if (ctx->pc == 0x47A120u) {
        ctx->pc = 0x47A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A11Cu;
        // 0x47a120: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A124u;
        goto label_47a124;
    }
    ctx->pc = 0x47A11Cu;
    {
        const bool branch_taken_0x47a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A11Cu;
        // 0x47a120: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a11c) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A124u;
label_47a124:
    // 0x47a124: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a128:
    // 0x47a128: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a12c:
    // 0x47a12c: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a130:
    // 0x47a130: 0x40f809  jalr        $v0
label_47a134:
    if (ctx->pc == 0x47A134u) {
        ctx->pc = 0x47A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A130u;
        // 0x47a134: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A138u;
        goto label_47a138;
    }
    ctx->pc = 0x47A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A138u);
        ctx->pc = 0x47A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A130u;
        // 0x47a134: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A130u, 0x47A138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A138u;
label_47a138:
    // 0x47a138: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_47a13c:
    if (ctx->pc == 0x47A13Cu) {
        ctx->pc = 0x47A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A138u;
        // 0x47a13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A140u;
        goto label_47a140;
    }
    ctx->pc = 0x47A138u;
    {
        const bool branch_taken_0x47a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A138u;
        // 0x47a13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a138) {
            ctx->pc = 0x47A1B8u;
            goto label_47a1b8;
        }
    }
    ctx->pc = 0x47A140u;
label_47a140:
    // 0x47a140: 0x10000049  b           . + 4 + (0x49 << 2)
label_47a144:
    if (ctx->pc == 0x47A144u) {
        ctx->pc = 0x47A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A140u;
        // 0x47a144: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A148u;
        goto label_47a148;
    }
    ctx->pc = 0x47A140u;
    {
        const bool branch_taken_0x47a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A140u;
        // 0x47a144: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a140) {
            ctx->pc = 0x47A268u;
            goto label_47a268;
        }
    }
    ctx->pc = 0x47A148u;
label_47a148:
    // 0x47a148: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x47a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47a14c:
    // 0x47a14c: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x47a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
label_47a150:
    // 0x47a150: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x47a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47a154:
    // 0x47a154: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
label_47a158:
    if (ctx->pc == 0x47A158u) {
        ctx->pc = 0x47A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A154u;
        // 0x47a158: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A15Cu;
        goto label_47a15c;
    }
    ctx->pc = 0x47A154u;
    {
        const bool branch_taken_0x47a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A154u;
        // 0x47a158: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a154) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A15Cu;
label_47a15c:
    // 0x47a15c: 0x1040ffb8  beqz        $v0, . + 4 + (-0x48 << 2)
label_47a160:
    if (ctx->pc == 0x47A160u) {
        ctx->pc = 0x47A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A15Cu;
        // 0x47a160: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A164u;
        goto label_47a164;
    }
    ctx->pc = 0x47A15Cu;
    {
        const bool branch_taken_0x47a15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A15Cu;
        // 0x47a160: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a15c) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A164u;
label_47a164:
    // 0x47a164: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a168:
    // 0x47a168: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a16c:
    // 0x47a16c: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a170:
    // 0x47a170: 0x40f809  jalr        $v0
label_47a174:
    if (ctx->pc == 0x47A174u) {
        ctx->pc = 0x47A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A170u;
        // 0x47a174: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A178u;
        goto label_47a178;
    }
    ctx->pc = 0x47A170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A178u);
        ctx->pc = 0x47A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A170u;
        // 0x47a174: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A170u, 0x47A178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A178u;
label_47a178:
    // 0x47a178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_47a17c:
    if (ctx->pc == 0x47A17Cu) {
        ctx->pc = 0x47A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A178u;
        // 0x47a17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A180u;
        goto label_47a180;
    }
    ctx->pc = 0x47A178u;
    {
        const bool branch_taken_0x47a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A178u;
        // 0x47a17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a178) {
            ctx->pc = 0x47A1B8u;
            goto label_47a1b8;
        }
    }
    ctx->pc = 0x47A180u;
label_47a180:
    // 0x47a180: 0x10000039  b           . + 4 + (0x39 << 2)
label_47a184:
    if (ctx->pc == 0x47A184u) {
        ctx->pc = 0x47A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A180u;
        // 0x47a184: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A188u;
        goto label_47a188;
    }
    ctx->pc = 0x47A180u;
    {
        const bool branch_taken_0x47a180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A180u;
        // 0x47a184: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a180) {
            ctx->pc = 0x47A268u;
            goto label_47a268;
        }
    }
    ctx->pc = 0x47A188u;
label_47a188:
    // 0x47a188: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47a18c:
    // 0x47a18c: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x47a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
label_47a190:
    // 0x47a190: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47a194:
    // 0x47a194: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
label_47a198:
    if (ctx->pc == 0x47A198u) {
        ctx->pc = 0x47A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A194u;
        // 0x47a198: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A19Cu;
        goto label_47a19c;
    }
    ctx->pc = 0x47A194u;
    {
        const bool branch_taken_0x47a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A194u;
        // 0x47a198: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a194) {
            ctx->pc = 0x47A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a040;
        }
    }
    ctx->pc = 0x47A19Cu;
label_47a19c:
    // 0x47a19c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a1a0:
    // 0x47a1a0: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a1a4:
    // 0x47a1a4: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a1a8:
    // 0x47a1a8: 0x40f809  jalr        $v0
label_47a1ac:
    if (ctx->pc == 0x47A1ACu) {
        ctx->pc = 0x47A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1A8u;
        // 0x47a1ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1B0u;
        goto label_47a1b0;
    }
    ctx->pc = 0x47A1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A1B0u);
        ctx->pc = 0x47A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1A8u;
        // 0x47a1ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A1A8u, 0x47A1B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A1B0u;
label_47a1b0:
    // 0x47a1b0: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_47a1b4:
    if (ctx->pc == 0x47A1B4u) {
        ctx->pc = 0x47A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1B0u;
        // 0x47a1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1B8u;
        goto label_47a1b8;
    }
    ctx->pc = 0x47A1B0u;
    {
        const bool branch_taken_0x47a1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1B0u;
        // 0x47a1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a1b0) {
            ctx->pc = 0x47A264u;
            goto label_47a264;
        }
    }
    ctx->pc = 0x47A1B8u;
label_47a1b8:
    // 0x47a1b8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47a1bc:
    // 0x47a1bc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_47a1c0:
    // 0x47a1c0: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x47a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
label_47a1c4:
    // 0x47a1c4: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x47a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
label_47a1c8:
    // 0x47a1c8: 0x40f809  jalr        $v0
label_47a1cc:
    if (ctx->pc == 0x47A1CCu) {
        ctx->pc = 0x47A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1C8u;
        // 0x47a1cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1D0u;
        goto label_47a1d0;
    }
    ctx->pc = 0x47A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A1D0u);
        ctx->pc = 0x47A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1C8u;
        // 0x47a1cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A1C8u, 0x47A1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A1D0u;
label_47a1d0:
    // 0x47a1d0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_47a1d4:
    if (ctx->pc == 0x47A1D4u) {
        ctx->pc = 0x47A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1D0u;
        // 0x47a1d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1D8u;
        goto label_47a1d8;
    }
    ctx->pc = 0x47A1D0u;
    {
        const bool branch_taken_0x47a1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1D0u;
        // 0x47a1d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a1d0) {
            ctx->pc = 0x47A264u;
            goto label_47a264;
        }
    }
    ctx->pc = 0x47A1D8u;
label_47a1d8:
    // 0x47a1d8: 0xc129c4c  jal         func_4A7130
label_47a1dc:
    if (ctx->pc == 0x47A1DCu) {
        ctx->pc = 0x47A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1D8u;
        // 0x47a1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1E0u;
        goto label_47a1e0;
    }
    ctx->pc = 0x47A1D8u;
    SET_GPR_U32(ctx, 31, 0x47A1E0u);
    ctx->pc = 0x47A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A1D8u;
    // 0x47a1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A1D8u, 0x47A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A1E0u;
label_47a1e0:
    // 0x47a1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47a1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a1e4:
    // 0x47a1e4: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
label_47a1e8:
    if (ctx->pc == 0x47A1E8u) {
        ctx->pc = 0x47A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1E4u;
        // 0x47a1e8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1ECu;
        goto label_47a1ec;
    }
    ctx->pc = 0x47A1E4u;
    {
        const bool branch_taken_0x47a1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1E4u;
        // 0x47a1e8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a1e4) {
            ctx->pc = 0x47A258u;
            goto label_47a258;
        }
    }
    ctx->pc = 0x47A1ECu;
label_47a1ec:
    // 0x47a1ec: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x47a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_47a1f0:
    // 0x47a1f0: 0xc129c4e  jal         func_4A7138
label_47a1f4:
    if (ctx->pc == 0x47A1F4u) {
        ctx->pc = 0x47A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1F0u;
        // 0x47a1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A1F8u;
        goto label_47a1f8;
    }
    ctx->pc = 0x47A1F0u;
    SET_GPR_U32(ctx, 31, 0x47A1F8u);
    ctx->pc = 0x47A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A1F0u;
    // 0x47a1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7138u, 0x47A1F0u, 0x47A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A1F8u;
label_47a1f8:
    // 0x47a1f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a1fc:
    // 0x47a1fc: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_47a200:
    if (ctx->pc == 0x47A200u) {
        ctx->pc = 0x47A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1FCu;
        // 0x47a200: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A204u;
        goto label_47a204;
    }
    ctx->pc = 0x47A1FCu;
    {
        const bool branch_taken_0x47a1fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A1FCu;
        // 0x47a200: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a1fc) {
            ctx->pc = 0x47A240u;
            goto label_47a240;
        }
    }
    ctx->pc = 0x47A204u;
label_47a204:
    // 0x47a204: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x47a204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47a208:
    // 0x47a208: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x47a208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_47a20c:
    // 0x47a20c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47a210:
    // 0x47a210: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x47a210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_47a214:
    // 0x47a214: 0x0  nop
    ctx->pc = 0x47a214u;
    // NOP
label_47a218:
    // 0x47a218: 0x0  nop
    ctx->pc = 0x47a218u;
    // NOP
label_47a21c:
    // 0x47a21c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_47a220:
    if (ctx->pc == 0x47A220u) {
        ctx->pc = 0x47A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A21Cu;
        // 0x47a220: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A224u;
        goto label_47a224;
    }
    ctx->pc = 0x47A21Cu;
    {
        const bool branch_taken_0x47a21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A21Cu;
        // 0x47a220: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a21c) {
            ctx->pc = 0x47A208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a208;
        }
    }
    ctx->pc = 0x47A224u;
label_47a224:
    // 0x47a224: 0x24030114  addiu       $v1, $zero, 0x114
    ctx->pc = 0x47a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_47a228:
    // 0x47a228: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47a228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47a22c:
    // 0x47a22c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x47a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_47a230:
    // 0x47a230: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47a234:
    // 0x47a234: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x47a234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
label_47a238:
    // 0x47a238: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x47a238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
label_47a23c:
    // 0x47a23c: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x47a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_47a240:
    // 0x47a240: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_47a244:
    if (ctx->pc == 0x47A244u) {
        ctx->pc = 0x47A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A240u;
        // 0x47a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A248u;
        goto label_47a248;
    }
    ctx->pc = 0x47A240u;
    {
        const bool branch_taken_0x47a240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A240u;
        // 0x47a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a240) {
            ctx->pc = 0x47A264u;
            goto label_47a264;
        }
    }
    ctx->pc = 0x47A248u;
label_47a248:
    // 0x47a248: 0xc129c4c  jal         func_4A7130
label_47a24c:
    if (ctx->pc == 0x47A24Cu) {
        ctx->pc = 0x47A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A248u;
        // 0x47a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A250u;
        goto label_47a250;
    }
    ctx->pc = 0x47A248u;
    SET_GPR_U32(ctx, 31, 0x47A250u);
    ctx->pc = 0x47A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A248u;
    // 0x47a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A248u, 0x47A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A250u;
label_47a250:
    // 0x47a250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a254:
    // 0x47a254: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x47a254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_47a258:
    // 0x47a258: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x47a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47a25c:
    // 0x47a25c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x47a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_47a260:
    // 0x47a260: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47a260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47a264:
    // 0x47a264: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47a264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47a268:
    // 0x47a268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47a268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47a26c:
    // 0x47a26c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47a26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47a270:
    // 0x47a270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47a270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47a274:
    // 0x47a274: 0x3e00008  jr          $ra
label_47a278:
    if (ctx->pc == 0x47A278u) {
        ctx->pc = 0x47A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A274u;
        // 0x47a278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A27Cu;
        goto label_47a27c;
    }
    ctx->pc = 0x47A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A274u;
        // 0x47a278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A27Cu;
label_47a27c:
    // 0x47a27c: 0x0  nop
    ctx->pc = 0x47a27cu;
    // NOP
    ctx->pc = 0x47a280u;
}
