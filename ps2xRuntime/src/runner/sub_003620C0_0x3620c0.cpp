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

// Function: sub_003620C0
// Address: 0x3620c0 - 0x362250
void sub_003620C0_0x3620c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003620C0_0x3620c0");
#endif

    switch (ctx->pc) {
        case 0x362100u: goto label_362100;
        case 0x362108u: goto label_362108;
        case 0x36211cu: goto label_36211c;
        case 0x362124u: goto label_362124;
        case 0x36213cu: goto label_36213c;
        case 0x362144u: goto label_362144;
        case 0x36215cu: goto label_36215c;
        case 0x362164u: goto label_362164;
        case 0x36217cu: goto label_36217c;
        case 0x362184u: goto label_362184;
        case 0x36219cu: goto label_36219c;
        case 0x3621a4u: goto label_3621a4;
        case 0x3621b8u: goto label_3621b8;
        case 0x3621c0u: goto label_3621c0;
        case 0x3621d4u: goto label_3621d4;
        case 0x3621dcu: goto label_3621dc;
        case 0x3621f0u: goto label_3621f0;
        case 0x362218u: goto label_362218;
        default: break;
    }

    ctx->pc = 0x3620c0u;

    // 0x3620c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3620c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3620c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3620c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3620c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3620c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3620cc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3620ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3620d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3620d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3620d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3620d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3620d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3620d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3620dc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3620dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3620e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3620e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3620e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3620e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3620e8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3620e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3620ec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3620ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3620f0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3620f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3620f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3620f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3620f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3620F8u;
    SET_GPR_U32(ctx, 31, 0x362100u);
    ctx->pc = 0x3620FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3620F8u;
    // 0x3620fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3620F8u, 0x362100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362100u;
label_362100:
    // 0x362100: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362100u;
    SET_GPR_U32(ctx, 31, 0x362108u);
    ctx->pc = 0x362104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362100u;
    // 0x362104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362100u, 0x362108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362108u;
label_362108:
    // 0x362108: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36210c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x36210cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362110: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362114: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362114u;
    SET_GPR_U32(ctx, 31, 0x36211Cu);
    ctx->pc = 0x362118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362114u;
    // 0x362118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362114u, 0x36211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36211Cu;
label_36211c:
    // 0x36211c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36211Cu;
    SET_GPR_U32(ctx, 31, 0x362124u);
    ctx->pc = 0x362120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36211Cu;
    // 0x362120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36211Cu, 0x362124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362124u;
label_362124:
    // 0x362124: 0x2ac00  sll         $s5, $v0, 16
    ctx->pc = 0x362124u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36212c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362130: 0x15ac03  sra         $s5, $s5, 16
    ctx->pc = 0x362130u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 16));
    // 0x362134: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362134u;
    SET_GPR_U32(ctx, 31, 0x36213Cu);
    ctx->pc = 0x362138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362134u;
    // 0x362138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362134u, 0x36213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36213Cu;
label_36213c:
    // 0x36213c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36213Cu;
    SET_GPR_U32(ctx, 31, 0x362144u);
    ctx->pc = 0x362140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36213Cu;
    // 0x362140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36213Cu, 0x362144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362144u;
label_362144:
    // 0x362144: 0x2a400  sll         $s4, $v0, 16
    ctx->pc = 0x362144u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362148: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36214c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362150: 0x14a403  sra         $s4, $s4, 16
    ctx->pc = 0x362150u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 16));
    // 0x362154: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362154u;
    SET_GPR_U32(ctx, 31, 0x36215Cu);
    ctx->pc = 0x362158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362154u;
    // 0x362158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362154u, 0x36215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36215Cu;
label_36215c:
    // 0x36215c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36215Cu;
    SET_GPR_U32(ctx, 31, 0x362164u);
    ctx->pc = 0x362160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36215Cu;
    // 0x362160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36215Cu, 0x362164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362164u;
label_362164:
    // 0x362164: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x362164u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362168: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36216c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x362170: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x362170u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x362174: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362174u;
    SET_GPR_U32(ctx, 31, 0x36217Cu);
    ctx->pc = 0x362178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362174u;
    // 0x362178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362174u, 0x36217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36217Cu;
label_36217c:
    // 0x36217c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36217Cu;
    SET_GPR_U32(ctx, 31, 0x362184u);
    ctx->pc = 0x362180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36217Cu;
    // 0x362180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36217Cu, 0x362184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362184u;
label_362184:
    // 0x362184: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x362184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362188: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36218c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362190: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x362190u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x362194: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362194u;
    SET_GPR_U32(ctx, 31, 0x36219Cu);
    ctx->pc = 0x362198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362194u;
    // 0x362198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362194u, 0x36219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36219Cu;
label_36219c:
    // 0x36219c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36219Cu;
    SET_GPR_U32(ctx, 31, 0x3621A4u);
    ctx->pc = 0x3621A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36219Cu;
    // 0x3621a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36219Cu, 0x3621A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621A4u;
label_3621a4:
    // 0x3621a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3621a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3621a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3621acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3621b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3621B0u;
    SET_GPR_U32(ctx, 31, 0x3621B8u);
    ctx->pc = 0x3621B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621B0u;
    // 0x3621b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3621B0u, 0x3621B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621B8u;
label_3621b8:
    // 0x3621b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3621B8u;
    SET_GPR_U32(ctx, 31, 0x3621C0u);
    ctx->pc = 0x3621BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621B8u;
    // 0x3621bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3621B8u, 0x3621C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621C0u;
label_3621c0:
    // 0x3621c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3621c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3621c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3621c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3621cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3621CCu;
    SET_GPR_U32(ctx, 31, 0x3621D4u);
    ctx->pc = 0x3621D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621CCu;
    // 0x3621d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3621CCu, 0x3621D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621D4u;
label_3621d4:
    // 0x3621d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3621D4u;
    SET_GPR_U32(ctx, 31, 0x3621DCu);
    ctx->pc = 0x3621D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621D4u;
    // 0x3621d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3621D4u, 0x3621DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621DCu;
label_3621dc:
    // 0x3621dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3621dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3621e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3621e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3621e8: 0xc102488  jal         func_409220
    ctx->pc = 0x3621E8u;
    SET_GPR_U32(ctx, 31, 0x3621F0u);
    ctx->pc = 0x3621ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621E8u;
    // 0x3621ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3621E8u, 0x3621F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621F0u;
label_3621f0:
    // 0x3621f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3621f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3621f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3621f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3621f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3621fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362200: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x362200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362204: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x362204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362208: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x362208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36220c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x36220cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362210: 0xc0a8f94  jal         func_2A3E50
    ctx->pc = 0x362210u;
    SET_GPR_U32(ctx, 31, 0x362218u);
    ctx->pc = 0x362214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362210u;
    // 0x362214: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E50u, 0x362210u, 0x362218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362218u;
label_362218:
    // 0x362218: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x362218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36221c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36221cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362220: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x362220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x362224: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x362224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x362228: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x362228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36222c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36222cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362230: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x362230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362234: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x362234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362238: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x362238u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36223c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x36223cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362244: 0x3e00008  jr          $ra
    ctx->pc = 0x362244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362244u;
        // 0x362248: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36224Cu;
    // 0x36224c: 0x0  nop
    ctx->pc = 0x36224cu;
    // NOP
    ctx->pc = 0x362250u;
}
