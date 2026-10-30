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

// Function: sub_00304070
// Address: 0x304070 - 0x304228
void sub_00304070_0x304070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304070_0x304070");
#endif

    switch (ctx->pc) {
        case 0x304070u: goto label_304070;
        case 0x304074u: goto label_304074;
        case 0x304078u: goto label_304078;
        case 0x30407cu: goto label_30407c;
        case 0x304080u: goto label_304080;
        case 0x304084u: goto label_304084;
        case 0x304088u: goto label_304088;
        case 0x30408cu: goto label_30408c;
        case 0x304090u: goto label_304090;
        case 0x304094u: goto label_304094;
        case 0x304098u: goto label_304098;
        case 0x30409cu: goto label_30409c;
        case 0x3040a0u: goto label_3040a0;
        case 0x3040a4u: goto label_3040a4;
        case 0x3040a8u: goto label_3040a8;
        case 0x3040acu: goto label_3040ac;
        case 0x3040b0u: goto label_3040b0;
        case 0x3040b4u: goto label_3040b4;
        case 0x3040b8u: goto label_3040b8;
        case 0x3040bcu: goto label_3040bc;
        case 0x3040c0u: goto label_3040c0;
        case 0x3040c4u: goto label_3040c4;
        case 0x3040c8u: goto label_3040c8;
        case 0x3040ccu: goto label_3040cc;
        case 0x3040d0u: goto label_3040d0;
        case 0x3040d4u: goto label_3040d4;
        case 0x3040d8u: goto label_3040d8;
        case 0x3040dcu: goto label_3040dc;
        case 0x3040e0u: goto label_3040e0;
        case 0x3040e4u: goto label_3040e4;
        case 0x3040e8u: goto label_3040e8;
        case 0x3040ecu: goto label_3040ec;
        case 0x3040f0u: goto label_3040f0;
        case 0x3040f4u: goto label_3040f4;
        case 0x3040f8u: goto label_3040f8;
        case 0x3040fcu: goto label_3040fc;
        case 0x304100u: goto label_304100;
        case 0x304104u: goto label_304104;
        case 0x304108u: goto label_304108;
        case 0x30410cu: goto label_30410c;
        case 0x304110u: goto label_304110;
        case 0x304114u: goto label_304114;
        case 0x304118u: goto label_304118;
        case 0x30411cu: goto label_30411c;
        case 0x304120u: goto label_304120;
        case 0x304124u: goto label_304124;
        case 0x304128u: goto label_304128;
        case 0x30412cu: goto label_30412c;
        case 0x304130u: goto label_304130;
        case 0x304134u: goto label_304134;
        case 0x304138u: goto label_304138;
        case 0x30413cu: goto label_30413c;
        case 0x304140u: goto label_304140;
        case 0x304144u: goto label_304144;
        case 0x304148u: goto label_304148;
        case 0x30414cu: goto label_30414c;
        case 0x304150u: goto label_304150;
        case 0x304154u: goto label_304154;
        case 0x304158u: goto label_304158;
        case 0x30415cu: goto label_30415c;
        case 0x304160u: goto label_304160;
        case 0x304164u: goto label_304164;
        case 0x304168u: goto label_304168;
        case 0x30416cu: goto label_30416c;
        case 0x304170u: goto label_304170;
        case 0x304174u: goto label_304174;
        case 0x304178u: goto label_304178;
        case 0x30417cu: goto label_30417c;
        case 0x304180u: goto label_304180;
        case 0x304184u: goto label_304184;
        case 0x304188u: goto label_304188;
        case 0x30418cu: goto label_30418c;
        case 0x304190u: goto label_304190;
        case 0x304194u: goto label_304194;
        case 0x304198u: goto label_304198;
        case 0x30419cu: goto label_30419c;
        case 0x3041a0u: goto label_3041a0;
        case 0x3041a4u: goto label_3041a4;
        case 0x3041a8u: goto label_3041a8;
        case 0x3041acu: goto label_3041ac;
        case 0x3041b0u: goto label_3041b0;
        case 0x3041b4u: goto label_3041b4;
        case 0x3041b8u: goto label_3041b8;
        case 0x3041bcu: goto label_3041bc;
        case 0x3041c0u: goto label_3041c0;
        case 0x3041c4u: goto label_3041c4;
        case 0x3041c8u: goto label_3041c8;
        case 0x3041ccu: goto label_3041cc;
        case 0x3041d0u: goto label_3041d0;
        case 0x3041d4u: goto label_3041d4;
        case 0x3041d8u: goto label_3041d8;
        case 0x3041dcu: goto label_3041dc;
        case 0x3041e0u: goto label_3041e0;
        case 0x3041e4u: goto label_3041e4;
        case 0x3041e8u: goto label_3041e8;
        case 0x3041ecu: goto label_3041ec;
        case 0x3041f0u: goto label_3041f0;
        case 0x3041f4u: goto label_3041f4;
        case 0x3041f8u: goto label_3041f8;
        case 0x3041fcu: goto label_3041fc;
        case 0x304200u: goto label_304200;
        case 0x304204u: goto label_304204;
        case 0x304208u: goto label_304208;
        case 0x30420cu: goto label_30420c;
        case 0x304210u: goto label_304210;
        case 0x304214u: goto label_304214;
        case 0x304218u: goto label_304218;
        case 0x30421cu: goto label_30421c;
        case 0x304220u: goto label_304220;
        case 0x304224u: goto label_304224;
        default: break;
    }

    ctx->pc = 0x304070u;

