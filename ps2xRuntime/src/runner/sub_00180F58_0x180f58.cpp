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

// Function: sub_00180F58
// Address: 0x180f58 - 0x1810c0
void sub_00180F58_0x180f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F58_0x180f58");
#endif

    switch (ctx->pc) {
        case 0x180f58u: goto label_180f58;
        case 0x180f5cu: goto label_180f5c;
        case 0x180f60u: goto label_180f60;
        case 0x180f64u: goto label_180f64;
        case 0x180f68u: goto label_180f68;
        case 0x180f6cu: goto label_180f6c;
        case 0x180f70u: goto label_180f70;
        case 0x180f74u: goto label_180f74;
        case 0x180f78u: goto label_180f78;
        case 0x180f7cu: goto label_180f7c;
        case 0x180f80u: goto label_180f80;
        case 0x180f84u: goto label_180f84;
        case 0x180f88u: goto label_180f88;
        case 0x180f8cu: goto label_180f8c;
        case 0x180f90u: goto label_180f90;
        case 0x180f94u: goto label_180f94;
        case 0x180f98u: goto label_180f98;
        case 0x180f9cu: goto label_180f9c;
        case 0x180fa0u: goto label_180fa0;
        case 0x180fa4u: goto label_180fa4;
        case 0x180fa8u: goto label_180fa8;
        case 0x180facu: goto label_180fac;
        case 0x180fb0u: goto label_180fb0;
        case 0x180fb4u: goto label_180fb4;
        case 0x180fb8u: goto label_180fb8;
        case 0x180fbcu: goto label_180fbc;
        case 0x180fc0u: goto label_180fc0;
        case 0x180fc4u: goto label_180fc4;
        case 0x180fc8u: goto label_180fc8;
        case 0x180fccu: goto label_180fcc;
        case 0x180fd0u: goto label_180fd0;
        case 0x180fd4u: goto label_180fd4;
        case 0x180fd8u: goto label_180fd8;
        case 0x180fdcu: goto label_180fdc;
        case 0x180fe0u: goto label_180fe0;
        case 0x180fe4u: goto label_180fe4;
        case 0x180fe8u: goto label_180fe8;
        case 0x180fecu: goto label_180fec;
        case 0x180ff0u: goto label_180ff0;
        case 0x180ff4u: goto label_180ff4;
        case 0x180ff8u: goto label_180ff8;
        case 0x180ffcu: goto label_180ffc;
        case 0x181000u: goto label_181000;
        case 0x181004u: goto label_181004;
        case 0x181008u: goto label_181008;
        case 0x18100cu: goto label_18100c;
        case 0x181010u: goto label_181010;
        case 0x181014u: goto label_181014;
        case 0x181018u: goto label_181018;
        case 0x18101cu: goto label_18101c;
        case 0x181020u: goto label_181020;
        case 0x181024u: goto label_181024;
        case 0x181028u: goto label_181028;
        case 0x18102cu: goto label_18102c;
        case 0x181030u: goto label_181030;
        case 0x181034u: goto label_181034;
        case 0x181038u: goto label_181038;
        case 0x18103cu: goto label_18103c;
        case 0x181040u: goto label_181040;
        case 0x181044u: goto label_181044;
        case 0x181048u: goto label_181048;
        case 0x18104cu: goto label_18104c;
        case 0x181050u: goto label_181050;
        case 0x181054u: goto label_181054;
        case 0x181058u: goto label_181058;
        case 0x18105cu: goto label_18105c;
        case 0x181060u: goto label_181060;
        case 0x181064u: goto label_181064;
        case 0x181068u: goto label_181068;
        case 0x18106cu: goto label_18106c;
        case 0x181070u: goto label_181070;
        case 0x181074u: goto label_181074;
        case 0x181078u: goto label_181078;
        case 0x18107cu: goto label_18107c;
        case 0x181080u: goto label_181080;
        case 0x181084u: goto label_181084;
        case 0x181088u: goto label_181088;
        case 0x18108cu: goto label_18108c;
        case 0x181090u: goto label_181090;
        case 0x181094u: goto label_181094;
        case 0x181098u: goto label_181098;
        case 0x18109cu: goto label_18109c;
        case 0x1810a0u: goto label_1810a0;
        case 0x1810a4u: goto label_1810a4;
        case 0x1810a8u: goto label_1810a8;
        case 0x1810acu: goto label_1810ac;
        case 0x1810b0u: goto label_1810b0;
        case 0x1810b4u: goto label_1810b4;
        case 0x1810b8u: goto label_1810b8;
        case 0x1810bcu: goto label_1810bc;
        default: break;
    }

    ctx->pc = 0x180f58u;

