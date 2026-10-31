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

// Function: sub_00447560
// Address: 0x447560 - 0x447a38
void sub_00447560_0x447560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447560_0x447560");
#endif

    switch (ctx->pc) {
        case 0x4475acu: goto label_4475ac;
        case 0x4475d8u: goto label_4475d8;
        case 0x447618u: goto label_447618;
        case 0x447640u: goto label_447640;
        case 0x447680u: goto label_447680;
        case 0x44769cu: goto label_44769c;
        case 0x4476a4u: goto label_4476a4;
        case 0x4476e0u: goto label_4476e0;
        case 0x447720u: goto label_447720;
        case 0x447744u: goto label_447744;
        case 0x447788u: goto label_447788;
        case 0x4477e4u: goto label_4477e4;
        case 0x4477f0u: goto label_4477f0;
        case 0x447818u: goto label_447818;
        case 0x44784cu: goto label_44784c;
        case 0x447854u: goto label_447854;
        case 0x447860u: goto label_447860;
        case 0x447870u: goto label_447870;
        case 0x4478b0u: goto label_4478b0;
        case 0x4478d0u: goto label_4478d0;
        case 0x4478f4u: goto label_4478f4;
        case 0x447938u: goto label_447938;
        case 0x447994u: goto label_447994;
        case 0x4479a0u: goto label_4479a0;
        case 0x4479c8u: goto label_4479c8;
        case 0x4479fcu: goto label_4479fc;
        case 0x447a10u: goto label_447a10;
        default: break;
    }

    ctx->pc = 0x447560u;

    // 0x447560: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x447560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x447564: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x447564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x447568: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x447568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x44756c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x44756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x447570: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x447570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x447574: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x447574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447578: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x447578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x44757c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44757cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447580: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x447580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x447584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x447584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447588: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x447588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x44758c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x44758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x447590: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x447590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x447594: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x447594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x447598: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x447598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x44759c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x44759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x4475a0: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x4475a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x4475a4: 0xc111982  jal         func_446608
    ctx->pc = 0x4475A4u;
    SET_GPR_U32(ctx, 31, 0x4475ACu);
    ctx->pc = 0x4475A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4475A4u;
    // 0x4475a8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x4475A4u, 0x4475ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4475ACu;
label_4475ac:
    // 0x4475ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4475acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4475b0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x4475b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x4475b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4475b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x4475b8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4475b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4475bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4475BCu;
    {
        const bool branch_taken_0x4475bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4475C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4475BCu;
        // 0x4475c0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4475bc) {
            ctx->pc = 0x4475CCu;
            goto label_4475cc;
        }
    }
    ctx->pc = 0x4475C4u;
    // 0x4475c4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x4475c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x4475c8: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x4475c8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_4475cc:
    // 0x4475cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4475ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4475d0: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x4475d0u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4475d4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x4475d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_4475d8:
    // 0x4475d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4475d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4475dc: 0x0  nop
    ctx->pc = 0x4475dcu;
    // NOP
    // 0x4475e0: 0x0  nop
    ctx->pc = 0x4475e0u;
    // NOP
    // 0x4475e4: 0x0  nop
    ctx->pc = 0x4475e4u;
    // NOP
    // 0x4475e8: 0x0  nop
    ctx->pc = 0x4475e8u;
    // NOP
    // 0x4475ec: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4475ECu;
    {
        const bool branch_taken_0x4475ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4475ec) {
            ctx->pc = 0x4475D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4475d8;
        }
    }
    ctx->pc = 0x4475F4u;
    // 0x4475f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4475f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4475f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4475f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4475fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4475fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x447600: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x447604: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x447604u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x447608: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x447608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x44760c: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x44760cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x447610: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x447610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x447614: 0x0  nop
    ctx->pc = 0x447614u;
    // NOP
label_447618:
    // 0x447618: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x447618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44761c: 0x0  nop
    ctx->pc = 0x44761cu;
    // NOP
    // 0x447620: 0x0  nop
    ctx->pc = 0x447620u;
    // NOP
    // 0x447624: 0x0  nop
    ctx->pc = 0x447624u;
    // NOP
    // 0x447628: 0x0  nop
    ctx->pc = 0x447628u;
    // NOP
    // 0x44762c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44762Cu;
    {
        const bool branch_taken_0x44762c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x44762c) {
            ctx->pc = 0x447618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447618;
        }
    }
    ctx->pc = 0x447634u;
    // 0x447634: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x447634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447638: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x447638u;
    SET_GPR_U32(ctx, 31, 0x447640u);
    ctx->pc = 0x44763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447638u;
    // 0x44763c: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x447638u, 0x447640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447640u;
