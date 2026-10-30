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

// Function: sub_0040A8B0
// Address: 0x40a8b0 - 0x40ab58
void sub_0040A8B0_0x40a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A8B0_0x40a8b0");
#endif

    switch (ctx->pc) {
        case 0x40a8e4u: goto label_40a8e4;
        case 0x40a8f4u: goto label_40a8f4;
        case 0x40a8fcu: goto label_40a8fc;
        case 0x40a90cu: goto label_40a90c;
        case 0x40a914u: goto label_40a914;
        case 0x40a91cu: goto label_40a91c;
        case 0x40a928u: goto label_40a928;
        case 0x40a93cu: goto label_40a93c;
        case 0x40a944u: goto label_40a944;
        case 0x40a94cu: goto label_40a94c;
        case 0x40a958u: goto label_40a958;
        case 0x40a96cu: goto label_40a96c;
        case 0x40a974u: goto label_40a974;
        case 0x40a97cu: goto label_40a97c;
        case 0x40a988u: goto label_40a988;
        case 0x40a99cu: goto label_40a99c;
        case 0x40a9a4u: goto label_40a9a4;
        case 0x40a9acu: goto label_40a9ac;
        case 0x40a9b8u: goto label_40a9b8;
        case 0x40a9ccu: goto label_40a9cc;
        case 0x40a9d4u: goto label_40a9d4;
        case 0x40a9dcu: goto label_40a9dc;
        case 0x40a9e8u: goto label_40a9e8;
        case 0x40a9fcu: goto label_40a9fc;
        case 0x40aa04u: goto label_40aa04;
        case 0x40aa0cu: goto label_40aa0c;
        case 0x40aa18u: goto label_40aa18;
        case 0x40aa2cu: goto label_40aa2c;
        case 0x40aa38u: goto label_40aa38;
        case 0x40aa4cu: goto label_40aa4c;
        case 0x40aa58u: goto label_40aa58;
        case 0x40aa6cu: goto label_40aa6c;
        case 0x40aa78u: goto label_40aa78;
        case 0x40aa8cu: goto label_40aa8c;
        case 0x40aa98u: goto label_40aa98;
        case 0x40aaacu: goto label_40aaac;
        case 0x40aab8u: goto label_40aab8;
        case 0x40aaccu: goto label_40aacc;
        case 0x40aad8u: goto label_40aad8;
        case 0x40aaecu: goto label_40aaec;
        case 0x40aaf8u: goto label_40aaf8;
        case 0x40ab08u: goto label_40ab08;
        case 0x40ab14u: goto label_40ab14;
        case 0x40ab24u: goto label_40ab24;
        case 0x40ab2cu: goto label_40ab2c;
        default: break;
    }

    ctx->pc = 0x40a8b0u;

    // 0x40a8b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x40a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x40a8b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x40a8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a8bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x40a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x40a8c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x40a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x40a8c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x40a8c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x40a8cc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x40a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x40a8d0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x40a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x40a8d4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x40a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x40a8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a8dc: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40A8DCu;
    SET_GPR_U32(ctx, 31, 0x40A8E4u);
    ctx->pc = 0x40A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A8DCu;
    // 0x40a8e0: 0x3c17006f  lui         $s7, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40A8DCu, 0x40A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A8E4u;
label_40a8e4:
    // 0x40a8e4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a8ec: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A8ECu;
    SET_GPR_U32(ctx, 31, 0x40A8F4u);
    ctx->pc = 0x40A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A8ECu;
    // 0x40a8f0: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A8ECu, 0x40A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A8F4u;
label_40a8f4:
    // 0x40a8f4: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40A8F4u;
    SET_GPR_U32(ctx, 31, 0x40A8FCu);
    ctx->pc = 0x40A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A8F4u;
    // 0x40a8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40A8F4u, 0x40A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A8FCu;
label_40a8fc:
    // 0x40a8fc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a904: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A904u;
    SET_GPR_U32(ctx, 31, 0x40A90Cu);
    ctx->pc = 0x40A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A904u;
    // 0x40a908: 0x24a58238  addiu       $a1, $a1, -0x7DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A904u, 0x40A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A90Cu;
label_40a90c:
    // 0x40a90c: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A90Cu;
    SET_GPR_U32(ctx, 31, 0x40A914u);
    ctx->pc = 0x40A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A90Cu;
    // 0x40a910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A90Cu, 0x40A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A914u;
