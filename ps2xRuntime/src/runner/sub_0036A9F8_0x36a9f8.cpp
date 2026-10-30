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

// Function: sub_0036A9F8
// Address: 0x36a9f8 - 0x36ab88
void sub_0036A9F8_0x36a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A9F8_0x36a9f8");
#endif

    switch (ctx->pc) {
        case 0x36aa3cu: goto label_36aa3c;
        case 0x36aa44u: goto label_36aa44;
        case 0x36aa58u: goto label_36aa58;
        case 0x36aa60u: goto label_36aa60;
        case 0x36aa74u: goto label_36aa74;
        case 0x36aa7cu: goto label_36aa7c;
        case 0x36aa90u: goto label_36aa90;
        case 0x36aa98u: goto label_36aa98;
        case 0x36aaacu: goto label_36aaac;
        case 0x36aab4u: goto label_36aab4;
        case 0x36aac8u: goto label_36aac8;
        case 0x36aad0u: goto label_36aad0;
        case 0x36aae4u: goto label_36aae4;
        case 0x36aaecu: goto label_36aaec;
        case 0x36ab00u: goto label_36ab00;
        case 0x36ab08u: goto label_36ab08;
        case 0x36ab1cu: goto label_36ab1c;
        case 0x36ab24u: goto label_36ab24;
        case 0x36ab4cu: goto label_36ab4c;
        default: break;
    }

    ctx->pc = 0x36a9f8u;

    // 0x36a9f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36a9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36a9fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36aa00: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x36aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36aa04: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x36aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36aa08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36aa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36aa0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa10: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x36aa14: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x36aa18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x36aa20: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x36aa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x36aa24: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x36aa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x36aa28: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x36aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x36aa2c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x36aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x36aa30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36aa34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AA34u;
    SET_GPR_U32(ctx, 31, 0x36AA3Cu);
    ctx->pc = 0x36AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA34u;
    // 0x36aa38: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AA34u, 0x36AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA3Cu;
label_36aa3c:
    // 0x36aa3c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36AA3Cu;
    SET_GPR_U32(ctx, 31, 0x36AA44u);
    ctx->pc = 0x36AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA3Cu;
    // 0x36aa40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36AA3Cu, 0x36AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA44u;
label_36aa44:
    // 0x36aa44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36aa44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36aa48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36aa50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AA50u;
    SET_GPR_U32(ctx, 31, 0x36AA58u);
    ctx->pc = 0x36AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA50u;
    // 0x36aa54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AA50u, 0x36AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA58u;
label_36aa58:
    // 0x36aa58: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AA58u;
    SET_GPR_U32(ctx, 31, 0x36AA60u);
    ctx->pc = 0x36AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA58u;
    // 0x36aa5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AA58u, 0x36AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA60u;
label_36aa60:
    // 0x36aa60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa64: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x36aa64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36aa6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AA6Cu;
    SET_GPR_U32(ctx, 31, 0x36AA74u);
    ctx->pc = 0x36AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA6Cu;
    // 0x36aa70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AA6Cu, 0x36AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA74u;
label_36aa74:
    // 0x36aa74: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AA74u;
    SET_GPR_U32(ctx, 31, 0x36AA7Cu);
    ctx->pc = 0x36AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA74u;
    // 0x36aa78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AA74u, 0x36AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA7Cu;
label_36aa7c:
    // 0x36aa7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa80: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x36aa80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36aa88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AA88u;
    SET_GPR_U32(ctx, 31, 0x36AA90u);
    ctx->pc = 0x36AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA88u;
    // 0x36aa8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AA88u, 0x36AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA90u;
label_36aa90:
    // 0x36aa90: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AA90u;
    SET_GPR_U32(ctx, 31, 0x36AA98u);
    ctx->pc = 0x36AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA90u;
    // 0x36aa94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AA90u, 0x36AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA98u;
label_36aa98:
    // 0x36aa98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aa98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa9c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x36aa9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aaa0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36aaa4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AAA4u;
    SET_GPR_U32(ctx, 31, 0x36AAACu);
    ctx->pc = 0x36AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAA4u;
    // 0x36aaa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AAA4u, 0x36AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAACu;
label_36aaac:
    // 0x36aaac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AAACu;
    SET_GPR_U32(ctx, 31, 0x36AAB4u);
    ctx->pc = 0x36AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAACu;
    // 0x36aab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AAACu, 0x36AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAB4u;
label_36aab4:
    // 0x36aab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aab8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36aab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aabc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36aac0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AAC0u;
    SET_GPR_U32(ctx, 31, 0x36AAC8u);
    ctx->pc = 0x36AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAC0u;
    // 0x36aac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AAC0u, 0x36AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAC8u;
label_36aac8:
    // 0x36aac8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AAC8u;
    SET_GPR_U32(ctx, 31, 0x36AAD0u);
    ctx->pc = 0x36AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAC8u;
    // 0x36aacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AAC8u, 0x36AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAD0u;
label_36aad0:
    // 0x36aad0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aad4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36aad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aad8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36aadc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AADCu;
    SET_GPR_U32(ctx, 31, 0x36AAE4u);
    ctx->pc = 0x36AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AADCu;
    // 0x36aae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AADCu, 0x36AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAE4u;
label_36aae4:
    // 0x36aae4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AAE4u;
    SET_GPR_U32(ctx, 31, 0x36AAECu);
    ctx->pc = 0x36AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAE4u;
    // 0x36aae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AAE4u, 0x36AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAECu;
label_36aaec:
    // 0x36aaec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aaf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36aaf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aaf4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36aaf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AAF8u;
    SET_GPR_U32(ctx, 31, 0x36AB00u);
    ctx->pc = 0x36AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAF8u;
    // 0x36aafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AAF8u, 0x36AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB00u;
label_36ab00:
    // 0x36ab00: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AB00u;
    SET_GPR_U32(ctx, 31, 0x36AB08u);
    ctx->pc = 0x36AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB00u;
    // 0x36ab04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AB00u, 0x36AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB08u;
label_36ab08:
    // 0x36ab08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ab08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36ab0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ab10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AB14u;
    SET_GPR_U32(ctx, 31, 0x36AB1Cu);
    ctx->pc = 0x36AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB14u;
    // 0x36ab18: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AB14u, 0x36AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB1Cu;
label_36ab1c:
    // 0x36ab1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36AB1Cu;
    SET_GPR_U32(ctx, 31, 0x36AB24u);
    ctx->pc = 0x36AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB1Cu;
    // 0x36ab20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36AB1Cu, 0x36AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB24u;
label_36ab24:
    // 0x36ab24: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x36ab24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36ab28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36ab2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab30: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x36ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab34: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x36ab34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab38: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x36ab38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab3c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x36ab3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab40: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x36ab40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab44: 0xc0a51c6  jal         func_294718
    ctx->pc = 0x36AB44u;
    SET_GPR_U32(ctx, 31, 0x36AB4Cu);
    ctx->pc = 0x36AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB44u;
    // 0x36ab48: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294718u, 0x36AB44u, 0x36AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB4Cu;
label_36ab4c:
    // 0x36ab4c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x36ab4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36ab50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ab50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab54: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x36ab54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36ab58: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36ab58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36ab5c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36ab5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ab60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36ab60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36ab64: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x36ab64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36ab68: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x36ab68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ab6c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x36ab6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ab70: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x36ab70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ab74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ab74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ab78: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x36ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36ab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB7Cu;
        // 0x36ab80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AB84u;
    // 0x36ab84: 0x0  nop
    ctx->pc = 0x36ab84u;
    // NOP
    ctx->pc = 0x36ab88u;
}
