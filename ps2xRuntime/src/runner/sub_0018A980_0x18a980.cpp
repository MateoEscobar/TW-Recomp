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

// Function: sub_0018A980
// Address: 0x18a980 - 0x18ab20
void sub_0018A980_0x18a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A980_0x18a980");
#endif

    switch (ctx->pc) {
        case 0x18a980u: goto label_18a980;
        case 0x18a984u: goto label_18a984;
        case 0x18a988u: goto label_18a988;
        case 0x18a98cu: goto label_18a98c;
        case 0x18a990u: goto label_18a990;
        case 0x18a994u: goto label_18a994;
        case 0x18a998u: goto label_18a998;
        case 0x18a99cu: goto label_18a99c;
        case 0x18a9a0u: goto label_18a9a0;
        case 0x18a9a4u: goto label_18a9a4;
        case 0x18a9a8u: goto label_18a9a8;
        case 0x18a9acu: goto label_18a9ac;
        case 0x18a9b0u: goto label_18a9b0;
        case 0x18a9b4u: goto label_18a9b4;
        case 0x18a9b8u: goto label_18a9b8;
        case 0x18a9bcu: goto label_18a9bc;
        case 0x18a9c0u: goto label_18a9c0;
        case 0x18a9c4u: goto label_18a9c4;
        case 0x18a9c8u: goto label_18a9c8;
        case 0x18a9ccu: goto label_18a9cc;
        case 0x18a9d0u: goto label_18a9d0;
        case 0x18a9d4u: goto label_18a9d4;
        case 0x18a9d8u: goto label_18a9d8;
        case 0x18a9dcu: goto label_18a9dc;
        case 0x18a9e0u: goto label_18a9e0;
        case 0x18a9e4u: goto label_18a9e4;
        case 0x18a9e8u: goto label_18a9e8;
        case 0x18a9ecu: goto label_18a9ec;
        case 0x18a9f0u: goto label_18a9f0;
        case 0x18a9f4u: goto label_18a9f4;
        case 0x18a9f8u: goto label_18a9f8;
        case 0x18a9fcu: goto label_18a9fc;
        case 0x18aa00u: goto label_18aa00;
        case 0x18aa04u: goto label_18aa04;
        case 0x18aa08u: goto label_18aa08;
        case 0x18aa0cu: goto label_18aa0c;
        case 0x18aa10u: goto label_18aa10;
        case 0x18aa14u: goto label_18aa14;
        case 0x18aa18u: goto label_18aa18;
        case 0x18aa1cu: goto label_18aa1c;
        case 0x18aa20u: goto label_18aa20;
        case 0x18aa24u: goto label_18aa24;
        case 0x18aa28u: goto label_18aa28;
        case 0x18aa2cu: goto label_18aa2c;
        case 0x18aa30u: goto label_18aa30;
        case 0x18aa34u: goto label_18aa34;
        case 0x18aa38u: goto label_18aa38;
        case 0x18aa3cu: goto label_18aa3c;
        case 0x18aa40u: goto label_18aa40;
        case 0x18aa44u: goto label_18aa44;
        case 0x18aa48u: goto label_18aa48;
        case 0x18aa4cu: goto label_18aa4c;
        case 0x18aa50u: goto label_18aa50;
        case 0x18aa54u: goto label_18aa54;
        case 0x18aa58u: goto label_18aa58;
        case 0x18aa5cu: goto label_18aa5c;
        case 0x18aa60u: goto label_18aa60;
        case 0x18aa64u: goto label_18aa64;
        case 0x18aa68u: goto label_18aa68;
        case 0x18aa6cu: goto label_18aa6c;
        case 0x18aa70u: goto label_18aa70;
        case 0x18aa74u: goto label_18aa74;
        case 0x18aa78u: goto label_18aa78;
        case 0x18aa7cu: goto label_18aa7c;
        case 0x18aa80u: goto label_18aa80;
        case 0x18aa84u: goto label_18aa84;
        case 0x18aa88u: goto label_18aa88;
        case 0x18aa8cu: goto label_18aa8c;
        case 0x18aa90u: goto label_18aa90;
        case 0x18aa94u: goto label_18aa94;
        case 0x18aa98u: goto label_18aa98;
        case 0x18aa9cu: goto label_18aa9c;
        case 0x18aaa0u: goto label_18aaa0;
        case 0x18aaa4u: goto label_18aaa4;
        case 0x18aaa8u: goto label_18aaa8;
        case 0x18aaacu: goto label_18aaac;
        case 0x18aab0u: goto label_18aab0;
        case 0x18aab4u: goto label_18aab4;
        case 0x18aab8u: goto label_18aab8;
        case 0x18aabcu: goto label_18aabc;
        case 0x18aac0u: goto label_18aac0;
        case 0x18aac4u: goto label_18aac4;
        case 0x18aac8u: goto label_18aac8;
        case 0x18aaccu: goto label_18aacc;
        case 0x18aad0u: goto label_18aad0;
        case 0x18aad4u: goto label_18aad4;
        case 0x18aad8u: goto label_18aad8;
        case 0x18aadcu: goto label_18aadc;
        case 0x18aae0u: goto label_18aae0;
        case 0x18aae4u: goto label_18aae4;
        case 0x18aae8u: goto label_18aae8;
        case 0x18aaecu: goto label_18aaec;
        case 0x18aaf0u: goto label_18aaf0;
        case 0x18aaf4u: goto label_18aaf4;
        case 0x18aaf8u: goto label_18aaf8;
        case 0x18aafcu: goto label_18aafc;
        case 0x18ab00u: goto label_18ab00;
        case 0x18ab04u: goto label_18ab04;
        case 0x18ab08u: goto label_18ab08;
        case 0x18ab0cu: goto label_18ab0c;
        case 0x18ab10u: goto label_18ab10;
        case 0x18ab14u: goto label_18ab14;
        case 0x18ab18u: goto label_18ab18;
        case 0x18ab1cu: goto label_18ab1c;
        default: break;
    }

    ctx->pc = 0x18a980u;

