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

// Function: sub_0031DD60
// Address: 0x31dd60 - 0x31df90
void sub_0031DD60_0x31dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DD60_0x31dd60");
#endif

    switch (ctx->pc) {
        case 0x31ddc8u: goto label_31ddc8;
        case 0x31de00u: goto label_31de00;
        case 0x31de08u: goto label_31de08;
        case 0x31de10u: goto label_31de10;
        case 0x31de34u: goto label_31de34;
        case 0x31de44u: goto label_31de44;
        case 0x31de58u: goto label_31de58;
        case 0x31de78u: goto label_31de78;
        case 0x31dea8u: goto label_31dea8;
        case 0x31ded4u: goto label_31ded4;
        case 0x31df08u: goto label_31df08;
        default: break;
    }

    ctx->pc = 0x31dd60u;

    // 0x31dd60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31dd64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31dd68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31dd6c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31dd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31dd70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31dd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31dd78: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x31dd7c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31dd80: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31dd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x31dd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31dd88: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31dd88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31dd8c: 0x92420044  lbu         $v0, 0x44($s2)
    ctx->pc = 0x31dd8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x31dd90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31DD90u;
    {
        const bool branch_taken_0x31dd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD90u;
        // 0x31dd94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd90) {
            ctx->pc = 0x31DDB8u;
            goto label_31ddb8;
        }
    }
    ctx->pc = 0x31DD98u;
    // 0x31dd98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31dd9c: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x31dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x31dda0: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x31dda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
    // 0x31dda4: 0x5460006f  bnel        $v1, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x31DDA4u;
    {
        const bool branch_taken_0x31dda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dda4) {
            ctx->pc = 0x31DDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DDA4u;
            // 0x31dda8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF64u;
            goto label_31df64;
        }
    }
    ctx->pc = 0x31DDACu;
    // 0x31ddac: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x31ddacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x31ddb0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DDB0u;
    {
        const bool branch_taken_0x31ddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ddb0) {
            ctx->pc = 0x31DDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DDB0u;
            // 0x31ddb4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DDC0u;
            goto label_31ddc0;
        }
    }
    ctx->pc = 0x31DDB8u;
label_31ddb8:
    // 0x31ddb8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x31DDB8u;
    {
        const bool branch_taken_0x31ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDB8u;
        // 0x31ddbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddb8) {
            ctx->pc = 0x31DF64u;
            goto label_31df64;
        }
    }
    ctx->pc = 0x31DDC0u;
label_31ddc0:
    // 0x31ddc0: 0xc059856  jal         func_166158
    ctx->pc = 0x31DDC0u;
    SET_GPR_U32(ctx, 31, 0x31DDC8u);
    ctx->pc = 0x31DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DDC0u;
    // 0x31ddc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31DDC0u, 0x31DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDC8u;
label_31ddc8:
    // 0x31ddc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ddcc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x31ddccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ddd0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31ddd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x31ddd4: 0x1603005b  bne         $s0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x31DDD4u;
    {
        const bool branch_taken_0x31ddd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x31DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDD4u;
        // 0x31ddd8: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddd4) {
            ctx->pc = 0x31DF44u;
            goto label_31df44;
        }
    }
    ctx->pc = 0x31DDDCu;
    // 0x31dddc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31dde0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x31dde4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31dde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x31dde8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31dde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31ddec: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x31ddf0: 0x24760048  addiu       $s6, $v1, 0x48
    ctx->pc = 0x31ddf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x31ddf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31ddf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ddf8: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x31ddf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
    // 0x31ddfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31de00:
    // 0x31de00: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31DE00u;
    SET_GPR_U32(ctx, 31, 0x31DE08u);
    ctx->pc = 0x31DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE00u;
    // 0x31de04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31DE00u, 0x31DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE08u;
