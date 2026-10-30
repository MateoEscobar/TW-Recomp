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

// Function: sub_0037A968
// Address: 0x37a968 - 0x37aaf8
void sub_0037A968_0x37a968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A968_0x37a968");
#endif

    switch (ctx->pc) {
        case 0x37a998u: goto label_37a998;
        case 0x37a9b0u: goto label_37a9b0;
        case 0x37a9c8u: goto label_37a9c8;
        case 0x37a9e0u: goto label_37a9e0;
        case 0x37a9f4u: goto label_37a9f4;
        case 0x37aa04u: goto label_37aa04;
        case 0x37aa18u: goto label_37aa18;
        case 0x37aa28u: goto label_37aa28;
        case 0x37aa40u: goto label_37aa40;
        case 0x37aa48u: goto label_37aa48;
        case 0x37aa5cu: goto label_37aa5c;
        case 0x37aa64u: goto label_37aa64;
        case 0x37aa7cu: goto label_37aa7c;
        case 0x37aa84u: goto label_37aa84;
        case 0x37aa98u: goto label_37aa98;
        case 0x37aaacu: goto label_37aaac;
        case 0x37aac4u: goto label_37aac4;
        case 0x37aad4u: goto label_37aad4;
        default: break;
    }

    ctx->pc = 0x37a968u;

    // 0x37a968: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37a968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37a96c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a970: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x37a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x37a974: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37a974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a978: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37a978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a97c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37a980: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37a984: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37a984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37a988: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x37a98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a990: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37A990u;
    SET_GPR_U32(ctx, 31, 0x37A998u);
    ctx->pc = 0x37A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A990u;
    // 0x37a994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37A990u, 0x37A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A998u;
label_37a998:
    // 0x37a998: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x37A998u;
    {
        const bool branch_taken_0x37a998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A998u;
        // 0x37a99c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a998) {
            ctx->pc = 0x37AACCu;
            goto label_37aacc;
        }
    }
    ctx->pc = 0x37A9A0u;
    // 0x37a9a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a9a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a9a8: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37A9A8u;
    SET_GPR_U32(ctx, 31, 0x37A9B0u);
    ctx->pc = 0x37A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9A8u;
    // 0x37a9ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37A9A8u, 0x37A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A9B0u;
label_37a9b0:
    // 0x37a9b0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x37A9B0u;
    {
        const bool branch_taken_0x37a9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9B0u;
        // 0x37a9b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a9b0) {
            ctx->pc = 0x37AACCu;
            goto label_37aacc;
        }
    }
    ctx->pc = 0x37A9B8u;
    // 0x37a9b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a9bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a9c0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37A9C0u;
    SET_GPR_U32(ctx, 31, 0x37A9C8u);
    ctx->pc = 0x37A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9C0u;
    // 0x37a9c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37A9C0u, 0x37A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A9C8u;
label_37a9c8:
    // 0x37a9c8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x37A9C8u;
    {
        const bool branch_taken_0x37a9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9C8u;
        // 0x37a9cc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a9c8) {
            ctx->pc = 0x37AACCu;
            goto label_37aacc;
        }
    }
    ctx->pc = 0x37A9D0u;
    // 0x37a9d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a9d4: 0x24509290  addiu       $s0, $v0, -0x6D70
    ctx->pc = 0x37a9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x37a9d8: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x37A9D8u;
    SET_GPR_U32(ctx, 31, 0x37A9E0u);
    ctx->pc = 0x37A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9D8u;
    // 0x37a9dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x37A9D8u, 0x37A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A9E0u;
label_37a9e0:
    // 0x37a9e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37a9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a9e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a9e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a9ec: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37A9ECu;
    SET_GPR_U32(ctx, 31, 0x37A9F4u);
    ctx->pc = 0x37A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9ECu;
    // 0x37a9f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37A9ECu, 0x37A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A9F4u;
label_37a9f4:
    // 0x37a9f4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x37A9F4u;
    {
        const bool branch_taken_0x37a9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9F4u;
        // 0x37a9f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a9f4) {
            ctx->pc = 0x37AACCu;
            goto label_37aacc;
        }
    }
    ctx->pc = 0x37A9FCu;
    // 0x37a9fc: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x37A9FCu;
    SET_GPR_U32(ctx, 31, 0x37AA04u);
    ctx->pc = 0x37AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9FCu;
    // 0x37aa00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x37A9FCu, 0x37AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA04u;
label_37aa04:
    // 0x37aa04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37aa04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37aa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa0c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37aa10: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37AA10u;
    SET_GPR_U32(ctx, 31, 0x37AA18u);
    ctx->pc = 0x37AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA10u;
    // 0x37aa14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37AA10u, 0x37AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA18u;
