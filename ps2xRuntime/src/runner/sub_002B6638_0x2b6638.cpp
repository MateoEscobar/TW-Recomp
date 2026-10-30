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

// Function: sub_002B6638
// Address: 0x2b6638 - 0x2b6818
void sub_002B6638_0x2b6638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6638_0x2b6638");
#endif

    switch (ctx->pc) {
        case 0x2b6668u: goto label_2b6668;
        case 0x2b6670u: goto label_2b6670;
        case 0x2b6680u: goto label_2b6680;
        case 0x2b6690u: goto label_2b6690;
        case 0x2b66a0u: goto label_2b66a0;
        case 0x2b66acu: goto label_2b66ac;
        case 0x2b66bcu: goto label_2b66bc;
        case 0x2b66ccu: goto label_2b66cc;
        case 0x2b66e8u: goto label_2b66e8;
        case 0x2b66f4u: goto label_2b66f4;
        case 0x2b6718u: goto label_2b6718;
        case 0x2b6750u: goto label_2b6750;
        case 0x2b6764u: goto label_2b6764;
        case 0x2b6770u: goto label_2b6770;
        case 0x2b6798u: goto label_2b6798;
        case 0x2b67a0u: goto label_2b67a0;
        case 0x2b67c8u: goto label_2b67c8;
        case 0x2b67d8u: goto label_2b67d8;
        case 0x2b67f4u: goto label_2b67f4;
        default: break;
    }

    ctx->pc = 0x2b6638u;

    // 0x2b6638: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b6638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b663c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b6640: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b6640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b6644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6648: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b664c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b6650: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b6650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b6654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6658: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b665c: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2b665cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6660: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6660u;
    SET_GPR_U32(ctx, 31, 0x2B6668u);
    ctx->pc = 0x2B6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6660u;
    // 0x2b6664: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6660u, 0x2B6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6668u;
label_2b6668:
    // 0x2b6668: 0xc088e40  jal         func_223900
    ctx->pc = 0x2B6668u;
    SET_GPR_U32(ctx, 31, 0x2B6670u);
    ctx->pc = 0x2B666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6668u;
    // 0x2b666c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2B6668u, 0x2B6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6670u;
label_2b6670:
    // 0x2b6670: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6670u;
    {
        const bool branch_taken_0x2b6670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6670) {
            ctx->pc = 0x2B6674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6670u;
            // 0x2b6674: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6688u;
            goto label_2b6688;
        }
    }
    ctx->pc = 0x2B6678u;
    // 0x2b6678: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B6678u;
    SET_GPR_U32(ctx, 31, 0x2B6680u);
    ctx->pc = 0x2B667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6678u;
    // 0x2b667c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B6678u, 0x2B6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6680u;
label_2b6680:
    // 0x2b6680: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B6680u;
    {
        const bool branch_taken_0x2b6680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6680u;
        // 0x2b6684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6680) {
            ctx->pc = 0x2B67F8u;
            goto label_2b67f8;
        }
    }
    ctx->pc = 0x2B6688u;
label_2b6688:
    // 0x2b6688: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x2B6688u;
    SET_GPR_U32(ctx, 31, 0x2B6690u);
    ctx->pc = 0x2B668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6688u;
    // 0x2b668c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x2B6688u, 0x2B6690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6690u;
label_2b6690:
    // 0x2b6690: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6690u;
    {
        const bool branch_taken_0x2b6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b6690) {
            ctx->pc = 0x2B66B4u;
            goto label_2b66b4;
        }
    }
    ctx->pc = 0x2B6698u;
    // 0x2b6698: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B6698u;
    SET_GPR_U32(ctx, 31, 0x2B66A0u);
    ctx->pc = 0x2B669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6698u;
    // 0x2b669c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B6698u, 0x2B66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66A0u;
label_2b66a0:
    // 0x2b66a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66a4: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B66A4u;
    SET_GPR_U32(ctx, 31, 0x2B66ACu);
    ctx->pc = 0x2B66A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66A4u;
    // 0x2b66a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B66A4u, 0x2B66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66ACu;
