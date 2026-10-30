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

// Function: sub_002671A8
// Address: 0x2671a8 - 0x2672d0
void sub_002671A8_0x2671a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002671A8_0x2671a8");
#endif

    switch (ctx->pc) {
        case 0x2671e4u: goto label_2671e4;
        case 0x267224u: goto label_267224;
        case 0x267234u: goto label_267234;
        default: break;
    }

    ctx->pc = 0x2671a8u;

    // 0x2671a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2671a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2671ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2671acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2671b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2671b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2671b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2671b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2671b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2671bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2671bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2671c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2671c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2671c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2671c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2671cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2671ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2671d0: 0x32140003  andi        $s4, $s0, 0x3
    ctx->pc = 0x2671d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2671d4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2671d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2671d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2671d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2671dc: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x2671DCu;
    SET_GPR_U32(ctx, 31, 0x2671E4u);
    ctx->pc = 0x2671E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2671DCu;
    // 0x2671e0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x2671DCu, 0x2671E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671E4u;
label_2671e4:
    // 0x2671e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2671e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671e8: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x2671e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2671ec: 0x3202000c  andi        $v0, $s0, 0xC
    ctx->pc = 0x2671ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
    // 0x2671f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2671f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2671f4: 0x29082  srl         $s2, $v0, 2
    ctx->pc = 0x2671f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2671f8: 0x32100030  andi        $s0, $s0, 0x30
    ctx->pc = 0x2671f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)48);
    // 0x2671fc: 0x2d2900a  movz        $s2, $s6, $s2
    ctx->pc = 0x2671fcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 22));
    // 0x267200: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x267200u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x267204: 0x3a420003  xori        $v0, $s2, 0x3
    ctx->pc = 0x267204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x267208: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x267208u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x26720c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x26720Cu;
    {
        const bool branch_taken_0x26720c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x267210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26720Cu;
        // 0x267210: 0x32340003  andi        $s4, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26720c) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x267214u;
    // 0x267214: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267214u;
    {
        const bool branch_taken_0x267214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267214u;
        // 0x267218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267214) {
            ctx->pc = 0x267228u;
            goto label_267228;
        }
    }
    ctx->pc = 0x26721Cu;
    // 0x26721c: 0xc099ad4  jal         func_266B50
    ctx->pc = 0x26721Cu;
    SET_GPR_U32(ctx, 31, 0x267224u);
    ctx->pc = 0x267220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26721Cu;
    // 0x267220: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B50u, 0x26721Cu, 0x267224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267224u;
label_267224:
    // 0x267224: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x267224u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_267228:
    // 0x267228: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x267228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26722c: 0xc099b10  jal         func_266C40
    ctx->pc = 0x26722Cu;
    SET_GPR_U32(ctx, 31, 0x267234u);
    ctx->pc = 0x267230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26722Cu;
    // 0x267230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C40u, 0x26722Cu, 0x267234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267234u;
label_267234:
    // 0x267234: 0x926300e0  lbu         $v1, 0xE0($s3)
    ctx->pc = 0x267234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x267238: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x267238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x26723c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x26723cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x267240: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267240u;
    {
        const bool branch_taken_0x267240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267240u;
        // 0x267244: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267240) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x267248u;
    // 0x267248: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x267248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26724c: 0x2c2800a  movz        $s0, $s6, $v0
    ctx->pc = 0x26724cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
label_267250:
    // 0x267250: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x267250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x267254: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x267254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x267258: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x267258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x26725c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x267260: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x267260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267264: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x267264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x267268: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x267268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26726c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26726Cu;
    {
        const bool branch_taken_0x26726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26726Cu;
        // 0x267270: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26726c) {
            ctx->pc = 0x267288u;
            goto label_267288;
        }
    }
    ctx->pc = 0x267274u;
    // 0x267274: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267274u;
    {
        const bool branch_taken_0x267274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267274u;
        // 0x267278: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267274) {
            ctx->pc = 0x26728Cu;
            goto label_26728c;
        }
    }
    ctx->pc = 0x26727Cu;
    // 0x26727c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x26727cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x267280: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267280u;
    {
        const bool branch_taken_0x267280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267280u;
        // 0x267284: 0x8c620898  lw          $v0, 0x898($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267280) {
            ctx->pc = 0x2672A4u;
            goto label_2672a4;
        }
    }
    ctx->pc = 0x267288u;
label_267288:
    // 0x267288: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x267288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26728c:
    // 0x26728c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x267290: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x267290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x267294: 0x24420898  addiu       $v0, $v0, 0x898
    ctx->pc = 0x267294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
    // 0x267298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26729c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2672a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2672a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2672a4:
    // 0x2672a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2672a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2672a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2672a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2672ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2672acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2672b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2672b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2672b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2672b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2672b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2672b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2672bc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2672bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2672c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2672c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2672c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2672C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2672C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672C4u;
        // 0x2672c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2672C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2672CCu;
    // 0x2672cc: 0x0  nop
    ctx->pc = 0x2672ccu;
    // NOP
    ctx->pc = 0x2672d0u;
}
