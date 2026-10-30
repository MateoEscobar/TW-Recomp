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

// Function: sub_00466A78
// Address: 0x466a78 - 0x466b70
void sub_00466A78_0x466a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466A78_0x466a78");
#endif

    switch (ctx->pc) {
        case 0x466aa0u: goto label_466aa0;
        case 0x466ad0u: goto label_466ad0;
        case 0x466af4u: goto label_466af4;
        case 0x466b04u: goto label_466b04;
        case 0x466b14u: goto label_466b14;
        case 0x466b38u: goto label_466b38;
        case 0x466b5cu: goto label_466b5c;
        default: break;
    }

    ctx->pc = 0x466a78u;

    // 0x466a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x466a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x466a7c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x466a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x466a80: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x466a80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x466a84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x466a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x466a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466a8c: 0x24c66cd8  addiu       $a2, $a2, 0x6CD8
    ctx->pc = 0x466a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27864));
    // 0x466a90: 0x24e76dc8  addiu       $a3, $a3, 0x6DC8
    ctx->pc = 0x466a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28104));
    // 0x466a94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x466a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a98: 0xc120d9a  jal         func_483668
    ctx->pc = 0x466A98u;
    SET_GPR_U32(ctx, 31, 0x466AA0u);
    ctx->pc = 0x466A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466A98u;
    // 0x466a9c: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x466A98u, 0x466AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466AA0u;
label_466aa0:
    // 0x466aa0: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x466aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x466aa4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x466aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x466aa8: 0xae02e680  sw          $v0, -0x1980($s0)
    ctx->pc = 0x466aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x52E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52E680u, _value); } while (0);
    // 0x466aac: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x466aacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x466ab0: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x466ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x466ab4: 0x2610e680  addiu       $s0, $s0, -0x1980
    ctx->pc = 0x466ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960768));
    // 0x466ab8: 0x25086f00  addiu       $t0, $t0, 0x6F00
    ctx->pc = 0x466ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28416));
    // 0x466abc: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x466abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x466ac0: 0x24e76ee0  addiu       $a3, $a3, 0x6EE0
    ctx->pc = 0x466ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28384));
    // 0x466ac4: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x466ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x466ac8: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x466AC8u;
    SET_GPR_U32(ctx, 31, 0x466AD0u);
    ctx->pc = 0x466ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466AC8u;
    // 0x466acc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x466AC8u, 0x466AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466AD0u;
label_466ad0:
    // 0x466ad0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x466ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x466ad4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x466ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x466ad8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x466ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x466adc: 0x24c67120  addiu       $a2, $a2, 0x7120
    ctx->pc = 0x466adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28960));
    // 0x466ae0: 0x24e77128  addiu       $a3, $a3, 0x7128
    ctx->pc = 0x466ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28968));
    // 0x466ae4: 0x24a56790  addiu       $a1, $a1, 0x6790
    ctx->pc = 0x466ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26512));
    // 0x466ae8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x466ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x466aec: 0xc11a9f6  jal         func_46A7D8
    ctx->pc = 0x466AECu;
    SET_GPR_U32(ctx, 31, 0x466AF4u);
    ctx->pc = 0x466AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466AECu;
    // 0x466af0: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A7D8u, 0x466AECu, 0x466AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466AF4u;
label_466af4:
    // 0x466af4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x466af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x466af8: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x466af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x466afc: 0xc11aa04  jal         func_46A810
    ctx->pc = 0x466AFCu;
    SET_GPR_U32(ctx, 31, 0x466B04u);
    ctx->pc = 0x466B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466AFCu;
    // 0x466b00: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A810u, 0x466AFCu, 0x466B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B04u;
label_466b04:
    // 0x466b04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x466b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x466b08: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x466b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x466b0c: 0xc11aa0e  jal         func_46A838
    ctx->pc = 0x466B0Cu;
    SET_GPR_U32(ctx, 31, 0x466B14u);
    ctx->pc = 0x466B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466B0Cu;
    // 0x466b10: 0x24a56ff0  addiu       $a1, $a1, 0x6FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A838u, 0x466B0Cu, 0x466B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B14u;
label_466b14:
    // 0x466b14: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x466b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x466b18: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x466b18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x466b1c: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x466b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x466b20: 0x24c66e38  addiu       $a2, $a2, 0x6E38
    ctx->pc = 0x466b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28216));
    // 0x466b24: 0x24e76e50  addiu       $a3, $a3, 0x6E50
    ctx->pc = 0x466b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28240));
    // 0x466b28: 0x25086ec0  addiu       $t0, $t0, 0x6EC0
    ctx->pc = 0x466b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28352));
    // 0x466b2c: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x466b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x466b30: 0xc11b046  jal         func_46C118
    ctx->pc = 0x466B30u;
    SET_GPR_U32(ctx, 31, 0x466B38u);
    ctx->pc = 0x466B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466B30u;
    // 0x466b34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C118u, 0x466B30u, 0x466B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B38u;
label_466b38:
    // 0x466b38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x466b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x466b3c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x466b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x466b40: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x466b40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x466b44: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x466b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x466b48: 0x24a56648  addiu       $a1, $a1, 0x6648
    ctx->pc = 0x466b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26184));
    // 0x466b4c: 0x24c66518  addiu       $a2, $a2, 0x6518
    ctx->pc = 0x466b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25880));
    // 0x466b50: 0x24e77090  addiu       $a3, $a3, 0x7090
    ctx->pc = 0x466b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28816));
    // 0x466b54: 0xc11b058  jal         func_46C160
    ctx->pc = 0x466B54u;
    SET_GPR_U32(ctx, 31, 0x466B5Cu);
    ctx->pc = 0x466B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466B54u;
    // 0x466b58: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C160u, 0x466B54u, 0x466B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B5Cu;
label_466b5c:
    // 0x466b5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x466b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466b68: 0x3e00008  jr          $ra
    ctx->pc = 0x466B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466B68u;
        // 0x466b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466B70u;
}
