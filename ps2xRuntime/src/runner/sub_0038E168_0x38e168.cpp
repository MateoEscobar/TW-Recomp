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

// Function: sub_0038E168
// Address: 0x38e168 - 0x38e2b0
void sub_0038E168_0x38e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E168_0x38e168");
#endif

    switch (ctx->pc) {
        case 0x38e168u: goto label_38e168;
        case 0x38e16cu: goto label_38e16c;
        case 0x38e170u: goto label_38e170;
        case 0x38e174u: goto label_38e174;
        case 0x38e178u: goto label_38e178;
        case 0x38e17cu: goto label_38e17c;
        case 0x38e180u: goto label_38e180;
        case 0x38e184u: goto label_38e184;
        case 0x38e188u: goto label_38e188;
        case 0x38e18cu: goto label_38e18c;
        case 0x38e190u: goto label_38e190;
        case 0x38e194u: goto label_38e194;
        case 0x38e198u: goto label_38e198;
        case 0x38e19cu: goto label_38e19c;
        case 0x38e1a0u: goto label_38e1a0;
        case 0x38e1a4u: goto label_38e1a4;
        case 0x38e1a8u: goto label_38e1a8;
        case 0x38e1acu: goto label_38e1ac;
        case 0x38e1b0u: goto label_38e1b0;
        case 0x38e1b4u: goto label_38e1b4;
        case 0x38e1b8u: goto label_38e1b8;
        case 0x38e1bcu: goto label_38e1bc;
        case 0x38e1c0u: goto label_38e1c0;
        case 0x38e1c4u: goto label_38e1c4;
        case 0x38e1c8u: goto label_38e1c8;
        case 0x38e1ccu: goto label_38e1cc;
        case 0x38e1d0u: goto label_38e1d0;
        case 0x38e1d4u: goto label_38e1d4;
        case 0x38e1d8u: goto label_38e1d8;
        case 0x38e1dcu: goto label_38e1dc;
        case 0x38e1e0u: goto label_38e1e0;
        case 0x38e1e4u: goto label_38e1e4;
        case 0x38e1e8u: goto label_38e1e8;
        case 0x38e1ecu: goto label_38e1ec;
        case 0x38e1f0u: goto label_38e1f0;
        case 0x38e1f4u: goto label_38e1f4;
        case 0x38e1f8u: goto label_38e1f8;
        case 0x38e1fcu: goto label_38e1fc;
        case 0x38e200u: goto label_38e200;
        case 0x38e204u: goto label_38e204;
        case 0x38e208u: goto label_38e208;
        case 0x38e20cu: goto label_38e20c;
        case 0x38e210u: goto label_38e210;
        case 0x38e214u: goto label_38e214;
        case 0x38e218u: goto label_38e218;
        case 0x38e21cu: goto label_38e21c;
        case 0x38e220u: goto label_38e220;
        case 0x38e224u: goto label_38e224;
        case 0x38e228u: goto label_38e228;
        case 0x38e22cu: goto label_38e22c;
        case 0x38e230u: goto label_38e230;
        case 0x38e234u: goto label_38e234;
        case 0x38e238u: goto label_38e238;
        case 0x38e23cu: goto label_38e23c;
        case 0x38e240u: goto label_38e240;
        case 0x38e244u: goto label_38e244;
        case 0x38e248u: goto label_38e248;
        case 0x38e24cu: goto label_38e24c;
        case 0x38e250u: goto label_38e250;
        case 0x38e254u: goto label_38e254;
        case 0x38e258u: goto label_38e258;
        case 0x38e25cu: goto label_38e25c;
        case 0x38e260u: goto label_38e260;
        case 0x38e264u: goto label_38e264;
        case 0x38e268u: goto label_38e268;
        case 0x38e26cu: goto label_38e26c;
        case 0x38e270u: goto label_38e270;
        case 0x38e274u: goto label_38e274;
        case 0x38e278u: goto label_38e278;
        case 0x38e27cu: goto label_38e27c;
        case 0x38e280u: goto label_38e280;
        case 0x38e284u: goto label_38e284;
        case 0x38e288u: goto label_38e288;
        case 0x38e28cu: goto label_38e28c;
        case 0x38e290u: goto label_38e290;
        case 0x38e294u: goto label_38e294;
        case 0x38e298u: goto label_38e298;
        case 0x38e29cu: goto label_38e29c;
        case 0x38e2a0u: goto label_38e2a0;
        case 0x38e2a4u: goto label_38e2a4;
        case 0x38e2a8u: goto label_38e2a8;
        case 0x38e2acu: goto label_38e2ac;
        default: break;
    }

    ctx->pc = 0x38e168u;