label_304070:
    // 0x304070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x304070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_304074:
    // 0x304074: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x304074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_304078:
    // 0x304078: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x304078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30407c:
    // 0x30407c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30407cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_304080:
    // 0x304080: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x304080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_304084:
    // 0x304084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304088:
    // 0x304088: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x304088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_30408c:
    // 0x30408c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30408cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_304090:
    // 0x304090: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x304090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_304094:
    // 0x304094: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x304094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_304098:
    // 0x304098: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x304098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30409c:
    // 0x30409c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x30409cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3040a0:
    // 0x3040a0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3040a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3040a4:
    // 0x3040a4: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
label_3040a8:
    if (ctx->pc == 0x3040A8u) {
        ctx->pc = 0x3040A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040A4u;
        // 0x3040a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040ACu;
        goto label_3040ac;
    }
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040A4u;
        // 0x3040a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x3041FCu;
            goto label_3041fc;
        }
    }
    ctx->pc = 0x3040ACu;
label_3040ac:
    // 0x3040ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3040acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3040b0:
    // 0x3040b0: 0xc08a076  jal         func_2281D8
label_3040b4:
    if (ctx->pc == 0x3040B4u) {
        ctx->pc = 0x3040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040B0u;
        // 0x3040b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040B8u;
        goto label_3040b8;
    }
    ctx->pc = 0x3040B0u;
    SET_GPR_U32(ctx, 31, 0x3040B8u);
    ctx->pc = 0x3040B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040B0u;
    // 0x3040b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x3040B0u, 0x3040B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040B8u;
label_3040b8:
    // 0x3040b8: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_3040bc:
    if (ctx->pc == 0x3040BCu) {
        ctx->pc = 0x3040BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040B8u;
        // 0x3040bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040C0u;
        goto label_3040c0;
    }
    ctx->pc = 0x3040B8u;
    {
        const bool branch_taken_0x3040b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3040BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040B8u;
        // 0x3040bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040b8) {
            ctx->pc = 0x3040D0u;
            goto label_3040d0;
        }
    }
    ctx->pc = 0x3040C0u;
label_3040c0:
    // 0x3040c0: 0xc0a4742  jal         func_291D08
label_3040c4:
    if (ctx->pc == 0x3040C4u) {
        ctx->pc = 0x3040C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040C0u;
        // 0x3040c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040C8u;
        goto label_3040c8;
    }
    ctx->pc = 0x3040C0u;
    SET_GPR_U32(ctx, 31, 0x3040C8u);
    ctx->pc = 0x3040C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040C0u;
    // 0x3040c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x3040C0u, 0x3040C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040C8u;
label_3040c8:
    // 0x3040c8: 0x5050004d  beql        $v0, $s0, . + 4 + (0x4D << 2)
label_3040cc:
    if (ctx->pc == 0x3040CCu) {
        ctx->pc = 0x3040CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040C8u;
        // 0x3040cc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040D0u;
        goto label_3040d0;
    }
    ctx->pc = 0x3040C8u;
    {
        const bool branch_taken_0x3040c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3040c8) {
            ctx->pc = 0x3040CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040C8u;
            // 0x3040cc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304200u;
            goto label_304200;
        }
    }
    ctx->pc = 0x3040D0u;
