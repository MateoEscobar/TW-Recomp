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

// Function: sub_0048B200
// Address: 0x48b200 - 0x48b308
void sub_0048B200_0x48b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B200_0x48b200");
#endif

    switch (ctx->pc) {
        case 0x48b200u: goto label_48b200;
        case 0x48b204u: goto label_48b204;
        case 0x48b208u: goto label_48b208;
        case 0x48b20cu: goto label_48b20c;
        case 0x48b210u: goto label_48b210;
        case 0x48b214u: goto label_48b214;
        case 0x48b218u: goto label_48b218;
        case 0x48b21cu: goto label_48b21c;
        case 0x48b220u: goto label_48b220;
        case 0x48b224u: goto label_48b224;
        case 0x48b228u: goto label_48b228;
        case 0x48b22cu: goto label_48b22c;
        case 0x48b230u: goto label_48b230;
        case 0x48b234u: goto label_48b234;
        case 0x48b238u: goto label_48b238;
        case 0x48b23cu: goto label_48b23c;
        case 0x48b240u: goto label_48b240;
        case 0x48b244u: goto label_48b244;
        case 0x48b248u: goto label_48b248;
        case 0x48b24cu: goto label_48b24c;
        case 0x48b250u: goto label_48b250;
        case 0x48b254u: goto label_48b254;
        case 0x48b258u: goto label_48b258;
        case 0x48b25cu: goto label_48b25c;
        case 0x48b260u: goto label_48b260;
        case 0x48b264u: goto label_48b264;
        case 0x48b268u: goto label_48b268;
        case 0x48b26cu: goto label_48b26c;
        case 0x48b270u: goto label_48b270;
        case 0x48b274u: goto label_48b274;
        case 0x48b278u: goto label_48b278;
        case 0x48b27cu: goto label_48b27c;
        case 0x48b280u: goto label_48b280;
        case 0x48b284u: goto label_48b284;
        case 0x48b288u: goto label_48b288;
        case 0x48b28cu: goto label_48b28c;
        case 0x48b290u: goto label_48b290;
        case 0x48b294u: goto label_48b294;
        case 0x48b298u: goto label_48b298;
        case 0x48b29cu: goto label_48b29c;
        case 0x48b2a0u: goto label_48b2a0;
        case 0x48b2a4u: goto label_48b2a4;
        case 0x48b2a8u: goto label_48b2a8;
        case 0x48b2acu: goto label_48b2ac;
        case 0x48b2b0u: goto label_48b2b0;
        case 0x48b2b4u: goto label_48b2b4;
        case 0x48b2b8u: goto label_48b2b8;
        case 0x48b2bcu: goto label_48b2bc;
        case 0x48b2c0u: goto label_48b2c0;
        case 0x48b2c4u: goto label_48b2c4;
        case 0x48b2c8u: goto label_48b2c8;
        case 0x48b2ccu: goto label_48b2cc;
        case 0x48b2d0u: goto label_48b2d0;
        case 0x48b2d4u: goto label_48b2d4;
        case 0x48b2d8u: goto label_48b2d8;
        case 0x48b2dcu: goto label_48b2dc;
        case 0x48b2e0u: goto label_48b2e0;
        case 0x48b2e4u: goto label_48b2e4;
        case 0x48b2e8u: goto label_48b2e8;
        case 0x48b2ecu: goto label_48b2ec;
        case 0x48b2f0u: goto label_48b2f0;
        case 0x48b2f4u: goto label_48b2f4;
        case 0x48b2f8u: goto label_48b2f8;
        case 0x48b2fcu: goto label_48b2fc;
        case 0x48b300u: goto label_48b300;
        case 0x48b304u: goto label_48b304;
        default: break;
    }

    ctx->pc = 0x48b200u;