label_37aa18:
    // 0x37aa18: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x37AA18u;
    {
        const bool branch_taken_0x37aa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA18u;
        // 0x37aa1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa18) {
            ctx->pc = 0x37AACCu;
            goto label_37aacc;
        }
    }
    ctx->pc = 0x37AA20u;
    // 0x37aa20: 0xc10314e  jal         func_40C538
    ctx->pc = 0x37AA20u;
    SET_GPR_U32(ctx, 31, 0x37AA28u);
    ctx->pc = 0x37AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA20u;
    // 0x37aa24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x37AA20u, 0x37AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA28u;
label_37aa28:
    // 0x37aa28: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x37AA28u;
    {
        const bool branch_taken_0x37aa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA28u;
        // 0x37aa2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa28) {
            ctx->pc = 0x37AACCu;
            goto label_37aacc;
        }
    }
    ctx->pc = 0x37AA30u;
    // 0x37aa30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37aa34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AA38u;
    SET_GPR_U32(ctx, 31, 0x37AA40u);
    ctx->pc = 0x37AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA38u;
    // 0x37aa3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AA38u, 0x37AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA40u;
label_37aa40:
    // 0x37aa40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37AA40u;
    SET_GPR_U32(ctx, 31, 0x37AA48u);
    ctx->pc = 0x37AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA40u;
    // 0x37aa44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37AA40u, 0x37AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA48u;
label_37aa48:
    // 0x37aa48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37aa50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37aa50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AA54u;
    SET_GPR_U32(ctx, 31, 0x37AA5Cu);
    ctx->pc = 0x37AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA54u;
    // 0x37aa58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AA54u, 0x37AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA5Cu;
label_37aa5c:
    // 0x37aa5c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37AA5Cu;
    SET_GPR_U32(ctx, 31, 0x37AA64u);
    ctx->pc = 0x37AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA5Cu;
    // 0x37aa60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37AA5Cu, 0x37AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA64u;
label_37aa64:
    // 0x37aa64: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x37aa64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37aa68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aa70: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x37aa70u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x37aa74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AA74u;
    SET_GPR_U32(ctx, 31, 0x37AA7Cu);
    ctx->pc = 0x37AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA74u;
    // 0x37aa78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AA74u, 0x37AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA7Cu;
label_37aa7c:
    // 0x37aa7c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37AA7Cu;
    SET_GPR_U32(ctx, 31, 0x37AA84u);
    ctx->pc = 0x37AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA7Cu;
    // 0x37aa80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37AA7Cu, 0x37AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA84u;
label_37aa84:
    // 0x37aa84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37aa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37aa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37aa90: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37AA90u;
    SET_GPR_U32(ctx, 31, 0x37AA98u);
    ctx->pc = 0x37AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA90u;
    // 0x37aa94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37AA90u, 0x37AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA98u;
label_37aa98:
    // 0x37aa98: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x37aa98u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37aa9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aaa0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37aaa4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37AAA4u;
    SET_GPR_U32(ctx, 31, 0x37AAACu);
    ctx->pc = 0x37AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AAA4u;
    // 0x37aaa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37AAA4u, 0x37AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AAACu;
label_37aaac:
    // 0x37aaac: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x37aaacu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37aab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aab8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37aab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aabc: 0xc0a9e32  jal         func_2A78C8
    ctx->pc = 0x37AABCu;
    SET_GPR_U32(ctx, 31, 0x37AAC4u);
    ctx->pc = 0x37AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AABCu;
    // 0x37aac0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A78C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A78C8u, 0x37AABCu, 0x37AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AAC4u;
label_37aac4:
    // 0x37aac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37AAC4u;
    {
        const bool branch_taken_0x37aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAC4u;
        // 0x37aac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aac4) {
            ctx->pc = 0x37AAD4u;
            goto label_37aad4;
        }
    }
    ctx->pc = 0x37AACCu;
label_37aacc:
    // 0x37aacc: 0xc0dea34  jal         func_37A8D0
    ctx->pc = 0x37AACCu;
    SET_GPR_U32(ctx, 31, 0x37AAD4u);
    ctx->pc = 0x37AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AACCu;
    // 0x37aad0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A8D0u, 0x37AACCu, 0x37AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AAD4u;
label_37aad4:
    // 0x37aad4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37aad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37aad8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37aad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37aadc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37aadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37aae0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37aae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37aae4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x37aae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37aae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37aaec: 0x3e00008  jr          $ra
    ctx->pc = 0x37AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAECu;
        // 0x37aaf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AAF4u;
    // 0x37aaf4: 0x0  nop
    ctx->pc = 0x37aaf4u;
    // NOP
    ctx->pc = 0x37aaf8u;
}