label_31de08:
    // 0x31de08: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31DE08u;
    SET_GPR_U32(ctx, 31, 0x31DE10u);
    ctx->pc = 0x31DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE08u;
    // 0x31de0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31DE08u, 0x31DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE10u;
label_31de10:
    // 0x31de10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31de10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de14: 0x52200042  beql        $s1, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x31DE14u;
    {
        const bool branch_taken_0x31de14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31de14) {
            ctx->pc = 0x31DE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE14u;
            // 0x31de18: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DE1Cu;
    // 0x31de1c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31de1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x31de20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31de20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31de24: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x31DE24u;
    {
        const bool branch_taken_0x31de24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31de24) {
            ctx->pc = 0x31DE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE24u;
            // 0x31de28: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DE2Cu;
    // 0x31de2c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31DE2Cu;
    SET_GPR_U32(ctx, 31, 0x31DE34u);
    ctx->pc = 0x31DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE2Cu;
    // 0x31de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31DE2Cu, 0x31DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE34u;
label_31de34:
    // 0x31de34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31de34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de38: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x31de38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x31de3c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x31DE3Cu;
    SET_GPR_U32(ctx, 31, 0x31DE44u);
    ctx->pc = 0x31DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE3Cu;
    // 0x31de40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31DE3Cu, 0x31DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE44u;
label_31de44:
    // 0x31de44: 0x5c400036  bgtzl       $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x31DE44u;
    {
        const bool branch_taken_0x31de44 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x31de44) {
            ctx->pc = 0x31DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE44u;
            // 0x31de48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DE4Cu;
    // 0x31de4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31de4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de50: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x31DE50u;
    SET_GPR_U32(ctx, 31, 0x31DE58u);
    ctx->pc = 0x31DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE50u;
    // 0x31de54: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31DE50u, 0x31DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE58u;
label_31de58:
    // 0x31de58: 0x5c400031  bgtzl       $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x31DE58u;
    {
        const bool branch_taken_0x31de58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x31de58) {
            ctx->pc = 0x31DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE58u;
            // 0x31de5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DE60u;
    // 0x31de60: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x31de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x31de64: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31DE64u;
    {
        const bool branch_taken_0x31de64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31de64) {
            ctx->pc = 0x31DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE64u;
            // 0x31de68: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DEC0u;
            goto label_31dec0;
        }
    }
    ctx->pc = 0x31DE6Cu;
    // 0x31de6c: 0x26a4b8a0  addiu       $a0, $s5, -0x4760
    ctx->pc = 0x31de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949024));
    // 0x31de70: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x31DE70u;
    SET_GPR_U32(ctx, 31, 0x31DE78u);
    ctx->pc = 0x31DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE70u;
    // 0x31de74: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31DE70u, 0x31DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE78u;
label_31de78:
    // 0x31de78: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31de78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x31de7c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31DE7Cu;
    {
        const bool branch_taken_0x31de7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE7Cu;
        // 0x31de80: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de7c) {
            ctx->pc = 0x31DEC0u;
            goto label_31dec0;
        }
    }
    ctx->pc = 0x31DE84u;
    // 0x31de84: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x31DE84u;
    {
        const bool branch_taken_0x31de84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31de84) {
            ctx->pc = 0x31DE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE84u;
            // 0x31de88: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF1Cu;
            goto label_31df1c;
        }
    }
    ctx->pc = 0x31DE8Cu;
    // 0x31de8c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31de8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x31de90: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x31de90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x31de94: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31de94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31de98: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31de98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x31de9c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x31de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x31dea0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x31DEA0u;
    SET_GPR_U32(ctx, 31, 0x31DEA8u);
    ctx->pc = 0x31DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEA0u;
    // 0x31dea4: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31DEA0u, 0x31DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEA8u;
