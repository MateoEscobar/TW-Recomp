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

// Function: sub_0027D900
// Address: 0x27d900 - 0x27da10
void sub_0027D900_0x27d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D900_0x27d900");
#endif

    switch (ctx->pc) {
        case 0x27d928u: goto label_27d928;
        case 0x27d938u: goto label_27d938;
        case 0x27d948u: goto label_27d948;
        case 0x27d95cu: goto label_27d95c;
        case 0x27d970u: goto label_27d970;
        case 0x27d984u: goto label_27d984;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9c0u: goto label_27d9c0;
        case 0x27d9d0u: goto label_27d9d0;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27d9e8u: goto label_27d9e8;
        default: break;
    }

    ctx->pc = 0x27d900u;

    // 0x27d900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d904: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27d904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27d908: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27d908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27d90c: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x27d90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x27d910: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27d910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27d914: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x27d914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x27d918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27d91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d920: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27D920u;
    SET_GPR_U32(ctx, 31, 0x27D928u);
    ctx->pc = 0x27D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D920u;
    // 0x27d924: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27D920u, 0x27D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D928u;
label_27d928:
    // 0x27d928: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27D928u;
    {
        const bool branch_taken_0x27d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D928u;
        // 0x27d92c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d928) {
            ctx->pc = 0x27D9F4u;
            goto label_27d9f4;
        }
    }
    ctx->pc = 0x27D930u;
    // 0x27d930: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27D930u;
    SET_GPR_U32(ctx, 31, 0x27D938u);
    ctx->pc = 0x27D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D930u;
    // 0x27d934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27D930u, 0x27D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D938u;
label_27d938:
    // 0x27d938: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D938u;
    {
        const bool branch_taken_0x27d938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d938) {
            ctx->pc = 0x27D954u;
            goto label_27d954;
        }
    }
    ctx->pc = 0x27D940u;
    // 0x27d940: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D940u;
    SET_GPR_U32(ctx, 31, 0x27D948u);
    ctx->pc = 0x27D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D940u;
    // 0x27d944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D940u, 0x27D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D948u;
label_27d948:
    // 0x27d948: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d94c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27D94Cu;
    {
        const bool branch_taken_0x27d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d94c) {
            ctx->pc = 0x27D97Cu;
            goto label_27d97c;
        }
    }
    ctx->pc = 0x27D954u;
label_27d954:
    // 0x27d954: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D954u;
    SET_GPR_U32(ctx, 31, 0x27D95Cu);
    ctx->pc = 0x27D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D954u;
    // 0x27d958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D954u, 0x27D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D95Cu;
label_27d95c:
    // 0x27d95c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27d960: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D960u;
    {
        const bool branch_taken_0x27d960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d960) {
            ctx->pc = 0x27D97Cu;
            goto label_27d97c;
        }
    }
    ctx->pc = 0x27D968u;
    // 0x27d968: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D968u;
    SET_GPR_U32(ctx, 31, 0x27D970u);
    ctx->pc = 0x27D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D968u;
    // 0x27d96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D968u, 0x27D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D970u;
label_27d970:
    // 0x27d970: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d974: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D974u;
    {
        const bool branch_taken_0x27d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D974u;
        // 0x27d978: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d974) {
            ctx->pc = 0x27D994u;
            goto label_27d994;
        }
    }
    ctx->pc = 0x27D97Cu;
label_27d97c:
    // 0x27d97c: 0xc0a2036  jal         func_2880D8
    ctx->pc = 0x27D97Cu;
    SET_GPR_U32(ctx, 31, 0x27D984u);
    ctx->pc = 0x27D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D97Cu;
    // 0x27d980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2880D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2880D8u, 0x27D97Cu, 0x27D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D984u;
label_27d984:
    // 0x27d984: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27D984u;
    {
        const bool branch_taken_0x27d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D984u;
        // 0x27d988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d984) {
            ctx->pc = 0x27D9F0u;
            goto label_27d9f0;
        }
    }
    ctx->pc = 0x27D98Cu;
    // 0x27d98c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27D98Cu;
    {
        const bool branch_taken_0x27d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D98Cu;
        // 0x27d990: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d98c) {
            ctx->pc = 0x27D9F8u;
            goto label_27d9f8;
        }
    }
    ctx->pc = 0x27D994u;
label_27d994:
    // 0x27d994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d998: 0xc089998  jal         func_226660
    ctx->pc = 0x27D998u;
    SET_GPR_U32(ctx, 31, 0x27D9A0u);
    ctx->pc = 0x27D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D998u;
    // 0x27d99c: 0x34a5001f  ori         $a1, $a1, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D998u, 0x27D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9A0u;
label_27d9a0:
    // 0x27d9a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27D9A0u;
    {
        const bool branch_taken_0x27d9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9A0u;
        // 0x27d9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9a0) {
            ctx->pc = 0x27D9F4u;
            goto label_27d9f4;
        }
    }
    ctx->pc = 0x27D9A8u;
    // 0x27d9a8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27d9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9b0: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x27d9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d9b4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27d9b8: 0xc088e98  jal         func_223A60
    ctx->pc = 0x27D9B8u;
    SET_GPR_U32(ctx, 31, 0x27D9C0u);
    ctx->pc = 0x27D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9B8u;
    // 0x27d9bc: 0xac4000b8  sw          $zero, 0xB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x27D9B8u, 0x27D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9C0u;
label_27d9c0:
    // 0x27d9c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D9C0u;
    {
        const bool branch_taken_0x27d9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d9c0) {
            ctx->pc = 0x27D9D8u;
            goto label_27d9d8;
        }
    }
    ctx->pc = 0x27D9C8u;
    // 0x27d9c8: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x27D9C8u;
    SET_GPR_U32(ctx, 31, 0x27D9D0u);
    ctx->pc = 0x27D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9C8u;
    // 0x27d9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x27D9C8u, 0x27D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9D0u;
label_27d9d0:
    // 0x27d9d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D9D0u;
    {
        const bool branch_taken_0x27d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9D0u;
        // 0x27d9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9d0) {
            ctx->pc = 0x27D9F4u;
            goto label_27d9f4;
        }
    }
    ctx->pc = 0x27D9D8u;
label_27d9d8:
    // 0x27d9d8: 0xc09921e  jal         func_264878
    ctx->pc = 0x27D9D8u;
    SET_GPR_U32(ctx, 31, 0x27D9E0u);
    ctx->pc = 0x27D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9D8u;
    // 0x27d9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264878u, 0x27D9D8u, 0x27D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9E0u;
label_27d9e0:
    // 0x27d9e0: 0xc0a001a  jal         func_280068
    ctx->pc = 0x27D9E0u;
    SET_GPR_U32(ctx, 31, 0x27D9E8u);
    ctx->pc = 0x27D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9E0u;
    // 0x27d9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x27D9E0u, 0x27D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9E8u;
label_27d9e8:
    // 0x27d9e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D9E8u;
    {
        const bool branch_taken_0x27d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9E8u;
        // 0x27d9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9e8) {
            ctx->pc = 0x27D9F4u;
            goto label_27d9f4;
        }
    }
    ctx->pc = 0x27D9F0u;
label_27d9f0:
    // 0x27d9f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d9f4:
    // 0x27d9f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27d9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d9f8:
    // 0x27d9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x27D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9FCu;
        // 0x27da00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DA04u;
    // 0x27da04: 0x0  nop
    ctx->pc = 0x27da04u;
    // NOP
    // 0x27da08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27da0c: 0x0  nop
    ctx->pc = 0x27da0cu;
    // NOP
    ctx->pc = 0x27da10u;
}
