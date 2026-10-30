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

// Function: sub_0041A9C0
// Address: 0x41a9c0 - 0x41ab30
void sub_0041A9C0_0x41a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A9C0_0x41a9c0");
#endif

    switch (ctx->pc) {
        case 0x41a9c0u: goto label_41a9c0;
        case 0x41a9c4u: goto label_41a9c4;
        case 0x41a9c8u: goto label_41a9c8;
        case 0x41a9ccu: goto label_41a9cc;
        case 0x41a9d0u: goto label_41a9d0;
        case 0x41a9d4u: goto label_41a9d4;
        case 0x41a9d8u: goto label_41a9d8;
        case 0x41a9dcu: goto label_41a9dc;
        case 0x41a9e0u: goto label_41a9e0;
        case 0x41a9e4u: goto label_41a9e4;
        case 0x41a9e8u: goto label_41a9e8;
        case 0x41a9ecu: goto label_41a9ec;
        case 0x41a9f0u: goto label_41a9f0;
        case 0x41a9f4u: goto label_41a9f4;
        case 0x41a9f8u: goto label_41a9f8;
        case 0x41a9fcu: goto label_41a9fc;
        case 0x41aa00u: goto label_41aa00;
        case 0x41aa04u: goto label_41aa04;
        case 0x41aa08u: goto label_41aa08;
        case 0x41aa0cu: goto label_41aa0c;
        case 0x41aa10u: goto label_41aa10;
        case 0x41aa14u: goto label_41aa14;
        case 0x41aa18u: goto label_41aa18;
        case 0x41aa1cu: goto label_41aa1c;
        case 0x41aa20u: goto label_41aa20;
        case 0x41aa24u: goto label_41aa24;
        case 0x41aa28u: goto label_41aa28;
        case 0x41aa2cu: goto label_41aa2c;
        case 0x41aa30u: goto label_41aa30;
        case 0x41aa34u: goto label_41aa34;
        case 0x41aa38u: goto label_41aa38;
        case 0x41aa3cu: goto label_41aa3c;
        case 0x41aa40u: goto label_41aa40;
        case 0x41aa44u: goto label_41aa44;
        case 0x41aa48u: goto label_41aa48;
        case 0x41aa4cu: goto label_41aa4c;
        case 0x41aa50u: goto label_41aa50;
        case 0x41aa54u: goto label_41aa54;
        case 0x41aa58u: goto label_41aa58;
        case 0x41aa5cu: goto label_41aa5c;
        case 0x41aa60u: goto label_41aa60;
        case 0x41aa64u: goto label_41aa64;
        case 0x41aa68u: goto label_41aa68;
        case 0x41aa6cu: goto label_41aa6c;
        case 0x41aa70u: goto label_41aa70;
        case 0x41aa74u: goto label_41aa74;
        case 0x41aa78u: goto label_41aa78;
        case 0x41aa7cu: goto label_41aa7c;
        case 0x41aa80u: goto label_41aa80;
        case 0x41aa84u: goto label_41aa84;
        case 0x41aa88u: goto label_41aa88;
        case 0x41aa8cu: goto label_41aa8c;
        case 0x41aa90u: goto label_41aa90;
        case 0x41aa94u: goto label_41aa94;
        case 0x41aa98u: goto label_41aa98;
        case 0x41aa9cu: goto label_41aa9c;
        case 0x41aaa0u: goto label_41aaa0;
        case 0x41aaa4u: goto label_41aaa4;
        case 0x41aaa8u: goto label_41aaa8;
        case 0x41aaacu: goto label_41aaac;
        case 0x41aab0u: goto label_41aab0;
        case 0x41aab4u: goto label_41aab4;
        case 0x41aab8u: goto label_41aab8;
        case 0x41aabcu: goto label_41aabc;
        case 0x41aac0u: goto label_41aac0;
        case 0x41aac4u: goto label_41aac4;
        case 0x41aac8u: goto label_41aac8;
        case 0x41aaccu: goto label_41aacc;
        case 0x41aad0u: goto label_41aad0;
        case 0x41aad4u: goto label_41aad4;
        case 0x41aad8u: goto label_41aad8;
        case 0x41aadcu: goto label_41aadc;
        case 0x41aae0u: goto label_41aae0;
        case 0x41aae4u: goto label_41aae4;
        case 0x41aae8u: goto label_41aae8;
        case 0x41aaecu: goto label_41aaec;
        case 0x41aaf0u: goto label_41aaf0;
        case 0x41aaf4u: goto label_41aaf4;
        case 0x41aaf8u: goto label_41aaf8;
        case 0x41aafcu: goto label_41aafc;
        case 0x41ab00u: goto label_41ab00;
        case 0x41ab04u: goto label_41ab04;
        case 0x41ab08u: goto label_41ab08;
        case 0x41ab0cu: goto label_41ab0c;
        case 0x41ab10u: goto label_41ab10;
        case 0x41ab14u: goto label_41ab14;
        case 0x41ab18u: goto label_41ab18;
        case 0x41ab1cu: goto label_41ab1c;
        case 0x41ab20u: goto label_41ab20;
        case 0x41ab24u: goto label_41ab24;
        case 0x41ab28u: goto label_41ab28;
        case 0x41ab2cu: goto label_41ab2c;
        default: break;
    }

    ctx->pc = 0x41a9c0u;