label_3040d0:
    // 0x3040d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3040d4:
    if (ctx->pc == 0x3040D4u) {
        ctx->pc = 0x3040D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040D0u;
        // 0x3040d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040D8u;
        goto label_3040d8;
    }
    ctx->pc = 0x3040D0u;
    {
        const bool branch_taken_0x3040d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040D0u;
        // 0x3040d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040d0) {
            ctx->pc = 0x3040F4u;
            goto label_3040f4;
        }
    }
    ctx->pc = 0x3040D8u;
label_3040d8:
    // 0x3040d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3040d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3040dc:
    // 0x3040dc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3040dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3040e0:
    // 0x3040e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3040e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3040e4:
    // 0x3040e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3040e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3040e8:
    // 0x3040e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3040e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3040ec:
    // 0x3040ec: 0xc0a4d90  jal         func_293640
label_3040f0:
    if (ctx->pc == 0x3040F0u) {
        ctx->pc = 0x3040F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040ECu;
        // 0x3040f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040F4u;
        goto label_3040f4;
    }
    ctx->pc = 0x3040ECu;
    SET_GPR_U32(ctx, 31, 0x3040F4u);
    ctx->pc = 0x3040F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040ECu;
    // 0x3040f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x3040ECu, 0x3040F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040F4u;
label_3040f4:
    // 0x3040f4: 0xc0c100c  jal         func_304030
label_3040f8:
    if (ctx->pc == 0x3040F8u) {
        ctx->pc = 0x3040F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040F4u;
        // 0x3040f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3040FCu;
        goto label_3040fc;
    }
    ctx->pc = 0x3040F4u;
    SET_GPR_U32(ctx, 31, 0x3040FCu);
    ctx->pc = 0x3040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040F4u;
    // 0x3040f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304030u, 0x3040F4u, 0x3040FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040FCu;
label_3040fc:
    // 0x3040fc: 0x14500035  bne         $v0, $s0, . + 4 + (0x35 << 2)
label_304100:
    if (ctx->pc == 0x304100u) {
        ctx->pc = 0x304100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040FCu;
        // 0x304100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304104u;
        goto label_304104;
    }
    ctx->pc = 0x3040FCu;
    {
        const bool branch_taken_0x3040fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x304100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040FCu;
        // 0x304100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040fc) {
            ctx->pc = 0x3041D4u;
            goto label_3041d4;
        }
    }
    ctx->pc = 0x304104u;
label_304104:
    // 0x304104: 0xc0a3658  jal         func_28D960
label_304108:
    if (ctx->pc == 0x304108u) {
        ctx->pc = 0x304108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304104u;
        // 0x304108: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30410Cu;
        goto label_30410c;
    }
    ctx->pc = 0x304104u;
    SET_GPR_U32(ctx, 31, 0x30410Cu);
    ctx->pc = 0x304108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304104u;
    // 0x304108: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x304104u, 0x30410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30410Cu;
label_30410c:
    // 0x30410c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304110:
    // 0x304110: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
label_304114:
    if (ctx->pc == 0x304114u) {
        ctx->pc = 0x304118u;
        goto label_304118;
    }
    ctx->pc = 0x304110u;
    {
        const bool branch_taken_0x304110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x304110) {
            ctx->pc = 0x3041D4u;
            goto label_3041d4;
        }
    }
    ctx->pc = 0x304118u;
label_304118:
    // 0x304118: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x304118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_30411c:
    // 0x30411c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_304120:
    if (ctx->pc == 0x304120u) {
        ctx->pc = 0x304120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30411Cu;
        // 0x304120: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304124u;
        goto label_304124;
    }
    ctx->pc = 0x30411Cu;
    {
        const bool branch_taken_0x30411c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30411Cu;
        // 0x304120: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30411c) {
            ctx->pc = 0x304130u;
            goto label_304130;
        }
    }
    ctx->pc = 0x304124u;
label_304124:
    // 0x304124: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x304124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_304128:
    // 0x304128: 0x10000002  b           . + 4 + (0x2 << 2)