label_18a980:
    // 0x18a980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18a984:
    // 0x18a984: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18a984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18a988:
    // 0x18a988: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x18a988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_18a98c:
    // 0x18a98c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18a990:
    // 0x18a990: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_18a994:
    // 0x18a994: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a998:
    // 0x18a998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18a99c:
    // 0x18a99c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18a99cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a9a0:
    // 0x18a9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a9a4:
    // 0x18a9a4: 0x8e022c7c  lw          $v0, 0x2C7C($s0)
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_18a9a8:
    // 0x18a9a8: 0xc0e6762  jal         func_399D88
label_18a9ac:
    if (ctx->pc == 0x18A9ACu) {
        ctx->pc = 0x18A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9A8u;
        // 0x18a9ac: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A9B0u;
        goto label_18a9b0;
    }
    ctx->pc = 0x18A9A8u;
    SET_GPR_U32(ctx, 31, 0x18A9B0u);
    ctx->pc = 0x18A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9A8u;
    // 0x18a9ac: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D88u, 0x18A9A8u, 0x18A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9B0u;
label_18a9b0:
    // 0x18a9b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_18a9b4:
    if (ctx->pc == 0x18A9B4u) {
        ctx->pc = 0x18A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9B0u;
        // 0x18a9b4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A9B8u;
        goto label_18a9b8;
    }
    ctx->pc = 0x18A9B0u;
    {
        const bool branch_taken_0x18a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9B0u;
        // 0x18a9b4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9b0) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A9B8u;
label_18a9b8:
    // 0x18a9b8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x18a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18a9bc:
    // 0x18a9bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18a9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18a9c0:
    // 0x18a9c0: 0x8ca2084c  lw          $v0, 0x84C($a1)
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2124)));
label_18a9c4:
    // 0x18a9c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18a9c8:
    // 0x18a9c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18a9cc:
    // 0x18a9cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18a9d0:
    // 0x18a9d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18a9d4:
    // 0x18a9d4: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x18a9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_18a9d8:
    // 0x18a9d8: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x18a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_18a9dc:
    // 0x18a9dc: 0x40f809  jalr        $v0