label_40a914:
    // 0x40a914: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A914u;
    SET_GPR_U32(ctx, 31, 0x40A91Cu);
    ctx->pc = 0x40A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A914u;
    // 0x40a918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A914u, 0x40A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A91Cu;
label_40a91c:
    // 0x40a91c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a920: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A920u;
    SET_GPR_U32(ctx, 31, 0x40A928u);
    ctx->pc = 0x40A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A920u;
    // 0x40a924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A920u, 0x40A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A928u;
label_40a928:
    // 0x40a928: 0x3c140059  lui         $s4, 0x59
    ctx->pc = 0x40a928u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
    // 0x40a92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a930: 0x26948140  addiu       $s4, $s4, -0x7EC0
    ctx->pc = 0x40a930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934848));
    // 0x40a934: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A934u;
    SET_GPR_U32(ctx, 31, 0x40A93Cu);
    ctx->pc = 0x40A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A934u;
    // 0x40a938: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A934u, 0x40A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A93Cu;
label_40a93c:
    // 0x40a93c: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A93Cu;
    SET_GPR_U32(ctx, 31, 0x40A944u);
    ctx->pc = 0x40A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A93Cu;
    // 0x40a940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A93Cu, 0x40A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A944u;
label_40a944:
    // 0x40a944: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A944u;
    SET_GPR_U32(ctx, 31, 0x40A94Cu);
    ctx->pc = 0x40A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A944u;
    // 0x40a948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A944u, 0x40A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A94Cu;
label_40a94c:
    // 0x40a94c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a950: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A950u;
    SET_GPR_U32(ctx, 31, 0x40A958u);
    ctx->pc = 0x40A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A950u;
    // 0x40a954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A950u, 0x40A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A958u;
label_40a958:
    // 0x40a958: 0x3c160059  lui         $s6, 0x59
    ctx->pc = 0x40a958u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
    // 0x40a95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a960: 0x26d68158  addiu       $s6, $s6, -0x7EA8
    ctx->pc = 0x40a960u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934872));
    // 0x40a964: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A964u;
    SET_GPR_U32(ctx, 31, 0x40A96Cu);
    ctx->pc = 0x40A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A964u;
    // 0x40a968: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A964u, 0x40A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A96Cu;
label_40a96c:
    // 0x40a96c: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A96Cu;
    SET_GPR_U32(ctx, 31, 0x40A974u);
    ctx->pc = 0x40A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A96Cu;
    // 0x40a970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A96Cu, 0x40A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A974u;
label_40a974:
    // 0x40a974: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A974u;
    SET_GPR_U32(ctx, 31, 0x40A97Cu);
    ctx->pc = 0x40A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A974u;
    // 0x40a978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A974u, 0x40A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A97Cu;
label_40a97c:
    // 0x40a97c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a980: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A980u;
    SET_GPR_U32(ctx, 31, 0x40A988u);
    ctx->pc = 0x40A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A980u;
    // 0x40a984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A980u, 0x40A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A988u;
label_40a988:
    // 0x40a988: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x40a988u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x40a98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a990: 0x26b58170  addiu       $s5, $s5, -0x7E90
    ctx->pc = 0x40a990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934896));
    // 0x40a994: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A994u;
    SET_GPR_U32(ctx, 31, 0x40A99Cu);
    ctx->pc = 0x40A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A994u;
    // 0x40a998: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A994u, 0x40A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A99Cu;
label_40a99c:
    // 0x40a99c: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A99Cu;
    SET_GPR_U32(ctx, 31, 0x40A9A4u);
    ctx->pc = 0x40A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A99Cu;
    // 0x40a9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A99Cu, 0x40A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9A4u;
label_40a9a4:
    // 0x40a9a4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A9A4u;
    SET_GPR_U32(ctx, 31, 0x40A9ACu);
    ctx->pc = 0x40A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9A4u;
    // 0x40a9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A9A4u, 0x40A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9ACu;
label_40a9ac:
    // 0x40a9ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a9b0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A9B0u;
    SET_GPR_U32(ctx, 31, 0x40A9B8u);
    ctx->pc = 0x40A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9B0u;
    // 0x40a9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A9B0u, 0x40A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9B8u;
label_40a9b8:
    // 0x40a9b8: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x40a9b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x40a9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a9c0: 0x26738198  addiu       $s3, $s3, -0x7E68
    ctx->pc = 0x40a9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934936));
    // 0x40a9c4: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A9C4u;
    SET_GPR_U32(ctx, 31, 0x40A9CCu);
    ctx->pc = 0x40A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9C4u;
    // 0x40a9c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A9C4u, 0x40A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9CCu;