label_30412c:
    if (ctx->pc == 0x30412Cu) {
        ctx->pc = 0x30412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304128u;
        // 0x30412c: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304130u;
        goto label_304130;
    }
    ctx->pc = 0x304128u;
    {
        const bool branch_taken_0x304128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304128u;
        // 0x30412c: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304128) {
            ctx->pc = 0x304134u;
            goto label_304134;
        }
    }
    ctx->pc = 0x304130u;
label_304130:
    // 0x304130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304134:
    // 0x304134: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304138:
    // 0x304138: 0x24140082  addiu       $s4, $zero, 0x82
    ctx->pc = 0x304138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_30413c:
    // 0x30413c: 0x1000000c  b           . + 4 + (0xC << 2)
label_304140:
    if (ctx->pc == 0x304140u) {
        ctx->pc = 0x304140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30413Cu;
        // 0x304140: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304144u;
        goto label_304144;
    }
    ctx->pc = 0x30413Cu;
    {
        const bool branch_taken_0x30413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30413Cu;
        // 0x304140: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30413c) {
            ctx->pc = 0x304170u;
            goto label_304170;
        }
    }
    ctx->pc = 0x304144u;
label_304144:
    // 0x304144: 0x0  nop
    ctx->pc = 0x304144u;
    // NOP
label_304148:
    // 0x304148: 0xc0a35f6  jal         func_28D7D8
label_30414c:
    if (ctx->pc == 0x30414Cu) {
        ctx->pc = 0x30414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304148u;
        // 0x30414c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304150u;
        goto label_304150;
    }
    ctx->pc = 0x304148u;
    SET_GPR_U32(ctx, 31, 0x304150u);
    ctx->pc = 0x30414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304148u;
    // 0x30414c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x304148u, 0x304150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304150u;
label_304150:
    // 0x304150: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_304154:
    // 0x304154: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_304158:
    if (ctx->pc == 0x304158u) {
        ctx->pc = 0x304158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304154u;
        // 0x304158: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30415Cu;
        goto label_30415c;
    }
    ctx->pc = 0x304154u;
    {
        const bool branch_taken_0x304154 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304154u;
        // 0x304158: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304154) {
            ctx->pc = 0x304168u;
            goto label_304168;
        }
    }
    ctx->pc = 0x30415Cu;
label_30415c:
    // 0x30415c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_304160:
    // 0x304160: 0x10000002  b           . + 4 + (0x2 << 2)
label_304164:
    if (ctx->pc == 0x304164u) {
        ctx->pc = 0x304164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304160u;
        // 0x304164: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304168u;
        goto label_304168;
    }
    ctx->pc = 0x304160u;
    {
        const bool branch_taken_0x304160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304160u;
        // 0x304164: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304160) {
            ctx->pc = 0x30416Cu;
            goto label_30416c;
        }
    }
    ctx->pc = 0x304168u;
label_304168:
    // 0x304168: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30416c:
    // 0x30416c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30416cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304170:
    // 0x304170: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x304170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_304174:
    // 0x304174: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x304174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_304178:
    // 0x304178: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x304178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30417c:
    // 0x30417c: 0x40f809  jalr        $v0
label_304180:
    if (ctx->pc == 0x304180u) {
        ctx->pc = 0x304180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30417Cu;
        // 0x304180: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304184u;
        goto label_304184;
    }
    ctx->pc = 0x30417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304184u);
        ctx->pc = 0x304180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30417Cu;
        // 0x304180: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30417Cu, 0x304184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304184u;
label_304184:
    // 0x304184: 0x1454fff0  bne         $v0, $s4, . + 4 + (-0x10 << 2)
label_304188:
    if (ctx->pc == 0x304188u) {
        ctx->pc = 0x30418Cu;
        goto label_30418c;
    }
    ctx->pc = 0x304184u;
    {
        const bool branch_taken_0x304184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x304184) {
            ctx->pc = 0x304148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304148;
        }
    }
    ctx->pc = 0x30418Cu;
label_30418c:
    // 0x30418c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30418cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304190:
    // 0x304190: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x304190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_304194:
    // 0x304194: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x304194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_304198:
    // 0x304198: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30419c:
    // 0x30419c: 0x40f809  jalr        $v0
label_3041a0:
    if (ctx->pc == 0x3041A0u) {
        ctx->pc = 0x3041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30419Cu;
        // 0x3041a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3041A4u;
        goto label_3041a4;
    }
    ctx->pc = 0x30419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3041A4u);
        ctx->pc = 0x3041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30419Cu;
        // 0x3041a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30419Cu, 0x3041A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3041A4u;
