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

// Function: sub_00219638
// Address: 0x219638 - 0x219860
void sub_00219638_0x219638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219638_0x219638");
#endif

    switch (ctx->pc) {
        case 0x219854u: goto label_219854;
        default: break;
    }

    ctx->pc = 0x219638u;

    // 0x219638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21963c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21963cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219644: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x219644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x219648: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x219648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x21964c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21964cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219650: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x219650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x219654: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x219654u;
    {
        const bool branch_taken_0x219654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219654u;
        // 0x219658: 0x28620022  slti        $v0, $v1, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)34) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219654) {
            ctx->pc = 0x219738u;
            goto label_219738;
        }
    }
    ctx->pc = 0x21965Cu;
    // 0x21965c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21965Cu;
    {
        const bool branch_taken_0x21965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21965Cu;
        // 0x219660: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21965c) {
            ctx->pc = 0x2196B4u;
            goto label_2196b4;
        }
    }
    ctx->pc = 0x219664u;
    // 0x219664: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x219664u;
    {
        const bool branch_taken_0x219664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219664u;
        // 0x219668: 0x28620016  slti        $v0, $v1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219664) {
            ctx->pc = 0x21974Cu;
            goto label_21974c;
        }
    }
    ctx->pc = 0x21966Cu;
    // 0x21966c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21966Cu;
    {
        const bool branch_taken_0x21966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21966Cu;
        // 0x219670: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21966c) {
            ctx->pc = 0x21968Cu;
            goto label_21968c;
        }
    }
    ctx->pc = 0x219674u;
    // 0x219674: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x219674u;
    {
        const bool branch_taken_0x219674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219674u;
        // 0x219678: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219674) {
            ctx->pc = 0x219710u;
            goto label_219710;
        }
    }
    ctx->pc = 0x21967Cu;
    // 0x21967c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x21967Cu;
    {
        const bool branch_taken_0x21967c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21967Cu;
        // 0x219680: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21967c) {
            ctx->pc = 0x219724u;
            goto label_219724;
        }
    }
    ctx->pc = 0x219684u;
    // 0x219684: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x219684u;
    {
        const bool branch_taken_0x219684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219684u;
        // 0x219688: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219684) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x21968Cu;
label_21968c:
    // 0x21968c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x21968cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x219690: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x219690u;
    {
        const bool branch_taken_0x219690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219690u;
        // 0x219694: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219690) {
            ctx->pc = 0x2197A8u;
            goto label_2197a8;
        }
    }
    ctx->pc = 0x219698u;
    // 0x219698: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x219698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x21969c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21969Cu;
    {
        const bool branch_taken_0x21969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2196A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21969Cu;
        // 0x2196a0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21969c) {
            ctx->pc = 0x21974Cu;
            goto label_21974c;
        }
    }
    ctx->pc = 0x2196A4u;
    // 0x2196a4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2196A4u;
    {
        const bool branch_taken_0x2196a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2196A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196A4u;
        // 0x2196a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196a4) {
            ctx->pc = 0x219724u;
            goto label_219724;
        }
    }
    ctx->pc = 0x2196ACu;
    // 0x2196ac: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2196ACu;
    {
        const bool branch_taken_0x2196ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196ACu;
        // 0x2196b0: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196ac) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x2196B4u;
label_2196b4:
    // 0x2196b4: 0x28620079  slti        $v0, $v1, 0x79
    ctx->pc = 0x2196b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2196b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2196B8u;
    {
        const bool branch_taken_0x2196b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196B8u;
        // 0x2196bc: 0x28620077  slti        $v0, $v1, 0x77 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)119) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196b8) {
            ctx->pc = 0x2196D8u;
            goto label_2196d8;
        }
    }
    ctx->pc = 0x2196C0u;
    // 0x2196c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2196C0u;
    {
        const bool branch_taken_0x2196c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196C0u;
        // 0x2196c4: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196c0) {
            ctx->pc = 0x219760u;
            goto label_219760;
        }
    }
    ctx->pc = 0x2196C8u;
    // 0x2196c8: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2196C8u;
    {
        const bool branch_taken_0x2196c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2196CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196C8u;
        // 0x2196cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196c8) {
            ctx->pc = 0x21979Cu;
            goto label_21979c;
        }
    }
    ctx->pc = 0x2196D0u;
    // 0x2196d0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2196D0u;
    {
        const bool branch_taken_0x2196d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196D0u;
        // 0x2196d4: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196d0) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x2196D8u;
label_2196d8:
    // 0x2196d8: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x2196d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2196dc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2196DCu;
    {
        const bool branch_taken_0x2196dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2196E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196DCu;
        // 0x2196e0: 0x28620088  slti        $v0, $v1, 0x88 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196dc) {
            ctx->pc = 0x219760u;
            goto label_219760;
        }
    }
    ctx->pc = 0x2196E4u;
    // 0x2196e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2196E4u;
    {
        const bool branch_taken_0x2196e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196E4u;
        // 0x2196e8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196e4) {
            ctx->pc = 0x2196FCu;
            goto label_2196fc;
        }
    }
    ctx->pc = 0x2196ECu;
    // 0x2196ec: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2196ECu;
    {
        const bool branch_taken_0x2196ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2196F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196ECu;
        // 0x2196f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196ec) {
            ctx->pc = 0x219774u;
            goto label_219774;
        }
    }
    ctx->pc = 0x2196F4u;
    // 0x2196f4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2196F4u;
    {
        const bool branch_taken_0x2196f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196F4u;
        // 0x2196f8: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196f4) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x2196FCu;
label_2196fc:
    // 0x2196fc: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x2196fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x219700: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x219700u;
    {
        const bool branch_taken_0x219700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219700u;
        // 0x219704: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219700) {
            ctx->pc = 0x219788u;
            goto label_219788;
        }
    }
    ctx->pc = 0x219708u;
    // 0x219708: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x219708u;
    {
        const bool branch_taken_0x219708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219708u;
        // 0x21970c: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219708) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x219710u;
label_219710:
    // 0x219710: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x219710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x219714: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x219714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x219718: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21971c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x21971Cu;
    {
        const bool branch_taken_0x21971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21971Cu;
        // 0x219720: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21971c) {
            ctx->pc = 0x2197A8u;
            goto label_2197a8;
        }
    }
    ctx->pc = 0x219724u;