label_180f58:
    // 0x180f58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_180f5c:
    // 0x180f5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x180f5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180f60:
    // 0x180f60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x180f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_180f64:
    // 0x180f64: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x180f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_180f68:
    // 0x180f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_180f6c:
    // 0x180f6c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x180f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_180f70:
    // 0x180f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180f74:
    // 0x180f74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_180f78:
    // 0x180f78: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x180f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_180f7c:
    // 0x180f7c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x180f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_180f80:
    // 0x180f80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x180f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180f84:
    // 0x180f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180f88:
    // 0x180f88: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_180f8c:
    // 0x180f8c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x180f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_180f90:
    // 0x180f90: 0xc0604b4  jal         func_1812D0
label_180f94:
    if (ctx->pc == 0x180F94u) {
        ctx->pc = 0x180F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F90u;
        // 0x180f94: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180F98u;
        goto label_180f98;
    }
    ctx->pc = 0x180F90u;
    SET_GPR_U32(ctx, 31, 0x180F98u);
    ctx->pc = 0x180F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F90u;
    // 0x180f94: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812D0u, 0x180F90u, 0x180F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F98u;
label_180f98:
    // 0x180f98: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_180f9c:
    // 0x180f9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180fa0:
    // 0x180fa0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x180fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_180fa4:
    // 0x180fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180fa8:
    // 0x180fa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180fac:
    // 0x180fac: 0xc063a78  jal         func_18E9E0
label_180fb0:
    if (ctx->pc == 0x180FB0u) {
        ctx->pc = 0x180FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FACu;
        // 0x180fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FB4u;
        goto label_180fb4;
    }
    ctx->pc = 0x180FACu;
    SET_GPR_U32(ctx, 31, 0x180FB4u);
    ctx->pc = 0x180FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FACu;
    // 0x180fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x180FACu, 0x180FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FB4u;
label_180fb4:
    // 0x180fb4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_180fb8:
    // 0x180fb8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_180fbc:
    if (ctx->pc == 0x180FBCu) {
        ctx->pc = 0x180FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FB8u;
        // 0x180fbc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FC0u;
        goto label_180fc0;
    }
    ctx->pc = 0x180FB8u;
    {
        const bool branch_taken_0x180fb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FB8u;
        // 0x180fbc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fb8) {
            ctx->pc = 0x180FD8u;
            goto label_180fd8;
        }
    }
    ctx->pc = 0x180FC0u;
label_180fc0:
    // 0x180fc0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_180fc4:
    // 0x180fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180fc8:
    // 0x180fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180fcc:
    // 0x180fcc: 0xc063a78  jal         func_18E9E0
label_180fd0:
    if (ctx->pc == 0x180FD0u) {
        ctx->pc = 0x180FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FCCu;
        // 0x180fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FD4u;
        goto label_180fd4;
    }
    ctx->pc = 0x180FCCu;
    SET_GPR_U32(ctx, 31, 0x180FD4u);
    ctx->pc = 0x180FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FCCu;
    // 0x180fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x180FCCu, 0x180FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FD4u;
label_180fd4:
    // 0x180fd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x180fd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180fd8:
    // 0x180fd8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x180fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_180fdc:
    // 0x180fdc: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x180fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_180fe0:
    // 0x180fe0: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x180fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_180fe4:
    // 0x180fe4: 0x8e85b9b8  lw          $a1, -0x4648($s4)
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949304)));
label_180fe8:
    // 0x180fe8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x180fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_180fec:
    // 0x180fec: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x180fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_180ff0:
    // 0x180ff0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x180ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_180ff4:
    // 0x180ff4: 0x60f809  jalr        $v1
label_180ff8:
    if (ctx->pc == 0x180FF8u) {
        ctx->pc = 0x180FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FF4u;
        // 0x180ff8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FFCu;
        goto label_180ffc;
    }
    ctx->pc = 0x180FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180FFCu);
        ctx->pc = 0x180FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FF4u;
        // 0x180ff8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FF4u, 0x180FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180FFCu;
label_180ffc:
    // 0x180ffc: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x180ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_181000:
    // 0x181000: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_181004:
    // 0x181004: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_181008:
    // 0x181008: 0x24a52520  addiu       $a1, $a1, 0x2520
    ctx->pc = 0x181008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9504));