label_41a9c0:
    // 0x41a9c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x41a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_41a9c4:
    // 0x41a9c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41a9c8:
    // 0x41a9c8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x41a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_41a9cc:
    // 0x41a9cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41a9ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a9d0:
    // 0x41a9d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x41a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_41a9d4:
    // 0x41a9d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41a9d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41a9d8:
    // 0x41a9d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_41a9dc:
    // 0x41a9dc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x41a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_41a9e0:
    // 0x41a9e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_41a9e4:
    // 0x41a9e4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x41a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_41a9e8:
    // 0x41a9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41a9ec:
    // 0x41a9ec: 0xc0e409a  jal         func_390268
label_41a9f0:
    if (ctx->pc == 0x41A9F0u) {
        ctx->pc = 0x41A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9ECu;
        // 0x41a9f0: 0x26840228  addiu       $a0, $s4, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A9F4u;
        goto label_41a9f4;
    }
    ctx->pc = 0x41A9ECu;
    SET_GPR_U32(ctx, 31, 0x41A9F4u);
    ctx->pc = 0x41A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A9ECu;
    // 0x41a9f0: 0x26840228  addiu       $a0, $s4, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A9ECu, 0x41A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A9F4u;
label_41a9f4:
    // 0x41a9f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41a9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a9f8:
    // 0x41a9f8: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_41a9fc:
    if (ctx->pc == 0x41A9FCu) {
        ctx->pc = 0x41A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9F8u;
        // 0x41a9fc: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA00u;
        goto label_41aa00;
    }
    ctx->pc = 0x41A9F8u;
    {
        const bool branch_taken_0x41a9f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9F8u;
        // 0x41a9fc: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a9f8) {
            ctx->pc = 0x41AB04u;
            goto label_41ab04;
        }
    }
    ctx->pc = 0x41AA00u;
label_41aa00:
    // 0x41aa00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x41aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41aa04:
    // 0x41aa04: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x41aa04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41aa08:
    // 0x41aa08: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41aa08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41aa0c:
    // 0x41aa0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41aa10:
    // 0x41aa10: 0x40f809  jalr        $v0
label_41aa14:
    if (ctx->pc == 0x41AA14u) {
        ctx->pc = 0x41AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA10u;
        // 0x41aa14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA18u;
        goto label_41aa18;
    }
    ctx->pc = 0x41AA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AA18u);
        ctx->pc = 0x41AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA10u;
        // 0x41aa14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AA10u, 0x41AA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AA18u;
label_41aa18:
    // 0x41aa18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41aa1c:
    // 0x41aa1c: 0x260491a8  addiu       $a0, $s0, -0x6E58
    ctx->pc = 0x41aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939048));
label_41aa20:
    // 0x41aa20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41aa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41aa24:
    // 0x41aa24: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x41aa24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_41aa28:
    // 0x41aa28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x41aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_41aa2c:
    // 0x41aa2c: 0xc136b7c  jal         func_4DADF0
label_41aa30:
    if (ctx->pc == 0x41AA30u) {
        ctx->pc = 0x41AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA2Cu;
        // 0x41aa30: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA34u;
        goto label_41aa34;
    }
    ctx->pc = 0x41AA2Cu;
    SET_GPR_U32(ctx, 31, 0x41AA34u);
    ctx->pc = 0x41AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AA2Cu;
    // 0x41aa30: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x41AA2Cu, 0x41AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AA34u;
label_41aa34:
    // 0x41aa34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41aa38:
    // 0x41aa38: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x41aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_41aa3c:
    // 0x41aa3c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x41aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_41aa40:
    // 0x41aa40: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x41aa40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_41aa44:
    // 0x41aa44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x41aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_41aa48:
    // 0x41aa48: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x41aa48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_41aa4c:
    // 0x41aa4c: 0x10520010  beq         $v0, $s2, . + 4 + (0x10 << 2)
label_41aa50:
    if (ctx->pc == 0x41AA50u) {
        ctx->pc = 0x41AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA4Cu;
        // 0x41aa50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA54u;
        goto label_41aa54;
    }
    ctx->pc = 0x41AA4Cu;
    {
        const bool branch_taken_0x41aa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x41AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA4Cu;
        // 0x41aa50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa4c) {
            ctx->pc = 0x41AA90u;
            goto label_41aa90;
        }
    }
    ctx->pc = 0x41AA54u;
