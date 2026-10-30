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

// Function: sub_0014BA18
// Address: 0x14ba18 - 0x14bbb0
void sub_0014BA18_0x14ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BA18_0x14ba18");
#endif

    switch (ctx->pc) {
        case 0x14ba4cu: goto label_14ba4c;
        case 0x14ba68u: goto label_14ba68;
        case 0x14ba84u: goto label_14ba84;
        case 0x14baa0u: goto label_14baa0;
        case 0x14babcu: goto label_14babc;
        case 0x14bad8u: goto label_14bad8;
        case 0x14baf4u: goto label_14baf4;
        case 0x14bb10u: goto label_14bb10;
        case 0x14bb2cu: goto label_14bb2c;
        case 0x14bb48u: goto label_14bb48;
        case 0x14bb64u: goto label_14bb64;
        case 0x14bb80u: goto label_14bb80;
        case 0x14bb9cu: goto label_14bb9c;
        default: break;
    }

    ctx->pc = 0x14ba18u;

    // 0x14ba18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ba1c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x14ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x14ba20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ba24: 0x24427f88  addiu       $v0, $v0, 0x7F88
    ctx->pc = 0x14ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32648));
    // 0x14ba28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ba2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14ba34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba38: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x14ba38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x14ba3c: 0x3c070006  lui         $a3, 0x6
    ctx->pc = 0x14ba3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6 << 16));
    // 0x14ba40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14ba40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba44: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BA44u;
    SET_GPR_U32(ctx, 31, 0x14BA4Cu);
    ctx->pc = 0x14BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA44u;
    // 0x14ba48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BA44u, 0x14BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA4Cu;
label_14ba4c:
    // 0x14ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ba54: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x14ba54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14ba58: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x14ba5c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x14ba60: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BA60u;
    SET_GPR_U32(ctx, 31, 0x14BA68u);
    ctx->pc = 0x14BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA60u;
    // 0x14ba64: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BA60u, 0x14BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA68u;
label_14ba68:
    // 0x14ba68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ba70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ba70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ba74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14ba78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba7c: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BA7Cu;
    SET_GPR_U32(ctx, 31, 0x14BA84u);
    ctx->pc = 0x14BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA7Cu;
    // 0x14ba80: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BA7Cu, 0x14BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA84u;
label_14ba84:
    // 0x14ba84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ba8c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x14ba8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14ba90: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x14ba94: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x14ba94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x14ba98: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BA98u;
    SET_GPR_U32(ctx, 31, 0x14BAA0u);
    ctx->pc = 0x14BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA98u;
    // 0x14ba9c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BA98u, 0x14BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAA0u;
label_14baa0:
    // 0x14baa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14baa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14baa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14baacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14bab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bab4: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BAB4u;
    SET_GPR_U32(ctx, 31, 0x14BABCu);
    ctx->pc = 0x14BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAB4u;
    // 0x14bab8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BAB4u, 0x14BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BABCu;
label_14babc:
    // 0x14babc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bac0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14bac4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14bac8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x14bacc: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bad0: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BAD0u;
    SET_GPR_U32(ctx, 31, 0x14BAD8u);
    ctx->pc = 0x14BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAD0u;
    // 0x14bad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BAD0u, 0x14BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAD8u;
label_14bad8:
    // 0x14bad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14badc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14bae0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x14bae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14bae4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x14bae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x14bae8: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14baec: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BAECu;
    SET_GPR_U32(ctx, 31, 0x14BAF4u);
    ctx->pc = 0x14BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAECu;
    // 0x14baf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BAECu, 0x14BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAF4u;
label_14baf4:
    // 0x14baf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14baf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baf8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14bafc: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x14bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14bb00: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x14bb00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x14bb04: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb08: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BB08u;
    SET_GPR_U32(ctx, 31, 0x14BB10u);
    ctx->pc = 0x14BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB08u;
    // 0x14bb0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BB08u, 0x14BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB10u;
label_14bb10:
    // 0x14bb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb14: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x14bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14bb18: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x14bb18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14bb1c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x14bb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x14bb20: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb24: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BB24u;
    SET_GPR_U32(ctx, 31, 0x14BB2Cu);
    ctx->pc = 0x14BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB24u;
    // 0x14bb28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BB24u, 0x14BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB2Cu;
label_14bb2c:
    // 0x14bb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb30: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14bb34: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x14bb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14bb38: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x14bb38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x14bb3c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb40: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BB40u;
    SET_GPR_U32(ctx, 31, 0x14BB48u);
    ctx->pc = 0x14BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB40u;
    // 0x14bb44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BB40u, 0x14BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB48u;
label_14bb48:
    // 0x14bb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x14bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14bb50: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x14bb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb54: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x14bb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb58: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb5c: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BB5Cu;
    SET_GPR_U32(ctx, 31, 0x14BB64u);
    ctx->pc = 0x14BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB5Cu;
    // 0x14bb60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BB5Cu, 0x14BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB64u;
label_14bb64:
    // 0x14bb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb68: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x14bb6c: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x14bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb70: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x14bb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb74: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb78: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BB78u;
    SET_GPR_U32(ctx, 31, 0x14BB80u);
    ctx->pc = 0x14BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB78u;
    // 0x14bb7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BB78u, 0x14BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB80u;
label_14bb80:
    // 0x14bb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb84: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14bb88: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x14bb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb8c: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x14bb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb90: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14bb94: 0xc052eec  jal         func_14BBB0
    ctx->pc = 0x14BB94u;
    SET_GPR_U32(ctx, 31, 0x14BB9Cu);
    ctx->pc = 0x14BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB94u;
    // 0x14bb98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBB0u, 0x14BB94u, 0x14BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB9Cu;
label_14bb9c:
    // 0x14bb9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14bb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14bba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bba8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA8u;
        // 0x14bbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BBB0u;
}