label_18100c:
    // 0x18100c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_181010:
    // 0x181010: 0x250824e8  addiu       $t0, $t0, 0x24E8
    ctx->pc = 0x181010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9448));
label_181014:
    // 0x181014: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181018:
    // 0x181018: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x181018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18101c:
    // 0x18101c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_181020:
    // 0x181020: 0x240904f9  addiu       $t1, $zero, 0x4F9
    ctx->pc = 0x181020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1273));
label_181024:
    // 0x181024: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x181024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_181028:
    // 0x181028: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x181028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18102c:
    // 0x18102c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_181030:
    // 0x181030: 0x40f809  jalr        $v0
label_181034:
    if (ctx->pc == 0x181034u) {
        ctx->pc = 0x181034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181030u;
        // 0x181034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181038u;
        goto label_181038;
    }
    ctx->pc = 0x181030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181038u);
        ctx->pc = 0x181034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181030u;
        // 0x181034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181030u, 0x181038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181038u;
label_181038:
    // 0x181038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18103c:
    // 0x18103c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_181040:
    if (ctx->pc == 0x181040u) {
        ctx->pc = 0x181040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18103Cu;
        // 0x181040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181044u;
        goto label_181044;
    }
    ctx->pc = 0x18103Cu;
    {
        const bool branch_taken_0x18103c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x181040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18103Cu;
        // 0x181040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18103c) {
            ctx->pc = 0x18105Cu;
            goto label_18105c;
        }
    }
    ctx->pc = 0x181044u;
label_181044:
    // 0x181044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181048:
    // 0x181048: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x181048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18104c:
    // 0x18104c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x18104cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_181050:
    // 0x181050: 0xc05febe  jal         func_17FAF8
label_181054:
    if (ctx->pc == 0x181054u) {
        ctx->pc = 0x181054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181050u;
        // 0x181054: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181058u;
        goto label_181058;
    }
    ctx->pc = 0x181050u;
    SET_GPR_U32(ctx, 31, 0x181058u);
    ctx->pc = 0x181054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181050u;
    // 0x181054: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAF8u, 0x181050u, 0x181058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181058u;
label_181058:
    // 0x181058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18105c:
    // 0x18105c: 0x8e2327e4  lw          $v1, 0x27E4($s1)
    ctx->pc = 0x18105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_181060:
    // 0x181060: 0x8e85b9b8  lw          $a1, -0x4648($s4)
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949304)));
label_181064:
    // 0x181064: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_181068:
    // 0x181068: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x181068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18106c:
    // 0x18106c: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x18106cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_181070:
    // 0x181070: 0xc0f809  jalr        $a2
label_181074:
    if (ctx->pc == 0x181074u) {
        ctx->pc = 0x181074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181070u;
        // 0x181074: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181078u;
        goto label_181078;
    }
    ctx->pc = 0x181070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x181078u);
        ctx->pc = 0x181074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181070u;
        // 0x181074: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181070u, 0x181078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181078u;
label_181078:
    // 0x181078: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x181078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18107c:
    // 0x18107c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18107cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181080:
    // 0x181080: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_181084:
    // 0x181084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_181088:
    // 0x181088: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x181088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18108c:
    // 0x18108c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x18108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_181090:
    // 0x181090: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_181094:
    // 0x181094: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181098:
    // 0x181098: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x181098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18109c:
    // 0x18109c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18109cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1810a0:
    // 0x1810a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1810a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1810a4:
    // 0x1810a4: 0x3e00008  jr          $ra
label_1810a8:
    if (ctx->pc == 0x1810A8u) {
        ctx->pc = 0x1810A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810A4u;
        // 0x1810a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1810ACu;
        goto label_1810ac;
    }
    ctx->pc = 0x1810A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810A4u;
        // 0x1810a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1810A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1810ACu;
label_1810ac:
    // 0x1810ac: 0x0  nop
    ctx->pc = 0x1810acu;
    // NOP
label_1810b0:
    // 0x1810b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1810b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1810b4:
    // 0x1810b4: 0x0  nop
    ctx->pc = 0x1810b4u;
    // NOP
label_1810b8:
    // 0x1810b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1810bc:
    // 0x1810bc: 0x0  nop
    ctx->pc = 0x1810bcu;
    // NOP
    ctx->pc = 0x1810c0u;
}