label_18a9e0:
    if (ctx->pc == 0x18A9E0u) {
        ctx->pc = 0x18A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9DCu;
        // 0x18a9e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A9E4u;
        goto label_18a9e4;
    }
    ctx->pc = 0x18A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A9E4u);
        ctx->pc = 0x18A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9DCu;
        // 0x18a9e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A9DCu, 0x18A9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A9E4u;
label_18a9e4:
    // 0x18a9e4: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x18a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_18a9e8:
    // 0x18a9e8: 0x8c45084c  lw          $a1, 0x84C($v0)
    ctx->pc = 0x18a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_18a9ec:
    // 0x18a9ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18a9f0:
    // 0x18a9f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18a9f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18a9f4:
    // 0x18a9f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18a9f8:
    // 0x18a9f8: 0x40f809  jalr        $v0
label_18a9fc:
    if (ctx->pc == 0x18A9FCu) {
        ctx->pc = 0x18A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F8u;
        // 0x18a9fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA00u;
        goto label_18aa00;
    }
    ctx->pc = 0x18A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AA00u);
        ctx->pc = 0x18A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F8u;
        // 0x18a9fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A9F8u, 0x18AA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18AA00u;
label_18aa00:
    // 0x18aa00: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18aa00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18aa04:
    // 0x18aa04: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_18aa08:
    if (ctx->pc == 0x18AA08u) {
        ctx->pc = 0x18AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA04u;
        // 0x18aa08: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA0Cu;
        goto label_18aa0c;
    }
    ctx->pc = 0x18AA04u;
    {
        const bool branch_taken_0x18aa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA04u;
        // 0x18aa08: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa04) {
            ctx->pc = 0x18A9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a9b8;
        }
    }
    ctx->pc = 0x18AA0Cu;
label_18aa0c:
    // 0x18aa0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18aa0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa10:
    // 0x18aa10: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x18aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_18aa14:
    // 0x18aa14: 0x0  nop
    ctx->pc = 0x18aa14u;
    // NOP
label_18aa18:
    // 0x18aa18: 0xc0e402c  jal         func_3900B0
label_18aa1c:
    if (ctx->pc == 0x18AA1Cu) {
        ctx->pc = 0x18AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA18u;
        // 0x18aa1c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA20u;
        goto label_18aa20;
    }
    ctx->pc = 0x18AA18u;
    SET_GPR_U32(ctx, 31, 0x18AA20u);
    ctx->pc = 0x18AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA18u;
    // 0x18aa1c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x18AA18u, 0x18AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA20u;
label_18aa20:
    // 0x18aa20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_18aa24:
    if (ctx->pc == 0x18AA24u) {
        ctx->pc = 0x18AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA20u;
        // 0x18aa24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA28u;
        goto label_18aa28;
    }
    ctx->pc = 0x18AA20u;
    {
        const bool branch_taken_0x18aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa20) {
            ctx->pc = 0x18AA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AA20u;
            // 0x18aa24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AA34u;
            goto label_18aa34;
        }
    }
    ctx->pc = 0x18AA28u;
label_18aa28:
    // 0x18aa28: 0xc08f598  jal         func_23D660
label_18aa2c:
    if (ctx->pc == 0x18AA2Cu) {
        ctx->pc = 0x18AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA28u;
        // 0x18aa2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA30u;
        goto label_18aa30;
    }
    ctx->pc = 0x18AA28u;
    SET_GPR_U32(ctx, 31, 0x18AA30u);
    ctx->pc = 0x18AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA28u;
    // 0x18aa2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D660u, 0x18AA28u, 0x18AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA30u;
label_18aa30:
    // 0x18aa30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18aa34:
    // 0x18aa34: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x18aa34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
label_18aa38:
    // 0x18aa38: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_18aa3c:
    if (ctx->pc == 0x18AA3Cu) {
        ctx->pc = 0x18AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA38u;
        // 0x18aa3c: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA40u;
        goto label_18aa40;
    }
    ctx->pc = 0x18AA38u;
    {
        const bool branch_taken_0x18aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aa38) {
            ctx->pc = 0x18AA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AA38u;
            // 0x18aa3c: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aa18;
        }
    }
    ctx->pc = 0x18AA40u;
