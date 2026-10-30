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

// Function: sub_00409F58
// Address: 0x409f58 - 0x40a090
void sub_00409F58_0x409f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409F58_0x409f58");
#endif

    switch (ctx->pc) {
        case 0x409f80u: goto label_409f80;
        case 0x409f90u: goto label_409f90;
        case 0x409f98u: goto label_409f98;
        case 0x409fa4u: goto label_409fa4;
        case 0x409fb4u: goto label_409fb4;
        case 0x409fbcu: goto label_409fbc;
        case 0x409fc8u: goto label_409fc8;
        case 0x409fd8u: goto label_409fd8;
        case 0x409fe0u: goto label_409fe0;
        case 0x409fecu: goto label_409fec;
        case 0x40a004u: goto label_40a004;
        case 0x40a010u: goto label_40a010;
        case 0x40a01cu: goto label_40a01c;
        case 0x40a028u: goto label_40a028;
        case 0x40a034u: goto label_40a034;
        case 0x40a03cu: goto label_40a03c;
        case 0x40a050u: goto label_40a050;
        case 0x40a064u: goto label_40a064;
        case 0x40a070u: goto label_40a070;
        default: break;
    }

    ctx->pc = 0x409f58u;

    // 0x409f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x409f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x409f5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x409f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x409f60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x409f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x409f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x409f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x409f6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x409f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x409f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x409f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409f78: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409F78u;
    SET_GPR_U32(ctx, 31, 0x409F80u);
    ctx->pc = 0x409F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F78u;
    // 0x409f7c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409F78u, 0x409F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F80u;
label_409f80:
    // 0x409f80: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f88: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409F88u;
    SET_GPR_U32(ctx, 31, 0x409F90u);
    ctx->pc = 0x409F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F88u;
    // 0x409f8c: 0x24a58038  addiu       $a1, $a1, -0x7FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409F88u, 0x409F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F90u;
label_409f90:
    // 0x409f90: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409F90u;
    SET_GPR_U32(ctx, 31, 0x409F98u);
    ctx->pc = 0x409F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F90u;
    // 0x409f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409F90u, 0x409F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F98u;
label_409f98:
    // 0x409f98: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x409f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x409f9c: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409F9Cu;
    SET_GPR_U32(ctx, 31, 0x409FA4u);
    ctx->pc = 0x409FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F9Cu;
    // 0x409fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409F9Cu, 0x409FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FA4u;
label_409fa4:
    // 0x409fa4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409fac: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409FACu;
    SET_GPR_U32(ctx, 31, 0x409FB4u);
    ctx->pc = 0x409FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FACu;
    // 0x409fb0: 0x24a58040  addiu       $a1, $a1, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409FACu, 0x409FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FB4u;
label_409fb4:
    // 0x409fb4: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409FB4u;
    SET_GPR_U32(ctx, 31, 0x409FBCu);
    ctx->pc = 0x409FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FB4u;
    // 0x409fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409FB4u, 0x409FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FBCu;
label_409fbc:
    // 0x409fbc: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x409fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x409fc0: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409FC0u;
    SET_GPR_U32(ctx, 31, 0x409FC8u);
    ctx->pc = 0x409FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FC0u;
    // 0x409fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409FC0u, 0x409FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FC8u;
label_409fc8:
    // 0x409fc8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409fd0: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409FD0u;
    SET_GPR_U32(ctx, 31, 0x409FD8u);
    ctx->pc = 0x409FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FD0u;
    // 0x409fd4: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409FD0u, 0x409FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FD8u;
label_409fd8:
    // 0x409fd8: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409FD8u;
    SET_GPR_U32(ctx, 31, 0x409FE0u);
    ctx->pc = 0x409FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FD8u;
    // 0x409fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409FD8u, 0x409FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FE0u;
label_409fe0:
    // 0x409fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409fe4: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409FE4u;
    SET_GPR_U32(ctx, 31, 0x409FECu);
    ctx->pc = 0x409FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FE4u;
    // 0x409fe8: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409FE4u, 0x409FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409FECu;
label_409fec:
    // 0x409fec: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x409fecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x409ff0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x409FF0u;
    {
        const bool branch_taken_0x409ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409FF0u;
        // 0x409ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409ff0) {
            ctx->pc = 0x40A020u;
            goto label_40a020;
        }
    }
    ctx->pc = 0x409FF8u;
    // 0x409ff8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409ffc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409FFCu;
    SET_GPR_U32(ctx, 31, 0x40A004u);
    ctx->pc = 0x40A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409FFCu;
    // 0x40a000: 0x24a58128  addiu       $a1, $a1, -0x7ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409FFCu, 0x40A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A004u;
label_40a004:
    // 0x40a004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a008: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x40A008u;
    SET_GPR_U32(ctx, 31, 0x40A010u);
    ctx->pc = 0x40A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A008u;
    // 0x40a00c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x40A008u, 0x40A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A010u;
label_40a010:
    // 0x40a010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a014: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x40A014u;
    SET_GPR_U32(ctx, 31, 0x40A01Cu);
    ctx->pc = 0x40A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A014u;
    // 0x40a018: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x40A014u, 0x40A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A01Cu;
label_40a01c:
    // 0x40a01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a020:
    // 0x40a020: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40A020u;
    SET_GPR_U32(ctx, 31, 0x40A028u);
    ctx->pc = 0x40A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A020u;
    // 0x40a024: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40A020u, 0x40A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A028u;
label_40a028:
    // 0x40a028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40a028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a02c: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x40A02Cu;
    SET_GPR_U32(ctx, 31, 0x40A034u);
    ctx->pc = 0x40A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A02Cu;
    // 0x40a030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x40A02Cu, 0x40A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A034u;
label_40a034:
    // 0x40a034: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40A034u;
    SET_GPR_U32(ctx, 31, 0x40A03Cu);
    ctx->pc = 0x40A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A034u;
    // 0x40a038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40A034u, 0x40A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A03Cu;
label_40a03c:
    // 0x40a03c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40a03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a048: 0xc1028b4  jal         func_40A2D0
    ctx->pc = 0x40A048u;
    SET_GPR_U32(ctx, 31, 0x40A050u);
    ctx->pc = 0x40A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A048u;
    // 0x40a04c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A2D0u, 0x40A048u, 0x40A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A050u;
label_40a050:
    // 0x40a050: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x40a050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a058: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x40a058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a05c: 0xc103028  jal         func_40C0A0
    ctx->pc = 0x40A05Cu;
    SET_GPR_U32(ctx, 31, 0x40A064u);
    ctx->pc = 0x40A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A05Cu;
    // 0x40a060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C0A0u, 0x40A05Cu, 0x40A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A064u;
label_40a064:
    // 0x40a064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a068: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A068u;
    SET_GPR_U32(ctx, 31, 0x40A070u);
    ctx->pc = 0x40A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A068u;
    // 0x40a06c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A068u, 0x40A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A070u;
label_40a070:
    // 0x40a070: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40a070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40a074: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40a074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40a078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40a078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a07c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x40a07cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a084: 0x3e00008  jr          $ra
    ctx->pc = 0x40A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A084u;
        // 0x40a088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A08Cu;
    // 0x40a08c: 0x0  nop
    ctx->pc = 0x40a08cu;
    // NOP
    ctx->pc = 0x40a090u;
}
