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

// Function: sub_0043BD88
// Address: 0x43bd88 - 0x43be28
void sub_0043BD88_0x43bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BD88_0x43bd88");
#endif

    switch (ctx->pc) {
        case 0x43bdb8u: goto label_43bdb8;
        case 0x43bdd0u: goto label_43bdd0;
        case 0x43bddcu: goto label_43bddc;
        case 0x43bde8u: goto label_43bde8;
        case 0x43bdf0u: goto label_43bdf0;
        case 0x43bdf8u: goto label_43bdf8;
        case 0x43be08u: goto label_43be08;
        default: break;
    }

    ctx->pc = 0x43bd88u;

    // 0x43bd88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x43bd8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43bd8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43bd90: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x43bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x517214u));
    // 0x43bd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43bd98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x43BD98u;
    {
        const bool branch_taken_0x43bd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BD98u;
        // 0x43bd9c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd98) {
            ctx->pc = 0x43BDC0u;
            goto label_43bdc0;
        }
    }
    ctx->pc = 0x43BDA0u;
    // 0x43bda0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x43bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x43bda4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43bda8: 0xac627260  sw          $v0, 0x7260($v1)
    ctx->pc = 0x43bda8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x517260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x517260u, _value); } while (0);
    // 0x43bdac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x43bdacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x43bdb0: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x43BDB0u;
    SET_GPR_U32(ctx, 31, 0x43BDB8u);
    ctx->pc = 0x43BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BDB0u;
    // 0x43bdb4: 0x8e047220  lw          $a0, 0x7220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x43BDB0u, 0x43BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BDB8u;
label_43bdb8:
    // 0x43bdb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43BDB8u;
    {
        const bool branch_taken_0x43bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BDB8u;
        // 0x43bdbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bdb8) {
            ctx->pc = 0x43BDC8u;
            goto label_43bdc8;
        }
    }
    ctx->pc = 0x43BDC0u;
label_43bdc0:
    // 0x43bdc0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x43bdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x43bdc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_43bdc8:
    // 0x43bdc8: 0xc10f42c  jal         func_43D0B0
    ctx->pc = 0x43BDC8u;
    SET_GPR_U32(ctx, 31, 0x43BDD0u);
    ctx->pc = 0x43BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BDC8u;
    // 0x43bdcc: 0x8c447228  lw          $a0, 0x7228($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0B0u, 0x43BDC8u, 0x43BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BDD0u;
label_43bdd0:
    // 0x43bdd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x43bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x43bdd4: 0xc10f42c  jal         func_43D0B0
    ctx->pc = 0x43BDD4u;
    SET_GPR_U32(ctx, 31, 0x43BDDCu);
    ctx->pc = 0x43BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BDD4u;
    // 0x43bdd8: 0x8c64722c  lw          $a0, 0x722C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0B0u, 0x43BDD4u, 0x43BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BDDCu;
label_43bddc:
    // 0x43bddc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x43bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x43bde0: 0xc10f42c  jal         func_43D0B0
    ctx->pc = 0x43BDE0u;
    SET_GPR_U32(ctx, 31, 0x43BDE8u);
    ctx->pc = 0x43BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BDE0u;
    // 0x43bde4: 0x8c647230  lw          $a0, 0x7230($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0B0u, 0x43BDE0u, 0x43BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BDE8u;
label_43bde8:
    // 0x43bde8: 0xc10f42c  jal         func_43D0B0
    ctx->pc = 0x43BDE8u;
    SET_GPR_U32(ctx, 31, 0x43BDF0u);
    ctx->pc = 0x43BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BDE8u;
    // 0x43bdec: 0x8e047220  lw          $a0, 0x7220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0B0u, 0x43BDE8u, 0x43BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BDF0u;
label_43bdf0:
    // 0x43bdf0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43BDF0u;
    SET_GPR_U32(ctx, 31, 0x43BDF8u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43BDF0u, 0x43BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BDF8u;
label_43bdf8:
    // 0x43bdf8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x43bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x43bdfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43bdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be00: 0xc10ff44  jal         func_43FD10
    ctx->pc = 0x43BE00u;
    SET_GPR_U32(ctx, 31, 0x43BE08u);
    ctx->pc = 0x43BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BE00u;
    // 0x43be04: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FD10u, 0x43BE00u, 0x43BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BE08u;
label_43be08:
    // 0x43be08: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43BE08u;
    {
        const bool branch_taken_0x43be08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE08u;
        // 0x43be0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43be08) {
            ctx->pc = 0x43BE1Cu;
            goto label_43be1c;
        }
    }
    ctx->pc = 0x43BE10u;
    // 0x43be10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43be10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43be14: 0x8110cc4  j           func_443310
    ctx->pc = 0x43BE14u;
    ctx->pc = 0x43BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BE14u;
    // 0x43be18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    sub_00443310_0x443310(rdram, ctx, runtime); return;
    ctx->pc = 0x43BE1Cu;
label_43be1c:
    // 0x43be1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43be1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43be20: 0x3e00008  jr          $ra
    ctx->pc = 0x43BE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE20u;
        // 0x43be24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BE28u;
}