label_18aa40:
    // 0x18aa40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18aa40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa44:
    // 0x18aa44: 0x1000000b  b           . + 4 + (0xB << 2)
label_18aa48:
    if (ctx->pc == 0x18AA48u) {
        ctx->pc = 0x18AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA44u;
        // 0x18aa48: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA4Cu;
        goto label_18aa4c;
    }
    ctx->pc = 0x18AA44u;
    {
        const bool branch_taken_0x18aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA44u;
        // 0x18aa48: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa44) {
            ctx->pc = 0x18AA74u;
            goto label_18aa74;
        }
    }
    ctx->pc = 0x18AA4Cu;
label_18aa4c:
    // 0x18aa4c: 0x0  nop
    ctx->pc = 0x18aa4cu;
    // NOP
label_18aa50:
    // 0x18aa50: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x18aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_18aa54:
    // 0x18aa54: 0x8ca20840  lw          $v0, 0x840($a1)
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_18aa58:
    // 0x18aa58: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18aa5c:
    // 0x18aa5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18aa60:
    // 0x18aa60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18aa64:
    // 0x18aa64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18aa68:
    if (ctx->pc == 0x18AA68u) {
        ctx->pc = 0x18AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA64u;
        // 0x18aa68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA6Cu;
        goto label_18aa6c;
    }
    ctx->pc = 0x18AA64u;
    {
        const bool branch_taken_0x18aa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA64u;
        // 0x18aa68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa64) {
            ctx->pc = 0x18AA74u;
            goto label_18aa74;
        }
    }
    ctx->pc = 0x18AA6Cu;
label_18aa6c:
    // 0x18aa6c: 0xc0e55b0  jal         func_3956C0
label_18aa70:
    if (ctx->pc == 0x18AA70u) {
        ctx->pc = 0x18AA74u;
        goto label_18aa74;
    }
    ctx->pc = 0x18AA6Cu;
    SET_GPR_U32(ctx, 31, 0x18AA74u);
    ctx->pc = 0x3956C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3956C0u, 0x18AA6Cu, 0x18AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA74u;
label_18aa74:
    // 0x18aa74: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x18aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_18aa78:
    // 0x18aa78: 0x8c450840  lw          $a1, 0x840($v0)
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_18aa7c:
    // 0x18aa7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18aa80:
    // 0x18aa80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18aa84:
    // 0x18aa84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18aa88:
    // 0x18aa88: 0x40f809  jalr        $v0
label_18aa8c:
    if (ctx->pc == 0x18AA8Cu) {
        ctx->pc = 0x18AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA88u;
        // 0x18aa8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA90u;
        goto label_18aa90;
    }
    ctx->pc = 0x18AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AA90u);
        ctx->pc = 0x18AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA88u;
        // 0x18aa8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA88u, 0x18AA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18AA90u;
label_18aa90:
    // 0x18aa90: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18aa90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18aa94:
    // 0x18aa94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_18aa98:
    if (ctx->pc == 0x18AA98u) {
        ctx->pc = 0x18AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA94u;
        // 0x18aa98: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA9Cu;
        goto label_18aa9c;
    }
    ctx->pc = 0x18AA94u;
    {
        const bool branch_taken_0x18aa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA94u;
        // 0x18aa98: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa94) {
            ctx->pc = 0x18AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aa50;
        }
    }
    ctx->pc = 0x18AA9Cu;
label_18aa9c:
    // 0x18aa9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18aa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aaa0:
    // 0x18aaa0: 0x1000000a  b           . + 4 + (0xA << 2)
label_18aaa4:
    if (ctx->pc == 0x18AAA4u) {
        ctx->pc = 0x18AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA0u;
        // 0x18aaa4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAA8u;
        goto label_18aaa8;
    }
    ctx->pc = 0x18AAA0u;
    {
        const bool branch_taken_0x18aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA0u;
        // 0x18aaa4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aaa0) {
            ctx->pc = 0x18AACCu;
            goto label_18aacc;
        }
    }
    ctx->pc = 0x18AAA8u;