label_38e168:
    // 0x38e168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38e168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38e16c:
    // 0x38e16c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38e170:
    // 0x38e170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38e174:
    // 0x38e174: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x38e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
label_38e178:
    // 0x38e178: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38e17c:
    // 0x38e17c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x38e17cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_38e180:
    // 0x38e180: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38e184:
    // 0x38e184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e188:
    // 0x38e188: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38e18c:
    // 0x38e18c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x38e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_38e190:
    // 0x38e190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e194:
    // 0x38e194: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38e194u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_38e198:
    // 0x38e198: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x38e198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_38e19c:
    // 0x38e19c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x38e19cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_38e1a0:
    // 0x38e1a0: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x38e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_38e1a4:
    // 0x38e1a4: 0x26100940  addiu       $s0, $s0, 0x940
    ctx->pc = 0x38e1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
label_38e1a8:
    // 0x38e1a8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x38e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_38e1ac:
    // 0x38e1ac: 0x26310948  addiu       $s1, $s1, 0x948
    ctx->pc = 0x38e1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2376));
label_38e1b0:
    // 0x38e1b0: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x38e1b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_38e1b4:
    // 0x38e1b4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x38e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_38e1b8:
    // 0x38e1b8: 0x34c65720  ori         $a2, $a2, 0x5720
    ctx->pc = 0x38e1b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22304);
label_38e1bc:
    // 0x38e1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e1c0:
    // 0x38e1c0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x38e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_38e1c4:
    // 0x38e1c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x38e1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38e1c8:
    // 0x38e1c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x38e1c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e1cc:
    // 0x38e1cc: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x38e1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_38e1d0:
    // 0x38e1d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38e1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38e1d4:
    // 0x38e1d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38e1d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e1d8:
    // 0x38e1d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38e1dc:
    // 0x38e1dc: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x38e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_38e1e0:
    // 0x38e1e0: 0x40f809  jalr        $v0
label_38e1e4:
    if (ctx->pc == 0x38E1E4u) {
        ctx->pc = 0x38E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1E0u;
        // 0x38e1e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1E8u;
        goto label_38e1e8;
    }
    ctx->pc = 0x38E1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E1E8u);
        ctx->pc = 0x38E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1E0u;
        // 0x38e1e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E1E0u, 0x38E1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E1E8u;
label_38e1e8:
    // 0x38e1e8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x38e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_38e1ec:
    // 0x38e1ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e1f0:
    // 0x38e1f0: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x38e1f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_38e1f4:
    // 0x38e1f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x38e1f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e1f8:
    // 0x38e1f8: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x38e1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38e1fc:
    // 0x38e1fc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x38e1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38e200:
    // 0x38e200: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x38e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_38e204:
    // 0x38e204: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x38e204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38e208:
    // 0x38e208: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x38e208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38e20c:
    // 0x38e20c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38e20cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e210:
    // 0x38e210: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38e210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38e214:
    // 0x38e214: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38e214u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e218:
    // 0x38e218: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38e21c:
    // 0x38e21c: 0x40f809  jalr        $v0