label_219724:
    // 0x219724: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x219724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x219728: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x219728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x21972c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21972cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219730: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x219730u;
    {
        const bool branch_taken_0x219730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219730u;
        // 0x219734: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219730) {
            ctx->pc = 0x2197A8u;
            goto label_2197a8;
        }
    }
    ctx->pc = 0x219738u;
label_219738:
    // 0x219738: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x219738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
    // 0x21973c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21973cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x219740: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219744: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x219744u;
    {
        const bool branch_taken_0x219744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219744u;
        // 0x219748: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219744) {
            ctx->pc = 0x2197A8u;
            goto label_2197a8;
        }
    }
    ctx->pc = 0x21974Cu;
label_21974c:
    // 0x21974c: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x21974cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x219750: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x219750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x219754: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219758: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x219758u;
    {
        const bool branch_taken_0x219758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219758u;
        // 0x21975c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219758) {
            ctx->pc = 0x2197A8u;
            goto label_2197a8;
        }
    }
    ctx->pc = 0x219760u;
label_219760:
    // 0x219760: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x219764: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x219764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x219768: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21976c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21976Cu;
    {
        const bool branch_taken_0x21976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21976Cu;
        // 0x219770: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21976c) {
            ctx->pc = 0x2197A8u;
            goto label_2197a8;
        }
    }
    ctx->pc = 0x219774u;
