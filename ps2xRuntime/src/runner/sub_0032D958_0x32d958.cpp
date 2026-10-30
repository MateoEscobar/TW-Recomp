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

// Function: sub_0032D958
// Address: 0x32d958 - 0x32da68
void sub_0032D958_0x32d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D958_0x32d958");
#endif

    switch (ctx->pc) {
        case 0x32d9ccu: goto label_32d9cc;
        case 0x32d9e4u: goto label_32d9e4;
        case 0x32d9f8u: goto label_32d9f8;
        case 0x32da08u: goto label_32da08;
        case 0x32da1cu: goto label_32da1c;
        case 0x32da24u: goto label_32da24;
        case 0x32da34u: goto label_32da34;
        case 0x32da4cu: goto label_32da4c;
        default: break;
    }

    ctx->pc = 0x32d958u;

    // 0x32d958: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32d958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32d95c: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x32d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x32d960: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32d964: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32d968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d96c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32d970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d978: 0x8e120028  lw          $s2, 0x28($s0)
    ctx->pc = 0x32d978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32d97c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32d980: 0x8642001c  lh          $v0, 0x1C($s2)
    ctx->pc = 0x32d980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x32d984: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x32d984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32d988: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x32D988u;
    {
        const bool branch_taken_0x32d988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D988u;
        // 0x32d98c: 0x2453ffff  addiu       $s3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d988) {
            ctx->pc = 0x32DA00u;
            goto label_32da00;
        }
    }
    ctx->pc = 0x32D990u;
    // 0x32d990: 0x2882007c  slti        $v0, $a0, 0x7C
    ctx->pc = 0x32d990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)124) ? 1 : 0);
    // 0x32d994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D994u;
    {
        const bool branch_taken_0x32d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D994u;
        // 0x32d998: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d994) {
            ctx->pc = 0x32D9ACu;
            goto label_32d9ac;
        }
    }
    ctx->pc = 0x32D99Cu;
    // 0x32d99c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32D99Cu;
    {
        const bool branch_taken_0x32d99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D99Cu;
        // 0x32d9a0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d99c) {
            ctx->pc = 0x32D9C0u;
            goto label_32d9c0;
        }
    }
    ctx->pc = 0x32D9A4u;
    // 0x32d9a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x32D9A4u;
    {
        const bool branch_taken_0x32d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9A4u;
        // 0x32d9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9a4) {
            ctx->pc = 0x32DA2Cu;
            goto label_32da2c;
        }
    }
    ctx->pc = 0x32D9ACu;
label_32d9ac:
    // 0x32d9ac: 0x2402011b  addiu       $v0, $zero, 0x11B
    ctx->pc = 0x32d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    // 0x32d9b0: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32D9B0u;
    {
        const bool branch_taken_0x32d9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9B0u;
        // 0x32d9b4: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9b0) {
            ctx->pc = 0x32DA10u;
            goto label_32da10;
        }
    }
    ctx->pc = 0x32D9B8u;
    // 0x32d9b8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x32D9B8u;
    {
        const bool branch_taken_0x32d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9B8u;
        // 0x32d9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9b8) {
            ctx->pc = 0x32DA2Cu;
            goto label_32da2c;
        }
    }
    ctx->pc = 0x32D9C0u;
label_32d9c0:
    // 0x32d9c0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x32d9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32d9c4: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32D9C4u;
    SET_GPR_U32(ctx, 31, 0x32D9CCu);
    ctx->pc = 0x32D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9C4u;
    // 0x32d9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32D9C4u, 0x32D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9CCu;
label_32d9cc:
    // 0x32d9cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32d9d0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x32d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32d9d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D9D4u;
    {
        const bool branch_taken_0x32d9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9D4u;
        // 0x32d9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9d4) {
            ctx->pc = 0x32D9E8u;
            goto label_32d9e8;
        }
    }
    ctx->pc = 0x32D9DCu;
    // 0x32d9dc: 0xc0cb62e  jal         func_32D8B8
    ctx->pc = 0x32D9DCu;
    SET_GPR_U32(ctx, 31, 0x32D9E4u);
    ctx->pc = 0x32D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9DCu;
    // 0x32d9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8B8u, 0x32D9DCu, 0x32D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9E4u;
label_32d9e4:
    // 0x32d9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d9e8:
    // 0x32d9e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32d9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d9ec: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x32d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32d9f0: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32D9F0u;
    SET_GPR_U32(ctx, 31, 0x32D9F8u);
    ctx->pc = 0x32D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9F0u;
    // 0x32d9f4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32D9F0u, 0x32D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9F8u;
label_32d9f8:
    // 0x32d9f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32D9F8u;
    {
        const bool branch_taken_0x32d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9F8u;
        // 0x32d9fc: 0xa653001c  sh          $s3, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9f8) {
            ctx->pc = 0x32DA38u;
            goto label_32da38;
        }
    }
    ctx->pc = 0x32DA00u;
label_32da00:
    // 0x32da00: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x32DA00u;
    SET_GPR_U32(ctx, 31, 0x32DA08u);
    ctx->pc = 0x32DA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA00u;
    // 0x32da04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x32DA00u, 0x32DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA08u;
label_32da08:
    // 0x32da08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32DA08u;
    {
        const bool branch_taken_0x32da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA08u;
        // 0x32da0c: 0xa653001c  sh          $s3, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da08) {
            ctx->pc = 0x32DA38u;
            goto label_32da38;
        }
    }
    ctx->pc = 0x32DA10u;
label_32da10:
    // 0x32da10: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x32da10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32da14: 0xc0cb3ae  jal         func_32CEB8
    ctx->pc = 0x32DA14u;
    SET_GPR_U32(ctx, 31, 0x32DA1Cu);
    ctx->pc = 0x32DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA14u;
    // 0x32da18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEB8u, 0x32DA14u, 0x32DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA1Cu;
label_32da1c:
    // 0x32da1c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DA1Cu;
    SET_GPR_U32(ctx, 31, 0x32DA24u);
    ctx->pc = 0x32DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA1Cu;
    // 0x32da20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DA1Cu, 0x32DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA24u;
label_32da24:
    // 0x32da24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32DA24u;
    {
        const bool branch_taken_0x32da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA24u;
        // 0x32da28: 0xa653001c  sh          $s3, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da24) {
            ctx->pc = 0x32DA38u;
            goto label_32da38;
        }
    }
    ctx->pc = 0x32DA2Cu;
label_32da2c:
    // 0x32da2c: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32DA2Cu;
    SET_GPR_U32(ctx, 31, 0x32DA34u);
    ctx->pc = 0x32DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA2Cu;
    // 0x32da30: 0x24a55d18  addiu       $a1, $a1, 0x5D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32DA2Cu, 0x32DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA34u;
label_32da34:
    // 0x32da34: 0xa653001c  sh          $s3, 0x1C($s2)
    ctx->pc = 0x32da34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
label_32da38:
    // 0x32da38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32da38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32da3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32da44: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x32DA44u;
    SET_GPR_U32(ctx, 31, 0x32DA4Cu);
    ctx->pc = 0x32DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA44u;
    // 0x32da48: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x32DA44u, 0x32DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA4Cu;
label_32da4c:
    // 0x32da4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32da4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32da50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32da50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32da54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32da54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32da58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32da58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32da5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32da60: 0x3e00008  jr          $ra
    ctx->pc = 0x32DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA60u;
        // 0x32da64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DA68u;
}