label_447640:
    // 0x447640: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x447640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x447644: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x447644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x447648: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x447648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44764c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x44764cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x447650: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x447650u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x447654: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x447654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x447658: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x447658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x44765c: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x44765cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x447660: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x447660u;
    {
        const bool branch_taken_0x447660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x447664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447660u;
        // 0x447664: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447660) {
            ctx->pc = 0x447868u;
            goto label_447868;
        }
    }
    ctx->pc = 0x447668u;
    // 0x447668: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x447668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x44766c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x447670: 0x24a57b80  addiu       $a1, $a1, 0x7B80
    ctx->pc = 0x447670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31616));
    // 0x447674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x447674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447678: 0xc10f370  jal         func_43CDC0
    ctx->pc = 0x447678u;
    SET_GPR_U32(ctx, 31, 0x447680u);
    ctx->pc = 0x44767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447678u;
    // 0x44767c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDC0u, 0x447678u, 0x447680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447680u;
label_447680:
    // 0x447680: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x447680u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447684: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x447684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x447688: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44768c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x447690: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x447690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x447694: 0xc10f704  jal         func_43DC10
    ctx->pc = 0x447694u;
    SET_GPR_U32(ctx, 31, 0x44769Cu);
    ctx->pc = 0x447698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447694u;
    // 0x447698: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DC10u, 0x447694u, 0x44769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44769Cu;
label_44769c:
    // 0x44769c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44769Cu;
    SET_GPR_U32(ctx, 31, 0x4476A4u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44769Cu, 0x4476A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4476A4u;
label_4476a4:
    // 0x4476a4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x4476a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4476a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4476a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4476ac: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x4476acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x4476b0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4476b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4476b4u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x4476b8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x4476b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x4476bc: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x4476bcu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x4476c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4476c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4476c4: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x4476c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x4476c8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x4476c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x4476cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4476ccu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x4476d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4476D0u;
    {
        const bool branch_taken_0x4476d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4476D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476D0u;
        // 0x4476d4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476d0) {
            ctx->pc = 0x4476E4u;
            goto label_4476e4;
        }
    }
    ctx->pc = 0x4476D8u;
    // 0x4476d8: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4476D8u;
    SET_GPR_U32(ctx, 31, 0x4476E0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4476D8u, 0x4476E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4476E0u;
label_4476e0:
    // 0x4476e0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4476e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4476e4:
    // 0x4476e4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4476e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4476e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4476e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4476ec: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x4476ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x4476f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4476f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4476f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4476f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4476f8: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x4476f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4476fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4476fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x447700: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x447700u;
    {
        const bool branch_taken_0x447700 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x447704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447700u;
        // 0x447704: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447700) {
            ctx->pc = 0x44783Cu;
            goto label_44783c;
        }
    }
    ctx->pc = 0x447708u;
    // 0x447708: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44770c: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x44770cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x447710: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x447710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x447714: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x447714u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x447718: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x447718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x44771c: 0x0  nop
    ctx->pc = 0x44771cu;
    // NOP