label_18aaa8:
    // 0x18aaa8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x18aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_18aaac:
    // 0x18aaac: 0x8ca20844  lw          $v0, 0x844($a1)
    ctx->pc = 0x18aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2116)));
label_18aab0:
    // 0x18aab0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18aab4:
    // 0x18aab4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18aab8:
    // 0x18aab8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18aabc:
    // 0x18aabc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18aac0:
    if (ctx->pc == 0x18AAC0u) {
        ctx->pc = 0x18AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AABCu;
        // 0x18aac0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAC4u;
        goto label_18aac4;
    }
    ctx->pc = 0x18AABCu;
    {
        const bool branch_taken_0x18aabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AABCu;
        // 0x18aac0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aabc) {
            ctx->pc = 0x18AACCu;
            goto label_18aacc;
        }
    }
    ctx->pc = 0x18AAC4u;
label_18aac4:
    // 0x18aac4: 0xc0e2634  jal         func_3898D0
label_18aac8:
    if (ctx->pc == 0x18AAC8u) {
        ctx->pc = 0x18AACCu;
        goto label_18aacc;
    }
    ctx->pc = 0x18AAC4u;
    SET_GPR_U32(ctx, 31, 0x18AACCu);
    ctx->pc = 0x3898D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898D0u, 0x18AAC4u, 0x18AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AACCu;
label_18aacc:
    // 0x18aacc: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_18aad0:
    // 0x18aad0: 0x8c450844  lw          $a1, 0x844($v0)
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
label_18aad4:
    // 0x18aad4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18aad8:
    // 0x18aad8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18aadc:
    // 0x18aadc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18aae0:
    // 0x18aae0: 0x40f809  jalr        $v0
label_18aae4:
    if (ctx->pc == 0x18AAE4u) {
        ctx->pc = 0x18AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE0u;
        // 0x18aae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAE8u;
        goto label_18aae8;
    }
    ctx->pc = 0x18AAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AAE8u);
        ctx->pc = 0x18AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE0u;
        // 0x18aae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AAE0u, 0x18AAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18AAE8u;
label_18aae8:
    // 0x18aae8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18aae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18aaec:
    // 0x18aaec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_18aaf0:
    if (ctx->pc == 0x18AAF0u) {
        ctx->pc = 0x18AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAECu;
        // 0x18aaf0: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAF4u;
        goto label_18aaf4;
    }
    ctx->pc = 0x18AAECu;
    {
        const bool branch_taken_0x18aaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAECu;
        // 0x18aaf0: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aaec) {
            ctx->pc = 0x18AAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aaa8;
        }
    }
    ctx->pc = 0x18AAF4u;
label_18aaf4:
    // 0x18aaf4: 0xc06181a  jal         func_186068
label_18aaf8:
    if (ctx->pc == 0x18AAF8u) {
        ctx->pc = 0x18AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAF4u;
        // 0x18aaf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAFCu;
        goto label_18aafc;
    }
    ctx->pc = 0x18AAF4u;
    SET_GPR_U32(ctx, 31, 0x18AAFCu);
    ctx->pc = 0x18AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAF4u;
    // 0x18aaf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x18AAF4u, 0x18AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAFCu;
label_18aafc:
    // 0x18aafc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18aafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18ab00:
    // 0x18ab00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ab00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab04:
    // 0x18ab04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18ab04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18ab08:
    // 0x18ab08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ab08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ab0c:
    // 0x18ab0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18ab0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ab10:
    // 0x18ab10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ab14:
    // 0x18ab14: 0x3e00008  jr          $ra
label_18ab18:
    if (ctx->pc == 0x18AB18u) {
        ctx->pc = 0x18AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB14u;
        // 0x18ab18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB1Cu;
        goto label_18ab1c;
    }
    ctx->pc = 0x18AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB14u;
        // 0x18ab18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AB1Cu;
label_18ab1c:
    // 0x18ab1c: 0x0  nop
    ctx->pc = 0x18ab1cu;
    // NOP
    ctx->pc = 0x18ab20u;
}