label_38e220:
    if (ctx->pc == 0x38E220u) {
        ctx->pc = 0x38E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E21Cu;
        // 0x38e220: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E224u;
        goto label_38e224;
    }
    ctx->pc = 0x38E21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E224u);
        ctx->pc = 0x38E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E21Cu;
        // 0x38e220: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E21Cu, 0x38E224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E224u;
label_38e224:
    // 0x38e224: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x38e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38e228:
    // 0x38e228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38e228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e22c:
    // 0x38e22c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_38e230:
    if (ctx->pc == 0x38E230u) {
        ctx->pc = 0x38E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E22Cu;
        // 0x38e230: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E234u;
        goto label_38e234;
    }
    ctx->pc = 0x38E22Cu;
    {
        const bool branch_taken_0x38e22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E22Cu;
        // 0x38e230: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e22c) {
            ctx->pc = 0x38E264u;
            goto label_38e264;
        }
    }
    ctx->pc = 0x38E234u;
label_38e234:
    // 0x38e234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38e234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e238:
    // 0x38e238: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x38e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_38e23c:
    // 0x38e23c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x38e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38e240:
    // 0x38e240: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38e244:
    // 0x38e244: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38e248:
    // 0x38e248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38e24c:
    // 0x38e24c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x38e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_38e250:
    // 0x38e250: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38e250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_38e254:
    // 0x38e254: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x38e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38e258:
    // 0x38e258: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38e258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38e25c:
    // 0x38e25c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_38e260:
    if (ctx->pc == 0x38E260u) {
        ctx->pc = 0x38E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E25Cu;
        // 0x38e260: 0x24c61310  addiu       $a2, $a2, 0x1310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E264u;
        goto label_38e264;
    }
    ctx->pc = 0x38E25Cu;
    {
        const bool branch_taken_0x38e25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E25Cu;
        // 0x38e260: 0x24c61310  addiu       $a2, $a2, 0x1310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e25c) {
            ctx->pc = 0x38E238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e238;
        }
    }
    ctx->pc = 0x38E264u;
label_38e264:
    // 0x38e264: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38e264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38e268:
    // 0x38e268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38e268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38e26c:
    // 0x38e26c: 0x24424db0  addiu       $v0, $v0, 0x4DB0
    ctx->pc = 0x38e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19888));
label_38e270:
    // 0x38e270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38e274:
    // 0x38e274: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x38e274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_38e278:
    // 0x38e278: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x38e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_38e27c:
    // 0x38e27c: 0xc0e3af4  jal         func_38EBD0
label_38e280:
    if (ctx->pc == 0x38E280u) {
        ctx->pc = 0x38E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E27Cu;
        // 0x38e280: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E284u;
        goto label_38e284;
    }
    ctx->pc = 0x38E27Cu;
    SET_GPR_U32(ctx, 31, 0x38E284u);
    ctx->pc = 0x38E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E27Cu;
    // 0x38e280: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EBD0u, 0x38E27Cu, 0x38E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E284u;
label_38e284:
    // 0x38e284: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x38e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_38e288:
    // 0x38e288: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38e288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38e28c:
    // 0x38e28c: 0xac5371b4  sw          $s3, 0x71B4($v0)
    ctx->pc = 0x38e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29108), GPR_U32(ctx, 19));
label_38e290:
    // 0x38e290: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38e290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38e294:
    // 0x38e294: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38e294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e298:
    // 0x38e298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e29c:
    // 0x38e29c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38e29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e2a0:
    // 0x38e2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e2a4:
    // 0x38e2a4: 0x3e00008  jr          $ra
label_38e2a8:
    if (ctx->pc == 0x38E2A8u) {
        ctx->pc = 0x38E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2A4u;
        // 0x38e2a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E2ACu;
        goto label_38e2ac;
    }
    ctx->pc = 0x38E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2A4u;
        // 0x38e2a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E2ACu;
label_38e2ac:
    // 0x38e2ac: 0x0  nop
    ctx->pc = 0x38e2acu;
    // NOP
    ctx->pc = 0x38e2b0u;
}