label_3041a4:
    // 0x3041a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3041a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3041a8:
    // 0x3041a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3041a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3041ac:
    // 0x3041ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3041b0:
    // 0x3041b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3041b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3041b4:
    // 0x3041b4: 0x40f809  jalr        $v0
label_3041b8:
    if (ctx->pc == 0x3041B8u) {
        ctx->pc = 0x3041B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041B4u;
        // 0x3041b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3041BCu;
        goto label_3041bc;
    }
    ctx->pc = 0x3041B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3041BCu);
        ctx->pc = 0x3041B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041B4u;
        // 0x3041b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3041B4u, 0x3041BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3041BCu;
label_3041bc:
    // 0x3041bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3041bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3041c0:
    // 0x3041c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3041c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3041c4:
    // 0x3041c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3041c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3041c8:
    // 0x3041c8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3041c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3041cc:
    // 0x3041cc: 0xc0b97e8  jal         func_2E5FA0
label_3041d0:
    if (ctx->pc == 0x3041D0u) {
        ctx->pc = 0x3041D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041CCu;
        // 0x3041d0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3041D4u;
        goto label_3041d4;
    }
    ctx->pc = 0x3041CCu;
    SET_GPR_U32(ctx, 31, 0x3041D4u);
    ctx->pc = 0x3041D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041CCu;
    // 0x3041d0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5FA0u, 0x3041CCu, 0x3041D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041D4u;
label_3041d4:
    // 0x3041d4: 0xc087502  jal         func_21D408
label_3041d8:
    if (ctx->pc == 0x3041D8u) {
        ctx->pc = 0x3041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041D4u;
        // 0x3041d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3041DCu;
        goto label_3041dc;
    }
    ctx->pc = 0x3041D4u;
    SET_GPR_U32(ctx, 31, 0x3041DCu);
    ctx->pc = 0x3041D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041D4u;
    // 0x3041d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3041D4u, 0x3041DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041DCu;
label_3041dc:
    // 0x3041dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3041dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3041e0:
    // 0x3041e0: 0xc0a408c  jal         func_290230
label_3041e4:
    if (ctx->pc == 0x3041E4u) {
        ctx->pc = 0x3041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041E0u;
        // 0x3041e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3041E8u;
        goto label_3041e8;
    }
    ctx->pc = 0x3041E0u;
    SET_GPR_U32(ctx, 31, 0x3041E8u);
    ctx->pc = 0x3041E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041E0u;
    // 0x3041e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x3041E0u, 0x3041E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041E8u;
label_3041e8:
    // 0x3041e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3041ec:
    if (ctx->pc == 0x3041ECu) {
        ctx->pc = 0x3041ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041E8u;
        // 0x3041ec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3041F0u;
        goto label_3041f0;
    }
    ctx->pc = 0x3041E8u;
    {
        const bool branch_taken_0x3041e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3041ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041E8u;
        // 0x3041ec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041e8) {
            ctx->pc = 0x304200u;
            goto label_304200;
        }
    }
    ctx->pc = 0x3041F0u;
label_3041f0:
    // 0x3041f0: 0x8e420200  lw          $v0, 0x200($s2)
    ctx->pc = 0x3041f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_3041f4:
    // 0x3041f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3041f8:
    // 0x3041f8: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x3041f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_3041fc:
    // 0x3041fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3041fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_304200:
    // 0x304200: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x304200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_304204:
    // 0x304204: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x304204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_304208:
    // 0x304208: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x304208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30420c:
    // 0x30420c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30420cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304210:
    // 0x304210: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x304210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304214:
    // 0x304214: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x304214u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304218:
    // 0x304218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30421c:
    // 0x30421c: 0x3e00008  jr          $ra
label_304220:
    if (ctx->pc == 0x304220u) {
        ctx->pc = 0x304220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30421Cu;
        // 0x304220: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304224u;
        goto label_304224;
    }
    ctx->pc = 0x30421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30421Cu;
        // 0x304220: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30421Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304224u;
label_304224:
    // 0x304224: 0x0  nop
    ctx->pc = 0x304224u;
    // NOP
    ctx->pc = 0x304228u;
}