label_40a9cc:
    // 0x40a9cc: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A9CCu;
    SET_GPR_U32(ctx, 31, 0x40A9D4u);
    ctx->pc = 0x40A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9CCu;
    // 0x40a9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A9CCu, 0x40A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9D4u;
label_40a9d4:
    // 0x40a9d4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A9D4u;
    SET_GPR_U32(ctx, 31, 0x40A9DCu);
    ctx->pc = 0x40A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9D4u;
    // 0x40a9d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A9D4u, 0x40A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9DCu;
label_40a9dc:
    // 0x40a9dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a9e0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A9E0u;
    SET_GPR_U32(ctx, 31, 0x40A9E8u);
    ctx->pc = 0x40A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9E0u;
    // 0x40a9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A9E0u, 0x40A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9E8u;
label_40a9e8:
    // 0x40a9e8: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x40a9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x40a9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a9f0: 0x265281b0  addiu       $s2, $s2, -0x7E50
    ctx->pc = 0x40a9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934960));
    // 0x40a9f4: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40A9F4u;
    SET_GPR_U32(ctx, 31, 0x40A9FCu);
    ctx->pc = 0x40A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9F4u;
    // 0x40a9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40A9F4u, 0x40A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A9FCu;
label_40a9fc:
    // 0x40a9fc: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A9FCu;
    SET_GPR_U32(ctx, 31, 0x40AA04u);
    ctx->pc = 0x40AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A9FCu;
    // 0x40aa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A9FCu, 0x40AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA04u;
label_40aa04:
    // 0x40aa04: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40AA04u;
    SET_GPR_U32(ctx, 31, 0x40AA0Cu);
    ctx->pc = 0x40AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA04u;
    // 0x40aa08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40AA04u, 0x40AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA0Cu;
label_40aa0c:
    // 0x40aa0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa10: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40AA10u;
    SET_GPR_U32(ctx, 31, 0x40AA18u);
    ctx->pc = 0x40AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA10u;
    // 0x40aa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40AA10u, 0x40AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA18u;
label_40aa18:
    // 0x40aa18: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40aa18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x40aa1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40aa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa20: 0x26318248  addiu       $s1, $s1, -0x7DB8
    ctx->pc = 0x40aa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935112));
    // 0x40aa24: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40AA24u;
    SET_GPR_U32(ctx, 31, 0x40AA2Cu);
    ctx->pc = 0x40AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA24u;
    // 0x40aa28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40AA24u, 0x40AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA2Cu;
label_40aa2c:
    // 0x40aa2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40aa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa30: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AA30u;
    SET_GPR_U32(ctx, 31, 0x40AA38u);
    ctx->pc = 0x40AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA30u;
    // 0x40aa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AA30u, 0x40AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA38u;
label_40aa38:
    // 0x40aa38: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40aa3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa40: 0x24c68260  addiu       $a2, $a2, -0x7DA0
    ctx->pc = 0x40aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935136));
    // 0x40aa44: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40AA44u;
    SET_GPR_U32(ctx, 31, 0x40AA4Cu);
    ctx->pc = 0x40AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA44u;
    // 0x40aa48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40AA44u, 0x40AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA4Cu;
label_40aa4c:
    // 0x40aa4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa50: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AA50u;
    SET_GPR_U32(ctx, 31, 0x40AA58u);
    ctx->pc = 0x40AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA50u;
    // 0x40aa54: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AA50u, 0x40AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA58u;
label_40aa58:
    // 0x40aa58: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40aa58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40aa5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa60: 0x24c68278  addiu       $a2, $a2, -0x7D88
    ctx->pc = 0x40aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935160));
    // 0x40aa64: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40AA64u;
    SET_GPR_U32(ctx, 31, 0x40AA6Cu);
    ctx->pc = 0x40AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA64u;
    // 0x40aa68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40AA64u, 0x40AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA6Cu;
label_40aa6c:
    // 0x40aa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa70: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AA70u;
    SET_GPR_U32(ctx, 31, 0x40AA78u);
    ctx->pc = 0x40AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA70u;
    // 0x40aa74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AA70u, 0x40AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA78u;
label_40aa78:
    // 0x40aa78: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40aa7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa80: 0x24c68288  addiu       $a2, $a2, -0x7D78
    ctx->pc = 0x40aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935176));
    // 0x40aa84: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40AA84u;
    SET_GPR_U32(ctx, 31, 0x40AA8Cu);
    ctx->pc = 0x40AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA84u;
    // 0x40aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40AA84u, 0x40AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA8Cu;
