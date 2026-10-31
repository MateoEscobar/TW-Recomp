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

// Function: sub_00408E98
// Address: 0x408e98 - 0x408fd0
void sub_00408E98_0x408e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408E98_0x408e98");
#endif

    switch (ctx->pc) {
        case 0x408eb0u: goto label_408eb0;
        case 0x408eb8u: goto label_408eb8;
        case 0x408eccu: goto label_408ecc;
        case 0x408ee8u: goto label_408ee8;
        case 0x408f04u: goto label_408f04;
        case 0x408f20u: goto label_408f20;
        case 0x408f3cu: goto label_408f3c;
        case 0x408f58u: goto label_408f58;
        case 0x408f74u: goto label_408f74;
        case 0x408f90u: goto label_408f90;
        case 0x408facu: goto label_408fac;
        default: break;
    }

    ctx->pc = 0x408e98u;

    // 0x408e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x408e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x408e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x408ea0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x408ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x408ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408ea8: 0xc1025b4  jal         func_4096D0
    ctx->pc = 0x408EA8u;
    SET_GPR_U32(ctx, 31, 0x408EB0u);
    ctx->pc = 0x408EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EA8u;
    // 0x408eac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4096D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4096D0u, 0x408EA8u, 0x408EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408EB0u;
label_408eb0:
    // 0x408eb0: 0xc1022b2  jal         func_408AC8
    ctx->pc = 0x408EB0u;
    SET_GPR_U32(ctx, 31, 0x408EB8u);
    ctx->pc = 0x408EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EB0u;
    // 0x408eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408AC8u, 0x408EB0u, 0x408EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408EB8u;
label_408eb8:
    // 0x408eb8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x408eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x408ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ec0: 0x26107ea8  addiu       $s0, $s0, 0x7EA8
    ctx->pc = 0x408ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32424));
    // 0x408ec4: 0xc10279e  jal         func_409E78
    ctx->pc = 0x408EC4u;
    SET_GPR_U32(ctx, 31, 0x408ECCu);
    ctx->pc = 0x408EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EC4u;
    // 0x408ec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409E78u, 0x408EC4u, 0x408ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408ECCu;
label_408ecc:
    // 0x408ecc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408eccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408ed0: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408ed4: 0x24c67eb0  addiu       $a2, $a2, 0x7EB0
    ctx->pc = 0x408ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32432));
    // 0x408ed8: 0x24e78ad0  addiu       $a3, $a3, -0x7530
    ctx->pc = 0x408ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937296));
    // 0x408edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ee0: 0xc102824  jal         func_40A090
    ctx->pc = 0x408EE0u;
    SET_GPR_U32(ctx, 31, 0x408EE8u);
    ctx->pc = 0x408EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EE0u;
    // 0x408ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408EE0u, 0x408EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408EE8u;
label_408ee8:
    // 0x408ee8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408eec: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408eecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408ef0: 0x24c67eb8  addiu       $a2, $a2, 0x7EB8
    ctx->pc = 0x408ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32440));
    // 0x408ef4: 0x24e78b30  addiu       $a3, $a3, -0x74D0
    ctx->pc = 0x408ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937392));
    // 0x408ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408efc: 0xc102824  jal         func_40A090
    ctx->pc = 0x408EFCu;
    SET_GPR_U32(ctx, 31, 0x408F04u);
    ctx->pc = 0x408F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EFCu;
    // 0x408f00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408EFCu, 0x408F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408F04u;
label_408f04:
    // 0x408f04: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408f08: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408f0c: 0x24c67ec0  addiu       $a2, $a2, 0x7EC0
    ctx->pc = 0x408f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32448));
    // 0x408f10: 0x24e78ba0  addiu       $a3, $a3, -0x7460
    ctx->pc = 0x408f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937504));
    // 0x408f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408f18: 0xc102824  jal         func_40A090
    ctx->pc = 0x408F18u;
    SET_GPR_U32(ctx, 31, 0x408F20u);
    ctx->pc = 0x408F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408F18u;
    // 0x408f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408F18u, 0x408F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408F20u;
label_408f20:
    // 0x408f20: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408f20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408f24: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408f24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408f28: 0x24c67ec8  addiu       $a2, $a2, 0x7EC8
    ctx->pc = 0x408f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32456));
    // 0x408f2c: 0x24e78c20  addiu       $a3, $a3, -0x73E0
    ctx->pc = 0x408f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937632));
    // 0x408f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408f34: 0xc102824  jal         func_40A090
    ctx->pc = 0x408F34u;
    SET_GPR_U32(ctx, 31, 0x408F3Cu);
    ctx->pc = 0x408F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408F34u;
    // 0x408f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408F34u, 0x408F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408F3Cu;
label_408f3c:
    // 0x408f3c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408f40: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408f40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408f44: 0x24c67ed0  addiu       $a2, $a2, 0x7ED0
    ctx->pc = 0x408f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32464));
    // 0x408f48: 0x24e78ca0  addiu       $a3, $a3, -0x7360
    ctx->pc = 0x408f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937760));
    // 0x408f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408f50: 0xc102824  jal         func_40A090
    ctx->pc = 0x408F50u;
    SET_GPR_U32(ctx, 31, 0x408F58u);
    ctx->pc = 0x408F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408F50u;
    // 0x408f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408F50u, 0x408F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408F58u;
label_408f58:
    // 0x408f58: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408f5c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408f60: 0x24c67ee0  addiu       $a2, $a2, 0x7EE0
    ctx->pc = 0x408f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32480));
    // 0x408f64: 0x24e78d20  addiu       $a3, $a3, -0x72E0
    ctx->pc = 0x408f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937888));
    // 0x408f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408f6c: 0xc102824  jal         func_40A090
    ctx->pc = 0x408F6Cu;
    SET_GPR_U32(ctx, 31, 0x408F74u);
    ctx->pc = 0x408F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408F6Cu;
    // 0x408f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408F6Cu, 0x408F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408F74u;
label_408f74:
    // 0x408f74: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408f78: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408f7c: 0x24c67ee8  addiu       $a2, $a2, 0x7EE8
    ctx->pc = 0x408f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32488));
    // 0x408f80: 0x24e78d90  addiu       $a3, $a3, -0x7270
    ctx->pc = 0x408f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938000));
    // 0x408f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408f88: 0xc102824  jal         func_40A090
    ctx->pc = 0x408F88u;
    SET_GPR_U32(ctx, 31, 0x408F90u);
    ctx->pc = 0x408F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408F88u;
    // 0x408f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408F88u, 0x408F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408F90u;
label_408f90:
    // 0x408f90: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x408f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x408f94: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x408f94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x408f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x408f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408fa0: 0x24c67ef0  addiu       $a2, $a2, 0x7EF0
    ctx->pc = 0x408fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32496));
    // 0x408fa4: 0xc102824  jal         func_40A090
    ctx->pc = 0x408FA4u;
    SET_GPR_U32(ctx, 31, 0x408FACu);
    ctx->pc = 0x408FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408FA4u;
    // 0x408fa8: 0x24e78e38  addiu       $a3, $a3, -0x71C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x408FA4u, 0x408FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408FACu;
label_408fac:
    // 0x408fac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x408facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x408fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x408fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x408FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408FBCu;
        // 0x408fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408FC4u;
    // 0x408fc4: 0x0  nop
    ctx->pc = 0x408fc4u;
    // NOP
    // 0x408fc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x408fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x408fcc: 0x0  nop
    ctx->pc = 0x408fccu;
    // NOP
    ctx->pc = 0x408fd0u;
}
