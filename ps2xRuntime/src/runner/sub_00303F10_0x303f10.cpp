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

// Function: sub_00303F10
// Address: 0x303f10 - 0x304030
void sub_00303F10_0x303f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303F10_0x303f10");
#endif

    switch (ctx->pc) {
        case 0x303f28u: goto label_303f28;
        case 0x303f3cu: goto label_303f3c;
        case 0x303f84u: goto label_303f84;
        case 0x303f94u: goto label_303f94;
        case 0x303fd8u: goto label_303fd8;
        case 0x303fecu: goto label_303fec;
        case 0x303ff4u: goto label_303ff4;
        case 0x30400cu: goto label_30400c;
        default: break;
    }

    ctx->pc = 0x303f10u;

    // 0x303f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x303f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x303f14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x303f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x303f18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x303f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x303f1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303f20: 0xc0a3eba  jal         func_28FAE8
    ctx->pc = 0x303F20u;
    SET_GPR_U32(ctx, 31, 0x303F28u);
    ctx->pc = 0x303F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F20u;
    // 0x303f24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE8u, 0x303F20u, 0x303F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F28u;
label_303f28:
    // 0x303f28: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x303f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x303f2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x303F2Cu;
    {
        const bool branch_taken_0x303f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f2c) {
            ctx->pc = 0x303F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F2Cu;
            // 0x303f30: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303F48u;
            goto label_303f48;
        }
    }
    ctx->pc = 0x303F34u;
    // 0x303f34: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x303F34u;
    SET_GPR_U32(ctx, 31, 0x303F3Cu);
    ctx->pc = 0x303F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F34u;
    // 0x303f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x303F34u, 0x303F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F3Cu;
label_303f3c:
    // 0x303f3c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303F3Cu;
    {
        const bool branch_taken_0x303f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f3c) {
            ctx->pc = 0x303F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F3Cu;
            // 0x303f40: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303F44u;
            goto label_303f44;
        }
    }
    ctx->pc = 0x303F44u;
label_303f44:
    // 0x303f44: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x303f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_303f48:
    // 0x303f48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x303f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x303f4c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303F4Cu;
    {
        const bool branch_taken_0x303f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f4c) {
            ctx->pc = 0x303F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F4Cu;
            // 0x303f50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x303F54u;
            goto label_303f54;
        }
    }
    ctx->pc = 0x303F54u;
label_303f54:
    // 0x303f54: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x303f54u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x303f58: 0x1810  mfhi        $v1
    ctx->pc = 0x303f58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x303f5c: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x303F5Cu;
    {
        const bool branch_taken_0x303f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303f5c) {
            ctx->pc = 0x303F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F5Cu;
            // 0x303f60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30401Cu;
            goto label_30401c;
        }
    }
    ctx->pc = 0x303F64u;
    // 0x303f64: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x303f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x303f68: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x303F68u;
    {
        const bool branch_taken_0x303f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f68) {
            ctx->pc = 0x303F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F68u;
            // 0x303f6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30401Cu;
            goto label_30401c;
        }
    }
    ctx->pc = 0x303F70u;
    // 0x303f70: 0x92020265  lbu         $v0, 0x265($s0)
    ctx->pc = 0x303f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 613)));
    // 0x303f74: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x303F74u;
    {
        const bool branch_taken_0x303f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f74) {
            ctx->pc = 0x303F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F74u;
            // 0x303f78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30401Cu;
            goto label_30401c;
        }
    }
    ctx->pc = 0x303F7Cu;
    // 0x303f7c: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x303F7Cu;
    SET_GPR_U32(ctx, 31, 0x303F84u);
    ctx->pc = 0x303F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F7Cu;
    // 0x303f80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x303F7Cu, 0x303F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F84u;
label_303f84:
    // 0x303f84: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x303F84u;
    {
        const bool branch_taken_0x303f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303f84) {
            ctx->pc = 0x303F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F84u;
            // 0x303f88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30401Cu;
            goto label_30401c;
        }
    }
    ctx->pc = 0x303F8Cu;
    // 0x303f8c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x303F8Cu;
    SET_GPR_U32(ctx, 31, 0x303F94u);
    ctx->pc = 0x303F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F8Cu;
    // 0x303f90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x303F8Cu, 0x303F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F94u;
label_303f94:
    // 0x303f94: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x303F94u;
    {
        const bool branch_taken_0x303f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303f94) {
            ctx->pc = 0x303F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F94u;
            // 0x303f98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30401Cu;
            goto label_30401c;
        }
    }
    ctx->pc = 0x303F9Cu;
    // 0x303f9c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x303f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x303fa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x303fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303fa4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x303fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x303fa8: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x303fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
    // 0x303fac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x303facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x303fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x303fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x303fb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x303fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303fb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x303fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x303fbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x303fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fc0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x303fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x303fc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303fc8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x303fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303fcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x303fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fd0: 0xc0a757c  jal         func_29D5F0
    ctx->pc = 0x303FD0u;
    SET_GPR_U32(ctx, 31, 0x303FD8u);
    ctx->pc = 0x303FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FD0u;
    // 0x303fd4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x303FD0u, 0x303FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FD8u;
label_303fd8:
    // 0x303fd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x303fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fdc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x303FDCu;
    {
        const bool branch_taken_0x303fdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FDCu;
        // 0x303fe0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fdc) {
            ctx->pc = 0x304010u;
            goto label_304010;
        }
    }
    ctx->pc = 0x303FE4u;
    // 0x303fe4: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x303FE4u;
    SET_GPR_U32(ctx, 31, 0x303FECu);
    ctx->pc = 0x303FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FE4u;
    // 0x303fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x303FE4u, 0x303FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FECu;
label_303fec:
    // 0x303fec: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x303FECu;
    SET_GPR_U32(ctx, 31, 0x303FF4u);
    ctx->pc = 0x303FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FECu;
    // 0x303ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x303FECu, 0x303FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FF4u;
label_303ff4:
    // 0x303ff4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303FF4u;
    {
        const bool branch_taken_0x303ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FF4u;
        // 0x303ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ff4) {
            ctx->pc = 0x30400Cu;
            goto label_30400c;
        }
    }
    ctx->pc = 0x303FFCu;
    // 0x303ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304000: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x304000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304004: 0xc0bebe6  jal         func_2FAF98
    ctx->pc = 0x304004u;
    SET_GPR_U32(ctx, 31, 0x30400Cu);
    ctx->pc = 0x304008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304004u;
    // 0x304008: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x304004u, 0x30400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30400Cu;
label_30400c:
    // 0x30400c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_304010:
    // 0x304010: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x304014: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x304014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x304018: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x304018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30401c:
    // 0x30401c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30401cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304024: 0x3e00008  jr          $ra
    ctx->pc = 0x304024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304024u;
        // 0x304028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30402Cu;
    // 0x30402c: 0x0  nop
    ctx->pc = 0x30402cu;
    // NOP
    ctx->pc = 0x304030u;
}