label_40aa8c:
    // 0x40aa8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40aa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa90: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AA90u;
    SET_GPR_U32(ctx, 31, 0x40AA98u);
    ctx->pc = 0x40AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AA90u;
    // 0x40aa94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AA90u, 0x40AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AA98u;
label_40aa98:
    // 0x40aa98: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40aa9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aaa0: 0x24c68298  addiu       $a2, $a2, -0x7D68
    ctx->pc = 0x40aaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935192));
    // 0x40aaa4: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40AAA4u;
    SET_GPR_U32(ctx, 31, 0x40AAACu);
    ctx->pc = 0x40AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AAA4u;
    // 0x40aaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40AAA4u, 0x40AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AAACu;
label_40aaac:
    // 0x40aaac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40aaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aab0: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AAB0u;
    SET_GPR_U32(ctx, 31, 0x40AAB8u);
    ctx->pc = 0x40AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AAB0u;
    // 0x40aab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AAB0u, 0x40AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AAB8u;
label_40aab8:
    // 0x40aab8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40aabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aac0: 0x24c682b0  addiu       $a2, $a2, -0x7D50
    ctx->pc = 0x40aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935216));
    // 0x40aac4: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40AAC4u;
    SET_GPR_U32(ctx, 31, 0x40AACCu);
    ctx->pc = 0x40AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AAC4u;
    // 0x40aac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40AAC4u, 0x40AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AACCu;
label_40aacc:
    // 0x40aacc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40aaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aad0: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AAD0u;
    SET_GPR_U32(ctx, 31, 0x40AAD8u);
    ctx->pc = 0x40AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AAD0u;
    // 0x40aad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AAD0u, 0x40AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AAD8u;
label_40aad8:
    // 0x40aad8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40aad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40aadc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aae0: 0x24c682c8  addiu       $a2, $a2, -0x7D38
    ctx->pc = 0x40aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935240));
    // 0x40aae4: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40AAE4u;
    SET_GPR_U32(ctx, 31, 0x40AAECu);
    ctx->pc = 0x40AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AAE4u;
    // 0x40aae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40AAE4u, 0x40AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AAECu;
label_40aaec:
    // 0x40aaec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x40aaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aaf0: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AAF0u;
    SET_GPR_U32(ctx, 31, 0x40AAF8u);
    ctx->pc = 0x40AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AAF0u;
    // 0x40aaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AAF0u, 0x40AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AAF8u;
label_40aaf8:
    // 0x40aaf8: 0x8ee639e0  lw          $a2, 0x39E0($s7)
    ctx->pc = 0x40aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14816)));
    // 0x40aafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40aafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ab00: 0xc10306e  jal         func_40C1B8
    ctx->pc = 0x40AB00u;
    SET_GPR_U32(ctx, 31, 0x40AB08u);
    ctx->pc = 0x40AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB00u;
    // 0x40ab04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C1B8u, 0x40AB00u, 0x40AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB08u;
label_40ab08:
    // 0x40ab08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40ab08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ab0c: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AB0Cu;
    SET_GPR_U32(ctx, 31, 0x40AB14u);
    ctx->pc = 0x40AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB0Cu;
    // 0x40ab10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AB0Cu, 0x40AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB14u;
label_40ab14:
    // 0x40ab14: 0x8ee639e0  lw          $a2, 0x39E0($s7)
    ctx->pc = 0x40ab14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14816)));
    // 0x40ab18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ab1c: 0xc10306e  jal         func_40C1B8
    ctx->pc = 0x40AB1Cu;
    SET_GPR_U32(ctx, 31, 0x40AB24u);
    ctx->pc = 0x40AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB1Cu;
    // 0x40ab20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C1B8u, 0x40AB1Cu, 0x40AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB24u;
label_40ab24:
    // 0x40ab24: 0xc102dd0  jal         func_40B740
    ctx->pc = 0x40AB24u;
    SET_GPR_U32(ctx, 31, 0x40AB2Cu);
    ctx->pc = 0x40AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB24u;
    // 0x40ab28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B740u, 0x40AB24u, 0x40AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB2Cu;
label_40ab2c:
    // 0x40ab2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x40ab2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40ab30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x40ab30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40ab34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x40ab34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40ab38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x40ab38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40ab3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40ab3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40ab40: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x40ab40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40ab44: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x40ab44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40ab48: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x40ab48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ab4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40ab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x40AB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB50u;
        // 0x40ab54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AB58u;
}
