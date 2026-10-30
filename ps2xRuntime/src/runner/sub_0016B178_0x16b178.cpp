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

// Function: sub_0016B178
// Address: 0x16b178 - 0x16b280
void sub_0016B178_0x16b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B178_0x16b178");
#endif

    switch (ctx->pc) {
        case 0x16b1d8u: goto label_16b1d8;
        case 0x16b1e8u: goto label_16b1e8;
        case 0x16b1f8u: goto label_16b1f8;
        case 0x16b208u: goto label_16b208;
        case 0x16b218u: goto label_16b218;
        case 0x16b228u: goto label_16b228;
        case 0x16b238u: goto label_16b238;
        case 0x16b248u: goto label_16b248;
        default: break;
    }

    ctx->pc = 0x16b178u;

    // 0x16b178: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16b178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16b17c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x16b180: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x16b184: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x16b184u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x16b188: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x16b18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b190: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16b190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b194: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x16b198: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16b19c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x16b19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16b1a0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x16b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x16b1a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16b1a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1a8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x16b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x16b1ac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x16b1acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1b0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x16b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x16b1b4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x16b1b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1b8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x16b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x16b1bc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x16b1bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1c0: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x16b1c4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x16b1c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1c8: 0x8fbe00a0  lw          $fp, 0xA0($sp)
    ctx->pc = 0x16b1c8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b1d0: 0xc059120  jal         func_164480
    ctx->pc = 0x16B1D0u;
    SET_GPR_U32(ctx, 31, 0x16B1D8u);
    ctx->pc = 0x16B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1D0u;
    // 0x16b1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164480u, 0x16B1D0u, 0x16B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1D8u;
label_16b1d8:
    // 0x16b1d8: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b1dc: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x16b1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x16b1e0: 0xc05912c  jal         func_1644B0
    ctx->pc = 0x16B1E0u;
    SET_GPR_U32(ctx, 31, 0x16B1E8u);
    ctx->pc = 0x16B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1E0u;
    // 0x16b1e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644B0u, 0x16B1E0u, 0x16B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1E8u;
label_16b1e8:
    // 0x16b1e8: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b1ec: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x16b1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x16b1f0: 0xc059138  jal         func_1644E0
    ctx->pc = 0x16B1F0u;
    SET_GPR_U32(ctx, 31, 0x16B1F8u);
    ctx->pc = 0x16B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1F0u;
    // 0x16b1f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644E0u, 0x16B1F0u, 0x16B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1F8u;
label_16b1f8:
    // 0x16b1f8: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b1fc: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x16b1fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x16b200: 0xc059144  jal         func_164510
    ctx->pc = 0x16B200u;
    SET_GPR_U32(ctx, 31, 0x16B208u);
    ctx->pc = 0x16B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B200u;
    // 0x16b204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164510u, 0x16B200u, 0x16B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B208u;
label_16b208:
    // 0x16b208: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b20c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x16b20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b210: 0xc059174  jal         func_1645D0
    ctx->pc = 0x16B210u;
    SET_GPR_U32(ctx, 31, 0x16B218u);
    ctx->pc = 0x16B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B210u;
    // 0x16b214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645D0u, 0x16B210u, 0x16B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B218u;
label_16b218:
    // 0x16b218: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b21c: 0x32c600ff  andi        $a2, $s6, 0xFF
    ctx->pc = 0x16b21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x16b220: 0xc059150  jal         func_164540
    ctx->pc = 0x16B220u;
    SET_GPR_U32(ctx, 31, 0x16B228u);
    ctx->pc = 0x16B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B220u;
    // 0x16b224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164540u, 0x16B220u, 0x16B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B228u;
label_16b228:
    // 0x16b228: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b22c: 0x32e600ff  andi        $a2, $s7, 0xFF
    ctx->pc = 0x16b22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x16b230: 0xc05915c  jal         func_164570
    ctx->pc = 0x16B230u;
    SET_GPR_U32(ctx, 31, 0x16B238u);
    ctx->pc = 0x16B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B230u;
    // 0x16b234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164570u, 0x16B230u, 0x16B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B238u;
label_16b238:
    // 0x16b238: 0x8e04caa8  lw          $a0, -0x3558($s0)
    ctx->pc = 0x16b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953640)));
    // 0x16b23c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b240: 0xc059168  jal         func_1645A0
    ctx->pc = 0x16B240u;
    SET_GPR_U32(ctx, 31, 0x16B248u);
    ctx->pc = 0x16B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B240u;
    // 0x16b244: 0x33c600ff  andi        $a2, $fp, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645A0u, 0x16B240u, 0x16B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B248u;
label_16b248:
    // 0x16b248: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16b248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b24c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16b24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b250: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16b250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b254: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16b254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b258: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16b258u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b25c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x16b25cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b260: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16b260u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b264: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x16b264u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b268: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x16b268u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b270: 0x3e00008  jr          $ra
    ctx->pc = 0x16B270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B270u;
        // 0x16b274: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B278u;
    // 0x16b278: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b27c: 0x0  nop
    ctx->pc = 0x16b27cu;
    // NOP
    ctx->pc = 0x16b280u;
}