label_219774:
    // 0x219774: 0x3c013f96  lui         $at, 0x3F96
    ctx->pc = 0x219774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16278 << 16));
    // 0x219778: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x219778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x21977c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21977cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219780: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x219780u;
    {
        const bool branch_taken_0x219780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219780u;
        // 0x219784: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219780) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x219788u;
label_219788:
    // 0x219788: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x219788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x21978c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x21978cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x219790: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219794: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x219794u;
    {
        const bool branch_taken_0x219794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219794u;
        // 0x219798: 0x8c43489c  lw          $v1, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219794) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x21979Cu;
label_21979c:
    // 0x21979c: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x21979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
    // 0x2197a0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x2197a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x2197a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2197a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2197a8:
    // 0x2197a8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2197a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2197ac:
    // 0x2197ac: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x2197acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x2197b0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2197B0u;
    {
        const bool branch_taken_0x2197b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2197b0) {
            ctx->pc = 0x219830u;
            goto label_219830;
        }
    }
    ctx->pc = 0x2197B8u;
    // 0x2197b8: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x2197b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x2197bc: 0x28620079  slti        $v0, $v1, 0x79
    ctx->pc = 0x2197bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2197c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2197C0u;
    {
        const bool branch_taken_0x2197c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C0u;
        // 0x2197c4: 0x28620077  slti        $v0, $v1, 0x77 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)119) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197c0) {
            ctx->pc = 0x2197E0u;
            goto label_2197e0;
        }
    }
    ctx->pc = 0x2197C8u;
    // 0x2197c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2197C8u;
    {
        const bool branch_taken_0x2197c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C8u;
        // 0x2197cc: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197c8) {
            ctx->pc = 0x219810u;
            goto label_219810;
        }
    }
    ctx->pc = 0x2197D0u;
    // 0x2197d0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2197D0u;
    {
        const bool branch_taken_0x2197d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2197d0) {
            ctx->pc = 0x219810u;
            goto label_219810;
        }
    }
    ctx->pc = 0x2197D8u;
    // 0x2197d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2197D8u;
    {
        const bool branch_taken_0x2197d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2197d8) {
            ctx->pc = 0x219830u;
            goto label_219830;
        }
    }
    ctx->pc = 0x2197E0u;
label_2197e0:
    // 0x2197e0: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x2197e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2197e4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2197E4u;
    {
        const bool branch_taken_0x2197e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2197E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E4u;
        // 0x2197e8: 0x28620088  slti        $v0, $v1, 0x88 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197e4) {
            ctx->pc = 0x219824u;
            goto label_219824;
        }
    }
    ctx->pc = 0x2197ECu;
    // 0x2197ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2197ECu;
    {
        const bool branch_taken_0x2197ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197ECu;
        // 0x2197f0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197ec) {
            ctx->pc = 0x219804u;
            goto label_219804;
        }
    }
    ctx->pc = 0x2197F4u;
    // 0x2197f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2197F4u;
    {
        const bool branch_taken_0x2197f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2197f4) {
            ctx->pc = 0x219810u;
            goto label_219810;
        }
    }
    ctx->pc = 0x2197FCu;
    // 0x2197fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2197FCu;
    {
        const bool branch_taken_0x2197fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2197fc) {
            ctx->pc = 0x219830u;
            goto label_219830;
        }
    }
    ctx->pc = 0x219804u;
label_219804:
    // 0x219804: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x219804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x219808: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x219808u;
    {
        const bool branch_taken_0x219808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219808) {
            ctx->pc = 0x219830u;
            goto label_219830;
        }
    }
    ctx->pc = 0x219810u;
label_219810:
    // 0x219810: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x219814: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x219814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x219818: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21981c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21981Cu;
    {
        const bool branch_taken_0x21981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21981c) {
            ctx->pc = 0x219830u;
            goto label_219830;
        }
    }
    ctx->pc = 0x219824u;
label_219824:
    // 0x219824: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
    // 0x219828: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x219828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x21982c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21982cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_219830:
    // 0x219830: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x219830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x219834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219838: 0x0  nop
    ctx->pc = 0x219838u;
    // NOP
    // 0x21983c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x21983cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219840: 0x0  nop
    ctx->pc = 0x219840u;
    // NOP
    // 0x219844: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x219844u;
    {
        const bool branch_taken_0x219844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x219848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219844u;
        // 0x219848: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219844) {
            ctx->pc = 0x219858u;
            goto label_219858;
        }
    }
    ctx->pc = 0x21984Cu;
    // 0x21984c: 0xc086582  jal         func_219608
    ctx->pc = 0x21984Cu;
    SET_GPR_U32(ctx, 31, 0x219854u);
    ctx->pc = 0x219850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21984Cu;
    // 0x219850: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219608u, 0x21984Cu, 0x219854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219854u;
label_219854:
    // 0x219854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_219858:
    // 0x219858: 0x3e00008  jr          $ra
    ctx->pc = 0x219858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219858u;
        // 0x21985c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219860u;
}