label_447720:
    // 0x447720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x447724: 0x0  nop
    ctx->pc = 0x447724u;
    // NOP
    // 0x447728: 0x0  nop
    ctx->pc = 0x447728u;
    // NOP
    // 0x44772c: 0x0  nop
    ctx->pc = 0x44772cu;
    // NOP
    // 0x447730: 0x0  nop
    ctx->pc = 0x447730u;
    // NOP
    // 0x447734: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x447734u;
    {
        const bool branch_taken_0x447734 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x447734) {
            ctx->pc = 0x447720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447720;
        }
    }
    ctx->pc = 0x44773Cu;
    // 0x44773c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44773Cu;
    SET_GPR_U32(ctx, 31, 0x447744u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44773Cu, 0x447744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447744u;
label_447744:
    // 0x447744: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x447744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x447748: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x447748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x44774c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x447750: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x447750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x447754: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x447754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x447758: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44775c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44775cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447760: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x447760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x447764: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x447764u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x447768: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44776c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x44776cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x447770: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x447770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x447774: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x447774u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x447778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447778u;
    {
        const bool branch_taken_0x447778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447778u;
        // 0x44777c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447778) {
            ctx->pc = 0x44778Cu;
            goto label_44778c;
        }
    }
    ctx->pc = 0x447780u;
    // 0x447780: 0xc110cc4  jal         func_443310
    ctx->pc = 0x447780u;
    SET_GPR_U32(ctx, 31, 0x447788u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x447780u, 0x447788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447788u;
label_447788:
    // 0x447788: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x447788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_44778c:
    // 0x44778c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447790: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x447790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x447794: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x447794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x447798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x447798u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44779c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x44779cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x4477a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4477a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4477a4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x4477a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x4477a8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4477A8u;
    {
        const bool branch_taken_0x4477a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4477ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477A8u;
        // 0x4477ac: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477a8) {
            ctx->pc = 0x4477C4u;
            goto label_4477c4;
        }
    }
    ctx->pc = 0x4477B0u;
    // 0x4477b0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x4477b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x4477b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4477B4u;
    {
        const bool branch_taken_0x4477b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4477B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477B4u;
        // 0x4477b8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477b4) {
            ctx->pc = 0x4477C4u;
            goto label_4477c4;
        }
    }
    ctx->pc = 0x4477BCu;
    // 0x4477bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4477BCu;
    {
        const bool branch_taken_0x4477bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4477C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477BCu;
        // 0x4477c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477bc) {
            ctx->pc = 0x4477CCu;
            goto label_4477cc;
        }
    }
    ctx->pc = 0x4477C4u;
label_4477c4:
    // 0x4477c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4477C4u;
    {
        const bool branch_taken_0x4477c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4477C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477C4u;
        // 0x4477c8: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477c4) {
            ctx->pc = 0x4477D0u;
            goto label_4477d0;
        }
    }
    ctx->pc = 0x4477CCu;
label_4477cc:
    // 0x4477cc: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x4477ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_4477d0:
    // 0x4477d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4477d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4477d4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x4477d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x4477d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4477d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4477dc: 0xc111982  jal         func_446608
    ctx->pc = 0x4477DCu;
    SET_GPR_U32(ctx, 31, 0x4477E4u);
    ctx->pc = 0x4477E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4477DCu;
    // 0x4477e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x4477DCu, 0x4477E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4477E4u;
label_4477e4:
    // 0x4477e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4477e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4477e8: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x4477e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x4477ec: 0x0  nop
    ctx->pc = 0x4477ecu;
    // NOP
label_4477f0:
    // 0x4477f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4477f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4477f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4477f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4477f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4477f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4477fc: 0x0  nop
    ctx->pc = 0x4477fcu;
    // NOP
    // 0x447800: 0x0  nop
    ctx->pc = 0x447800u;
    // NOP
    // 0x447804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x447804u;
    {
        const bool branch_taken_0x447804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447804) {
            ctx->pc = 0x4477F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4477f0;
        }
    }
    ctx->pc = 0x44780Cu;
    // 0x44780c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447810: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x447810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x447814: 0x0  nop
    ctx->pc = 0x447814u;
    // NOP
label_447818:
    // 0x447818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447818u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x44781c: 0x0  nop
    ctx->pc = 0x44781cu;
    // NOP
    // 0x447820: 0x0  nop
    ctx->pc = 0x447820u;
    // NOP
    // 0x447824: 0x0  nop
    ctx->pc = 0x447824u;
    // NOP
    // 0x447828: 0x0  nop
    ctx->pc = 0x447828u;
    // NOP
    // 0x44782c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44782Cu;
    {
        const bool branch_taken_0x44782c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x44782c) {
            ctx->pc = 0x447818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447818;
        }
    }
    ctx->pc = 0x447834u;
    // 0x447834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x447834u;
    {
        const bool branch_taken_0x447834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x447834) {
            ctx->pc = 0x44784Cu;
            goto label_44784c;
        }
    }
    ctx->pc = 0x44783Cu;
label_44783c:
    // 0x44783c: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x44783cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x447840: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x447840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447844: 0xc111ce8  jal         func_4473A0
    ctx->pc = 0x447844u;
    SET_GPR_U32(ctx, 31, 0x44784Cu);
    ctx->pc = 0x447848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447844u;
    // 0x447848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4473A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4473A0u, 0x447844u, 0x44784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44784Cu;