label_2b66ac:
    // 0x2b66ac: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2B66ACu;
    {
        const bool branch_taken_0x2b66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66ACu;
        // 0x2b66b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66ac) {
            ctx->pc = 0x2B67F8u;
            goto label_2b67f8;
        }
    }
    ctx->pc = 0x2B66B4u;
label_2b66b4:
    // 0x2b66b4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B66B4u;
    SET_GPR_U32(ctx, 31, 0x2B66BCu);
    ctx->pc = 0x2B66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66B4u;
    // 0x2b66b8: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B66B4u, 0x2B66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66BCu;
label_2b66bc:
    // 0x2b66bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b66c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b66c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66c4: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B66C4u;
    SET_GPR_U32(ctx, 31, 0x2B66CCu);
    ctx->pc = 0x2B66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66C4u;
    // 0x2b66c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B66C4u, 0x2B66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66CCu;
label_2b66cc:
    // 0x2b66cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b66ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b66d0: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2b66d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2b66d4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b66d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b66d8: 0x50540047  beql        $v0, $s4, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B66D8u;
    {
        const bool branch_taken_0x2b66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b66d8) {
            ctx->pc = 0x2B66DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B66D8u;
            // 0x2b66dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B67F8u;
            goto label_2b67f8;
        }
    }
    ctx->pc = 0x2B66E0u;
    // 0x2b66e0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B66E0u;
    SET_GPR_U32(ctx, 31, 0x2B66E8u);
    ctx->pc = 0x2B66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66E0u;
    // 0x2b66e4: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B66E0u, 0x2B66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66E8u;
label_2b66e8:
    // 0x2b66e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b66e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66ec: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B66ECu;
    SET_GPR_U32(ctx, 31, 0x2B66F4u);
    ctx->pc = 0x2B66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66ECu;
    // 0x2b66f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B66ECu, 0x2B66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66F4u;
label_2b66f4:
    // 0x2b66f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b66f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66f8: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x2B66F8u;
    {
        const bool branch_taken_0x2b66f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66F8u;
        // 0x2b66fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66f8) {
            ctx->pc = 0x2B67F8u;
            goto label_2b67f8;
        }
    }
    ctx->pc = 0x2B6700u;
    // 0x2b6700: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b6700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2b6704: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b6704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b6708: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b6708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b670c: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b670cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b6710: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B6710u;
    SET_GPR_U32(ctx, 31, 0x2B6718u);
    ctx->pc = 0x2B6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6710u;
    // 0x2b6714: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B6710u, 0x2B6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6718u;
label_2b6718:
    // 0x2b6718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b671c: 0x3a02002d  xori        $v0, $s0, 0x2D
    ctx->pc = 0x2b671cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)45);
    // 0x2b6720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6720u;
    {
        const bool branch_taken_0x2b6720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6720u;
        // 0x2b6724: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6720) {
            ctx->pc = 0x2B6730u;
            goto label_2b6730;
        }
    }
    ctx->pc = 0x2B6728u;
    // 0x2b6728: 0x3a020024  xori        $v0, $s0, 0x24
    ctx->pc = 0x2b6728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)36);
    // 0x2b672c: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x2b672cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_2b6730:
    // 0x2b6730: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B6730u;
    {
        const bool branch_taken_0x2b6730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6730u;
        // 0x2b6734: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6730) {
            ctx->pc = 0x2B67F4u;
            goto label_2b67f4;
        }
    }
    ctx->pc = 0x2B6738u;
    // 0x2b6738: 0x56020025  bnel        $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B6738u;
    {
        const bool branch_taken_0x2b6738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6738) {
            ctx->pc = 0x2B673Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6738u;
            // 0x2b673c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B67D0u;
            goto label_2b67d0;
        }
    }
    ctx->pc = 0x2B6740u;
    // 0x2b6740: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b6740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b6744: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b6744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b6748: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B6748u;
    SET_GPR_U32(ctx, 31, 0x2B6750u);
    ctx->pc = 0x2B674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6748u;
    // 0x2b674c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B6748u, 0x2B6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6750u;