label_48b200:
    // 0x48b200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48b204:
    // 0x48b204: 0x8f838668  lw          $v1, -0x7998($gp)
    ctx->pc = 0x48b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_48b208:
    // 0x48b208: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48b208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48b20c:
    // 0x48b20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b210:
    // 0x48b210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48b214:
    // 0x48b214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48b214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b218:
    // 0x48b218: 0x625804  sllv        $t3, $v0, $v1
    ctx->pc = 0x48b218u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_48b21c:
    // 0x48b21c: 0x1160001c  beqz        $t3, . + 4 + (0x1C << 2)
label_48b220:
    if (ctx->pc == 0x48B220u) {
        ctx->pc = 0x48B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B21Cu;
        // 0x48b220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B224u;
        goto label_48b224;
    }
    ctx->pc = 0x48B21Cu;
    {
        const bool branch_taken_0x48b21c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B21Cu;
        // 0x48b220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b21c) {
            ctx->pc = 0x48B290u;
            goto label_48b290;
        }
    }
    ctx->pc = 0x48B224u;
label_48b224:
    // 0x48b224: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48b224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_48b228:
    // 0x48b228: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x48b228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_48b22c:
    // 0x48b22c: 0x244cee08  addiu       $t4, $v0, -0x11F8
    ctx->pc = 0x48b22cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
label_48b230:
    // 0x48b230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48b230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b234:
    // 0x48b234: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x48b234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_48b238:
    // 0x48b238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48b238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b23c:
    // 0x48b23c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x48b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_48b240:
    // 0x48b240: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_48b244:
    if (ctx->pc == 0x48B244u) {
        ctx->pc = 0x48B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B240u;
        // 0x48b244: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B248u;
        goto label_48b248;
    }
    ctx->pc = 0x48B240u;
    {
        const bool branch_taken_0x48b240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B240u;
        // 0x48b244: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b240) {
            ctx->pc = 0x48B27Cu;
            goto label_48b27c;
        }
    }
    ctx->pc = 0x48B248u;
label_48b248:
    // 0x48b248: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x48b248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b24c:
    // 0x48b24c: 0x871004  sllv        $v0, $a3, $a0
    ctx->pc = 0x48b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_48b250:
    // 0x48b250: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x48b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_48b254:
    // 0x48b254: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_48b258:
    if (ctx->pc == 0x48B258u) {
        ctx->pc = 0x48B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B254u;
        // 0x48b258: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B25Cu;
        goto label_48b25c;
    }
    ctx->pc = 0x48B254u;
    {
        const bool branch_taken_0x48b254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B254u;
        // 0x48b258: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b254) {
            ctx->pc = 0x48B26Cu;
            goto label_48b26c;
        }
    }
    ctx->pc = 0x48B25Cu;
label_48b25c:
    // 0x48b25c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x48b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_48b260:
    // 0x48b260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48b260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48b264:
    // 0x48b264: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x48b264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_48b268:
    // 0x48b268: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x48b268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_48b26c:
    // 0x48b26c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x48b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_48b270:
    // 0x48b270: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x48b270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_48b274:
    // 0x48b274: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_48b278:
    if (ctx->pc == 0x48B278u) {
        ctx->pc = 0x48B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B274u;
        // 0x48b278: 0x871004  sllv        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B27Cu;
        goto label_48b27c;
    }
    ctx->pc = 0x48B274u;
    {
        const bool branch_taken_0x48b274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B274u;
        // 0x48b278: 0x871004  sllv        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b274) {
            ctx->pc = 0x48B250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b250;
        }
    }
    ctx->pc = 0x48B27Cu;
label_48b27c:
    // 0x48b27c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x48b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_48b280:
    // 0x48b280: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x48b280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_48b284:
    // 0x48b284: 0xcb102b  sltu        $v0, $a2, $t3
    ctx->pc = 0x48b284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_48b288:
    // 0x48b288: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_48b28c:
    if (ctx->pc == 0x48B28Cu) {
        ctx->pc = 0x48B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B288u;
        // 0x48b28c: 0xfc680000  sd          $t0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B290u;
        goto label_48b290;
    }
    ctx->pc = 0x48B288u;
    {
        const bool branch_taken_0x48b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B288u;
        // 0x48b28c: 0xfc680000  sd          $t0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b288) {
            ctx->pc = 0x48B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b230;
        }
    }
    ctx->pc = 0x48B290u;