label_44784c:
    // 0x44784c: 0xc10f6ea  jal         func_43DBA8
    ctx->pc = 0x44784Cu;
    SET_GPR_U32(ctx, 31, 0x447854u);
    ctx->pc = 0x447850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44784Cu;
    // 0x447850: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DBA8u, 0x44784Cu, 0x447854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447854u;
label_447854:
    // 0x447854: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x447854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447858: 0xc10f374  jal         func_43CDD0
    ctx->pc = 0x447858u;
    SET_GPR_U32(ctx, 31, 0x447860u);
    ctx->pc = 0x44785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447858u;
    // 0x44785c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDD0u, 0x447858u, 0x447860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447860u;
label_447860:
    // 0x447860: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x447860u;
    {
        const bool branch_taken_0x447860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447860u;
        // 0x447864: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447860) {
            ctx->pc = 0x447A00u;
            goto label_447a00;
        }
    }
    ctx->pc = 0x447868u;
label_447868:
    // 0x447868: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x447868u;
    SET_GPR_U32(ctx, 31, 0x447870u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x447868u, 0x447870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447870u;
label_447870:
    // 0x447870: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x447870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x447874: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447878: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x447878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x44787c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x44787cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x447880: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x447880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x447884: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x447884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x447888: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x447888u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x44788c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x44788cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x447890: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x447890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x447894: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x447894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x447898: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x447898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44789c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x44789cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4478a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4478A0u;
    {
        const bool branch_taken_0x4478a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4478A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478A0u;
        // 0x4478a4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4478a0) {
            ctx->pc = 0x4478B0u;
            goto label_4478b0;
        }
    }
    ctx->pc = 0x4478A8u;
    // 0x4478a8: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4478A8u;
    SET_GPR_U32(ctx, 31, 0x4478B0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4478A8u, 0x4478B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4478B0u;
label_4478b0:
    // 0x4478b0: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x4478B0u;
    {
        const bool branch_taken_0x4478b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4478B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478B0u;
        // 0x4478b4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4478b0) {
            ctx->pc = 0x4479ECu;
            goto label_4479ec;
        }
    }
    ctx->pc = 0x4478B8u;
    // 0x4478b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4478bc: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x4478bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x4478c0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x4478c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4478c4: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x4478c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x4478c8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x4478c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x4478cc: 0x0  nop
    ctx->pc = 0x4478ccu;
    // NOP
label_4478d0:
    // 0x4478d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4478d4: 0x0  nop
    ctx->pc = 0x4478d4u;
    // NOP
    // 0x4478d8: 0x0  nop
    ctx->pc = 0x4478d8u;
    // NOP
    // 0x4478dc: 0x0  nop
    ctx->pc = 0x4478dcu;
    // NOP
    // 0x4478e0: 0x0  nop
    ctx->pc = 0x4478e0u;
    // NOP
    // 0x4478e4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4478E4u;
    {
        const bool branch_taken_0x4478e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4478e4) {
            ctx->pc = 0x4478D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4478d0;
        }
    }
    ctx->pc = 0x4478ECu;
    // 0x4478ec: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4478ECu;
    SET_GPR_U32(ctx, 31, 0x4478F4u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4478ECu, 0x4478F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4478F4u;
label_4478f4:
    // 0x4478f4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x4478f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x4478f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4478f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4478fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4478fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x447900: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x447900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x447904: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x447904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x447908: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44790c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44790cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447910: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x447910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x447914: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x447914u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x447918: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44791c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x44791cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x447920: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x447920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x447924: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x447924u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x447928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447928u;
    {
        const bool branch_taken_0x447928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447928u;
        // 0x44792c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447928) {
            ctx->pc = 0x44793Cu;
            goto label_44793c;
        }
    }
    ctx->pc = 0x447930u;
    // 0x447930: 0xc110cc4  jal         func_443310
    ctx->pc = 0x447930u;
    SET_GPR_U32(ctx, 31, 0x447938u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x447930u, 0x447938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447938u;
label_447938:
    // 0x447938: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x447938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_44793c:
    // 0x44793c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447940: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x447940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x447944: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x447944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x447948: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x447948u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44794c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x44794cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x447950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x447950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x447954: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x447954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x447958: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x447958u;
    {
        const bool branch_taken_0x447958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x44795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447958u;
        // 0x44795c: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447958) {
            ctx->pc = 0x447974u;
            goto label_447974;
        }
    }
    ctx->pc = 0x447960u;
    // 0x447960: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x447960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x447964: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x447964u;
    {
        const bool branch_taken_0x447964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x447968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447964u;
        // 0x447968: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447964) {
            ctx->pc = 0x447974u;
            goto label_447974;
        }
    }
    ctx->pc = 0x44796Cu;
    // 0x44796c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44796Cu;
    {
        const bool branch_taken_0x44796c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x447970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44796Cu;
        // 0x447970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44796c) {
            ctx->pc = 0x44797Cu;
            goto label_44797c;
        }
    }
    ctx->pc = 0x447974u;