label_2b6750:
    // 0x2b6750: 0x2c420028  sltiu       $v0, $v0, 0x28
    ctx->pc = 0x2b6750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2b6754: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B6754u;
    {
        const bool branch_taken_0x2b6754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6754u;
        // 0x2b6758: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6754) {
            ctx->pc = 0x2B67D0u;
            goto label_2b67d0;
        }
    }
    ctx->pc = 0x2B675Cu;
    // 0x2b675c: 0xc08c466  jal         func_231198
    ctx->pc = 0x2B675Cu;
    SET_GPR_U32(ctx, 31, 0x2B6764u);
    ctx->pc = 0x2B6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B675Cu;
    // 0x2b6760: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x2B675Cu, 0x2B6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6764u;
label_2b6764:
    // 0x2b6764: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b6764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b6768: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B6768u;
    SET_GPR_U32(ctx, 31, 0x2B6770u);
    ctx->pc = 0x2B676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6768u;
    // 0x2b676c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B6768u, 0x2B6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6770u;
label_2b6770:
    // 0x2b6770: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6770u;
    {
        const bool branch_taken_0x2b6770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6770u;
        // 0x2b6774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6770) {
            ctx->pc = 0x2B6798u;
            goto label_2b6798;
        }
    }
    ctx->pc = 0x2B6778u;
    // 0x2b6778: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b6778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b677c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b677cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b6780: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b6780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6784: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b6784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6788: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x2b6788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b678c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b678cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6790: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x2B6790u;
    SET_GPR_U32(ctx, 31, 0x2B6798u);
    ctx->pc = 0x2B6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6790u;
    // 0x2b6794: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x2B6790u, 0x2B6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6798u;
label_2b6798:
    // 0x2b6798: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B6798u;
    SET_GPR_U32(ctx, 31, 0x2B67A0u);
    ctx->pc = 0x2B679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6798u;
    // 0x2b679c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B6798u, 0x2B67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67A0u;
label_2b67a0:
    // 0x2b67a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B67A0u;
    {
        const bool branch_taken_0x2b67a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67A0u;
        // 0x2b67a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67a0) {
            ctx->pc = 0x2B67F4u;
            goto label_2b67f4;
        }
    }
    ctx->pc = 0x2B67A8u;
    // 0x2b67a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b67ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b67acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b67b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b67b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b67b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b67b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67b8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2b67b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67bc: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x2b67bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b67c0: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x2B67C0u;
    SET_GPR_U32(ctx, 31, 0x2B67C8u);
    ctx->pc = 0x2B67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67C0u;
    // 0x2b67c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x2B67C0u, 0x2B67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67C8u;
label_2b67c8:
    // 0x2b67c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B67C8u;
    {
        const bool branch_taken_0x2b67c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C8u;
        // 0x2b67cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67c8) {
            ctx->pc = 0x2B67F8u;
            goto label_2b67f8;
        }
    }
    ctx->pc = 0x2B67D0u;
label_2b67d0:
    // 0x2b67d0: 0xc08c466  jal         func_231198
    ctx->pc = 0x2B67D0u;
    SET_GPR_U32(ctx, 31, 0x2B67D8u);
    ctx->pc = 0x2B67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67D0u;
    // 0x2b67d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x2B67D0u, 0x2B67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67D8u;
label_2b67d8:
    // 0x2b67d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b67dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b67dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b67e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b67e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b67e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b67e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b67e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67ec: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B67ECu;
    SET_GPR_U32(ctx, 31, 0x2B67F4u);
    ctx->pc = 0x2B67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67ECu;
    // 0x2b67f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B67ECu, 0x2B67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67F4u;
label_2b67f4:
    // 0x2b67f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b67f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b67f8:
    // 0x2b67f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b67f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b67fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b67fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6800: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b6800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6804: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b6804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6808: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b6808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b680c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6810: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6810u;
        // 0x2b6814: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6818u;
}