label_41aa54:
    // 0x41aa54: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x41aa54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_41aa58:
    // 0x41aa58: 0x8e22b194  lw          $v0, -0x4E6C($s1)
    ctx->pc = 0x41aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947220)));
label_41aa5c:
    // 0x41aa5c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x41aa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41aa60:
    // 0x41aa60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41aa64:
    if (ctx->pc == 0x41AA64u) {
        ctx->pc = 0x41AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA60u;
        // 0x41aa64: 0x26c491a8  addiu       $a0, $s6, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA68u;
        goto label_41aa68;
    }
    ctx->pc = 0x41AA60u;
    {
        const bool branch_taken_0x41aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA60u;
        // 0x41aa64: 0x26c491a8  addiu       $a0, $s6, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa60) {
            ctx->pc = 0x41AA7Cu;
            goto label_41aa7c;
        }
    }
    ctx->pc = 0x41AA68u;
label_41aa68:
    // 0x41aa68: 0xc136b7c  jal         func_4DADF0
label_41aa6c:
    if (ctx->pc == 0x41AA6Cu) {
        ctx->pc = 0x41AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA68u;
        // 0x41aa6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA70u;
        goto label_41aa70;
    }
    ctx->pc = 0x41AA68u;
    SET_GPR_U32(ctx, 31, 0x41AA70u);
    ctx->pc = 0x41AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AA68u;
    // 0x41aa6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x41AA68u, 0x41AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AA70u;
label_41aa70:
    // 0x41aa70: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x41aa70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_41aa74:
    // 0x41aa74: 0x5472fff8  bnel        $v1, $s2, . + 4 + (-0x8 << 2)
label_41aa78:
    if (ctx->pc == 0x41AA78u) {
        ctx->pc = 0x41AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA74u;
        // 0x41aa78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA7Cu;
        goto label_41aa7c;
    }
    ctx->pc = 0x41AA74u;
    {
        const bool branch_taken_0x41aa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x41aa74) {
            ctx->pc = 0x41AA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41AA74u;
            // 0x41aa78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41AA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41aa58;
        }
    }
    ctx->pc = 0x41AA7Cu;
label_41aa7c:
    // 0x41aa7c: 0x8e22b194  lw          $v0, -0x4E6C($s1)
    ctx->pc = 0x41aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947220)));
label_41aa80:
    // 0x41aa80: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
label_41aa84:
    if (ctx->pc == 0x41AA84u) {
        ctx->pc = 0x41AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA80u;
        // 0x41aa84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA88u;
        goto label_41aa88;
    }
    ctx->pc = 0x41AA80u;
    {
        const bool branch_taken_0x41aa80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x41AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA80u;
        // 0x41aa84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa80) {
            ctx->pc = 0x41AB04u;
            goto label_41ab04;
        }
    }
    ctx->pc = 0x41AA88u;
label_41aa88:
    // 0x41aa88: 0xc048930  jal         func_1224C0
label_41aa8c:
    if (ctx->pc == 0x41AA8Cu) {
        ctx->pc = 0x41AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA88u;
        // 0x41aa8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA90u;
        goto label_41aa90;
    }
    ctx->pc = 0x41AA88u;
    SET_GPR_U32(ctx, 31, 0x41AA90u);
    ctx->pc = 0x41AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AA88u;
    // 0x41aa8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x41AA88u, 0x41AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AA90u;
label_41aa90:
    // 0x41aa90: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_41aa94:
    if (ctx->pc == 0x41AA94u) {
        ctx->pc = 0x41AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA90u;
        // 0x41aa94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA98u;
        goto label_41aa98;
    }
    ctx->pc = 0x41AA90u;
    {
        const bool branch_taken_0x41aa90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA90u;
        // 0x41aa94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa90) {
            ctx->pc = 0x41AB08u;
            goto label_41ab08;
        }
    }
    ctx->pc = 0x41AA98u;
label_41aa98:
    // 0x41aa98: 0x82a201b0  lb          $v0, 0x1B0($s5)
    ctx->pc = 0x41aa98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 432)));
label_41aa9c:
    // 0x41aa9c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41aa9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_41aaa0:
    // 0x41aaa0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_41aaa4:
    if (ctx->pc == 0x41AAA4u) {
        ctx->pc = 0x41AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAA0u;
        // 0x41aaa4: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AAA8u;
        goto label_41aaa8;
    }
    ctx->pc = 0x41AAA0u;
    {
        const bool branch_taken_0x41aaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAA0u;
        // 0x41aaa4: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aaa0) {
            ctx->pc = 0x41AB0Cu;
            goto label_41ab0c;
        }
    }
    ctx->pc = 0x41AAA8u;