label_447974:
    // 0x447974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447974u;
    {
        const bool branch_taken_0x447974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447974u;
        // 0x447978: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447974) {
            ctx->pc = 0x447980u;
            goto label_447980;
        }
    }
    ctx->pc = 0x44797Cu;
label_44797c:
    // 0x44797c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x44797cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_447980:
    // 0x447980: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x447980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x447984: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x447984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x447988: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x447988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x44798c: 0xc111982  jal         func_446608
    ctx->pc = 0x44798Cu;
    SET_GPR_U32(ctx, 31, 0x447994u);
    ctx->pc = 0x447990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44798Cu;
    // 0x447990: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x44798Cu, 0x447994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447994u;
label_447994:
    // 0x447994: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447998: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x447998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x44799c: 0x0  nop
    ctx->pc = 0x44799cu;
    // NOP
label_4479a0:
    // 0x4479a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4479a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4479a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4479a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4479a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4479a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4479ac: 0x0  nop
    ctx->pc = 0x4479acu;
    // NOP
    // 0x4479b0: 0x0  nop
    ctx->pc = 0x4479b0u;
    // NOP
    // 0x4479b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4479B4u;
    {
        const bool branch_taken_0x4479b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4479b4) {
            ctx->pc = 0x4479A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4479a0;
        }
    }
    ctx->pc = 0x4479BCu;
    // 0x4479bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4479bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4479c0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x4479c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x4479c4: 0x0  nop
    ctx->pc = 0x4479c4u;
    // NOP
label_4479c8:
    // 0x4479c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4479c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4479cc: 0x0  nop
    ctx->pc = 0x4479ccu;
    // NOP
    // 0x4479d0: 0x0  nop
    ctx->pc = 0x4479d0u;
    // NOP
    // 0x4479d4: 0x0  nop
    ctx->pc = 0x4479d4u;
    // NOP
    // 0x4479d8: 0x0  nop
    ctx->pc = 0x4479d8u;
    // NOP
    // 0x4479dc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4479DCu;
    {
        const bool branch_taken_0x4479dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4479dc) {
            ctx->pc = 0x4479C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4479c8;
        }
    }
    ctx->pc = 0x4479E4u;
    // 0x4479e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4479E4u;
    {
        const bool branch_taken_0x4479e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4479E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479E4u;
        // 0x4479e8: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4479e4) {
            ctx->pc = 0x447A00u;
            goto label_447a00;
        }
    }
    ctx->pc = 0x4479ECu;
label_4479ec:
    // 0x4479ec: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x4479ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x4479f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4479f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4479f4: 0xc111ce8  jal         func_4473A0
    ctx->pc = 0x4479F4u;
    SET_GPR_U32(ctx, 31, 0x4479FCu);
    ctx->pc = 0x4479F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4479F4u;
    // 0x4479f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4473A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4473A0u, 0x4479F4u, 0x4479FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4479FCu;
label_4479fc:
    // 0x4479fc: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x4479fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_447a00:
    // 0x447a00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x447a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x447a04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x447a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x447a08: 0xc111982  jal         func_446608
    ctx->pc = 0x447A08u;
    SET_GPR_U32(ctx, 31, 0x447A10u);
    ctx->pc = 0x447A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447A08u;
    // 0x447a0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x447A08u, 0x447A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447A10u;
label_447a10:
    // 0x447a10: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x447a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x447a14: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x447a14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x447a18: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x447a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x447a1c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x447a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x447a20: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x447a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x447a24: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x447a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x447a28: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x447a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x447a2c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x447a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x447a30: 0x3e00008  jr          $ra
    ctx->pc = 0x447A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A30u;
        // 0x447a34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447A38u;
}
