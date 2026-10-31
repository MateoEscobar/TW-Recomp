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

// Function: sub_0040C0A0
// Address: 0x40c0a0 - 0x40c1b8
void sub_0040C0A0_0x40c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C0A0_0x40c0a0");
#endif

    switch (ctx->pc) {
        case 0x40c0ecu: goto label_40c0ec;
        case 0x40c0fcu: goto label_40c0fc;
        case 0x40c10cu: goto label_40c10c;
        case 0x40c120u: goto label_40c120;
        case 0x40c130u: goto label_40c130;
        case 0x40c144u: goto label_40c144;
        case 0x40c154u: goto label_40c154;
        case 0x40c164u: goto label_40c164;
        case 0x40c178u: goto label_40c178;
        case 0x40c188u: goto label_40c188;
        default: break;
    }

    ctx->pc = 0x40c0a0u;

    // 0x40c0a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x40c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x40c0a4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x40c0a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x40c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x40c0ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x40c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x40c0b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40c0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0b4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x40c0b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40c0b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0bc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x40c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x40c0c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40c0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x40c0c8: 0x24578490  addiu       $s7, $v0, -0x7B70
    ctx->pc = 0x40c0c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935696));
    // 0x40c0cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x40c0d0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x40c0d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x40c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x40c0d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40c0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0dc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x40c0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x40c0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c0e4: 0xc103090  jal         func_40C240
    ctx->pc = 0x40C0E4u;
    SET_GPR_U32(ctx, 31, 0x40C0ECu);
    ctx->pc = 0x40C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C0E4u;
    // 0x40c0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C240u, 0x40C0E4u, 0x40C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C0ECu;
label_40c0ec:
    // 0x40c0ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40c0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c0f4: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x40C0F4u;
    SET_GPR_U32(ctx, 31, 0x40C0FCu);
    ctx->pc = 0x40C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C0F4u;
    // 0x40c0f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x40C0F4u, 0x40C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C0FCu;
label_40c0fc:
    // 0x40c0fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x40c0fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40c100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c104: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x40C104u;
    SET_GPR_U32(ctx, 31, 0x40C10Cu);
    ctx->pc = 0x40C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C104u;
    // 0x40c108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x40C104u, 0x40C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C10Cu;
label_40c10c:
    // 0x40c10c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x40c10cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c114: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c118: 0xc1028ec  jal         func_40A3B0
    ctx->pc = 0x40C118u;
    SET_GPR_U32(ctx, 31, 0x40C120u);
    ctx->pc = 0x40C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C118u;
    // 0x40c11c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A3B0u, 0x40C118u, 0x40C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C120u;
label_40c120:
    // 0x40c120: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40c120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c128: 0xc1028ec  jal         func_40A3B0
    ctx->pc = 0x40C128u;
    SET_GPR_U32(ctx, 31, 0x40C130u);
    ctx->pc = 0x40C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C128u;
    // 0x40c12c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A3B0u, 0x40C128u, 0x40C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C130u;
label_40c130:
    // 0x40c130: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x40c130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x40c134: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x40C134u;
    {
        const bool branch_taken_0x40c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C134u;
        // 0x40c138: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c134) {
            ctx->pc = 0x40C188u;
            goto label_40c188;
        }
    }
    ctx->pc = 0x40C13Cu;
    // 0x40c13c: 0xc103090  jal         func_40C240
    ctx->pc = 0x40C13Cu;
    SET_GPR_U32(ctx, 31, 0x40C144u);
    ctx->pc = 0x40C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C13Cu;
    // 0x40c140: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C240u, 0x40C13Cu, 0x40C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C144u;
label_40c144:
    // 0x40c144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c148: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40c148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c14c: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x40C14Cu;
    SET_GPR_U32(ctx, 31, 0x40C154u);
    ctx->pc = 0x40C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C14Cu;
    // 0x40c150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x40C14Cu, 0x40C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C154u;
label_40c154:
    // 0x40c154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40c154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c158: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40c158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c15c: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x40C15Cu;
    SET_GPR_U32(ctx, 31, 0x40C164u);
    ctx->pc = 0x40C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C15Cu;
    // 0x40c160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x40C15Cu, 0x40C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C164u;
label_40c164:
    // 0x40c164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c168: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40c168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c16c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40c16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c170: 0xc10306e  jal         func_40C1B8
    ctx->pc = 0x40C170u;
    SET_GPR_U32(ctx, 31, 0x40C178u);
    ctx->pc = 0x40C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C170u;
    // 0x40c174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C1B8u, 0x40C170u, 0x40C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C178u;
label_40c178:
    // 0x40c178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c17c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x40c17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c180: 0xc10306e  jal         func_40C1B8
    ctx->pc = 0x40C180u;
    SET_GPR_U32(ctx, 31, 0x40C188u);
    ctx->pc = 0x40C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C180u;
    // 0x40c184: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C1B8u, 0x40C180u, 0x40C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C188u;
label_40c188:
    // 0x40c188: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x40c188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40c18c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x40c18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40c190: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x40c190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40c194: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x40c194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40c198: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40c198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40c19c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x40c19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c1a0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x40c1a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c1a4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x40c1a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x40C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C1ACu;
        // 0x40c1b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C1B4u;
    // 0x40c1b4: 0x0  nop
    ctx->pc = 0x40c1b4u;
    // NOP
    ctx->pc = 0x40c1b8u;
}