label_48b290:
    // 0x48b290: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x48b290u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_48b294:
    // 0x48b294: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x48b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_48b298:
    // 0x48b298: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x48b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_48b29c:
    // 0x48b29c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48b29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48b2a0:
    // 0x48b2a0: 0xc11f604  jal         func_47D810
label_48b2a4:
    if (ctx->pc == 0x48B2A4u) {
        ctx->pc = 0x48B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B2A0u;
        // 0x48b2a4: 0x34e70411  ori         $a3, $a3, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B2A8u;
        goto label_48b2a8;
    }
    ctx->pc = 0x48B2A0u;
    SET_GPR_U32(ctx, 31, 0x48B2A8u);
    ctx->pc = 0x48B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B2A0u;
    // 0x48b2a4: 0x34e70411  ori         $a3, $a3, 0x411 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1041);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D810u, 0x48B2A0u, 0x48B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B2A8u;
label_48b2a8:
    // 0x48b2a8: 0xae024004  sw          $v0, 0x4004($s0)
    ctx->pc = 0x48b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16388), GPR_U32(ctx, 2));
label_48b2ac:
    // 0x48b2ac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48b2b0:
    // 0x48b2b0: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x48b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_48b2b4:
    // 0x48b2b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48b2b8:
    // 0x48b2b8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x48b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_48b2bc:
    // 0x48b2bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x48b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_48b2c0:
    // 0x48b2c0: 0x40f809  jalr        $v0
label_48b2c4:
    if (ctx->pc == 0x48B2C4u) {
        ctx->pc = 0x48B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B2C0u;
        // 0x48b2c4: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B2C8u;
        goto label_48b2c8;
    }
    ctx->pc = 0x48B2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B2C8u);
        ctx->pc = 0x48B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B2C0u;
        // 0x48b2c4: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B2C0u, 0x48B2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B2C8u;
label_48b2c8:
    // 0x48b2c8: 0xae024000  sw          $v0, 0x4000($s0)
    ctx->pc = 0x48b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16384), GPR_U32(ctx, 2));
label_48b2cc:
    // 0x48b2cc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x48b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_48b2d0:
    // 0x48b2d0: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x48b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_48b2d4:
    // 0x48b2d4: 0x0  nop
    ctx->pc = 0x48b2d4u;
    // NOP
label_48b2d8:
    // 0x48b2d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_48b2dc:
    // 0x48b2dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_48b2e0:
    // 0x48b2e0: 0x0  nop
    ctx->pc = 0x48b2e0u;
    // NOP
label_48b2e4:
    // 0x48b2e4: 0x0  nop
    ctx->pc = 0x48b2e4u;
    // NOP
label_48b2e8:
    // 0x48b2e8: 0x0  nop
    ctx->pc = 0x48b2e8u;
    // NOP
label_48b2ec:
    // 0x48b2ec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_48b2f0:
    if (ctx->pc == 0x48B2F0u) {
        ctx->pc = 0x48B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B2ECu;
        // 0x48b2f0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B2F4u;
        goto label_48b2f4;
    }
    ctx->pc = 0x48B2ECu;
    {
        const bool branch_taken_0x48b2ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x48B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B2ECu;
        // 0x48b2f0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b2ec) {
            ctx->pc = 0x48B2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b2d8;
        }
    }
    ctx->pc = 0x48B2F4u;
label_48b2f4:
    // 0x48b2f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48b2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b2f8:
    // 0x48b2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b2fc:
    // 0x48b2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48b300:
    // 0x48b300: 0x3e00008  jr          $ra
label_48b304:
    if (ctx->pc == 0x48B304u) {
        ctx->pc = 0x48B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B300u;
        // 0x48b304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B308u;
        goto label_fallthrough_0x48b300;
    }
    ctx->pc = 0x48B300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B300u;
        // 0x48b304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48b300:
    ctx->pc = 0x48B308u;
}