label_31dea8:
    // 0x31dea8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31dea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31deac: 0x0  nop
    ctx->pc = 0x31deacu;
    // NOP
    // 0x31deb0: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x31DEB0u;
    {
        const bool branch_taken_0x31deb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31deb0) {
            ctx->pc = 0x31DEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DEB0u;
            // 0x31deb4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DEB8u;
    // 0x31deb8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31DEB8u;
    {
        const bool branch_taken_0x31deb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEB8u;
        // 0x31debc: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31deb8) {
            ctx->pc = 0x31DF1Cu;
            goto label_31df1c;
        }
    }
    ctx->pc = 0x31DEC0u;
label_31dec0:
    // 0x31dec0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x31DEC0u;
    {
        const bool branch_taken_0x31dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dec0) {
            ctx->pc = 0x31DEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DEC0u;
            // 0x31dec4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DEC8u;
    // 0x31dec8: 0x26a4b8a0  addiu       $a0, $s5, -0x4760
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949024));
    // 0x31decc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x31DECCu;
    SET_GPR_U32(ctx, 31, 0x31DED4u);
    ctx->pc = 0x31DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DECCu;
    // 0x31ded0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31DECCu, 0x31DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DED4u;
label_31ded4:
    // 0x31ded4: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31ded4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x31ded8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x31DED8u;
    {
        const bool branch_taken_0x31ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ded8) {
            ctx->pc = 0x31DEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DED8u;
            // 0x31dedc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DEE0u;
    // 0x31dee0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x31dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x31dee4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x31DEE4u;
    {
        const bool branch_taken_0x31dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dee4) {
            ctx->pc = 0x31DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DEE4u;
            // 0x31dee8: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF1Cu;
            goto label_31df1c;
        }
    }
    ctx->pc = 0x31DEECu;
    // 0x31deec: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31deecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x31def0: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x31def0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x31def4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31def4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31def8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31def8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x31defc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x31defcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x31df00: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x31DF00u;
    SET_GPR_U32(ctx, 31, 0x31DF08u);
    ctx->pc = 0x31DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF00u;
    // 0x31df04: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31DF00u, 0x31DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF08u;
label_31df08:
    // 0x31df08: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31df08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31df0c: 0x0  nop
    ctx->pc = 0x31df0cu;
    // NOP
    // 0x31df10: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x31DF10u;
    {
        const bool branch_taken_0x31df10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31df10) {
            ctx->pc = 0x31DF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DF10u;
            // 0x31df14: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF20u;
            goto label_31df20;
        }
    }
    ctx->pc = 0x31DF18u;
    // 0x31df18: 0xae510040  sw          $s1, 0x40($s2)
    ctx->pc = 0x31df18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
label_31df1c:
    // 0x31df1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31df1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31df20:
    // 0x31df20: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31df20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31df24: 0x5440ffb6  bnel        $v0, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x31DF24u;
    {
        const bool branch_taken_0x31df24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31df24) {
            ctx->pc = 0x31DF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DF24u;
            // 0x31df28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31de00;
        }
    }
    ctx->pc = 0x31DF2Cu;
    // 0x31df2c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x31df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x31df30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DF30u;
    {
        const bool branch_taken_0x31df30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF30u;
        // 0x31df34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df30) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DF38u;
    // 0x31df38: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x31df3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31DF3Cu;
    {
        const bool branch_taken_0x31df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF3Cu;
        // 0x31df40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df3c) {
            ctx->pc = 0x31DF64u;
            goto label_31df64;
        }
    }
    ctx->pc = 0x31DF44u;
label_31df44:
    // 0x31df44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31df48:
    // 0x31df48: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x31df48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x31df4c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x31df50: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x31df50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x31df54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31df54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df58: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31df5c: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x31df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x31df60: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x31df60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_31df64:
    // 0x31df64: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31df64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31df68: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31df68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31df6c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31df6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31df70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31df70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31df74: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31df74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31df78: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31df78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31df7c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31df7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31df80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31df80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31df84: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x31df84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31df88: 0x3e00008  jr          $ra
    ctx->pc = 0x31DF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF88u;
        // 0x31df8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DF90u;
}