label_41aaa8:
    // 0x41aaa8: 0xc0874fa  jal         func_21D3E8
label_41aaac:
    if (ctx->pc == 0x41AAACu) {
        ctx->pc = 0x41AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAA8u;
        // 0x41aaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AAB0u;
        goto label_41aab0;
    }
    ctx->pc = 0x41AAA8u;
    SET_GPR_U32(ctx, 31, 0x41AAB0u);
    ctx->pc = 0x41AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AAA8u;
    // 0x41aaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41AAA8u, 0x41AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AAB0u;
label_41aab0:
    // 0x41aab0: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x41aab0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41aab4:
    // 0x41aab4: 0x96820456  lhu         $v0, 0x456($s4)
    ctx->pc = 0x41aab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1110)));
label_41aab8:
    // 0x41aab8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x41aab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_41aabc:
    // 0x41aabc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41aac0:
    // 0x41aac0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_41aac4:
    if (ctx->pc == 0x41AAC4u) {
        ctx->pc = 0x41AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAC0u;
        // 0x41aac4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AAC8u;
        goto label_41aac8;
    }
    ctx->pc = 0x41AAC0u;
    {
        const bool branch_taken_0x41aac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAC0u;
        // 0x41aac4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aac0) {
            ctx->pc = 0x41AB04u;
            goto label_41ab04;
        }
    }
    ctx->pc = 0x41AAC8u;
label_41aac8:
    // 0x41aac8: 0xc0874fa  jal         func_21D3E8
label_41aacc:
    if (ctx->pc == 0x41AACCu) {
        ctx->pc = 0x41AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAC8u;
        // 0x41aacc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AAD0u;
        goto label_41aad0;
    }
    ctx->pc = 0x41AAC8u;
    SET_GPR_U32(ctx, 31, 0x41AAD0u);
    ctx->pc = 0x41AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AAC8u;
    // 0x41aacc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41AAC8u, 0x41AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AAD0u;
label_41aad0:
    // 0x41aad0: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x41aad0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41aad4:
    // 0x41aad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41aad8:
    // 0x41aad8: 0x96820456  lhu         $v0, 0x456($s4)
    ctx->pc = 0x41aad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1110)));
label_41aadc:
    // 0x41aadc: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x41aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_41aae0:
    // 0x41aae0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x41aae0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_41aae4:
    // 0x41aae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x41aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_41aae8:
    // 0x41aae8: 0xc0874fa  jal         func_21D3E8
label_41aaec:
    if (ctx->pc == 0x41AAECu) {
        ctx->pc = 0x41AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAE8u;
        // 0x41aaec: 0xa6820456  sh          $v0, 0x456($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 1110), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AAF0u;
        goto label_41aaf0;
    }
    ctx->pc = 0x41AAE8u;
    SET_GPR_U32(ctx, 31, 0x41AAF0u);
    ctx->pc = 0x41AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AAE8u;
    // 0x41aaec: 0xa6820456  sh          $v0, 0x456($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 1110), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41AAE8u, 0x41AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AAF0u;
label_41aaf0:
    // 0x41aaf0: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x41aaf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41aaf4:
    // 0x41aaf4: 0x96820456  lhu         $v0, 0x456($s4)
    ctx->pc = 0x41aaf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1110)));
label_41aaf8:
    // 0x41aaf8: 0x708004  sllv        $s0, $s0, $v1
    ctx->pc = 0x41aaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_41aafc:
    // 0x41aafc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x41aafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_41ab00:
    // 0x41ab00: 0xa6820456  sh          $v0, 0x456($s4)
    ctx->pc = 0x41ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1110), (uint16_t)GPR_U32(ctx, 2));
label_41ab04:
    // 0x41ab04: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41ab04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41ab08:
    // 0x41ab08: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41ab08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41ab0c:
    // 0x41ab0c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41ab0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41ab10:
    // 0x41ab10: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x41ab10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41ab14:
    // 0x41ab14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41ab14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41ab18:
    // 0x41ab18: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x41ab18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41ab1c:
    // 0x41ab1c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41ab1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41ab20:
    // 0x41ab20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41ab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41ab24:
    // 0x41ab24: 0x3e00008  jr          $ra
label_41ab28:
    if (ctx->pc == 0x41AB28u) {
        ctx->pc = 0x41AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AB24u;
        // 0x41ab28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AB2Cu;
        goto label_41ab2c;
    }
    ctx->pc = 0x41AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AB24u;
        // 0x41ab28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AB2Cu;
label_41ab2c:
    // 0x41ab2c: 0x0  nop
    ctx->pc = 0x41ab2cu;
    // NOP
    ctx->pc = 0x41ab30u;
}
