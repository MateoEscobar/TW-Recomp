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

// Function: sub_00452E60
// Address: 0x452e60 - 0x4533b8
void sub_00452E60_0x452e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452E60_0x452e60");
#endif

    switch (ctx->pc) {
        case 0x452f20u: goto label_452f20;
        case 0x452f48u: goto label_452f48;
        case 0x452f60u: goto label_452f60;
        case 0x452f84u: goto label_452f84;
        case 0x453184u: goto label_453184;
        case 0x453338u: goto label_453338;
        case 0x453380u: goto label_453380;
        default: break;
    }

    ctx->pc = 0x452e60u;

    // 0x452e60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x452e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x452e64: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x452e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x452e68: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x452e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x452e6c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x452e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x452e70: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x452e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x452e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x452e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452e78: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x452e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x452e7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x452e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452e80: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x452e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x452e84: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x452e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x452e88: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x452e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x452e8c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x452e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x452e90: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x452e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x452e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x452e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x452e98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x452e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x452e9c: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x452e9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x452ea0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x452ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x452ea4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x452ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x452ea8: 0x8c73ad18  lw          $s3, -0x52E8($v1)
    ctx->pc = 0x452ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x70AD18u));
    // 0x452eac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452eb0: 0x24a50214  addiu       $a1, $a1, 0x214
    ctx->pc = 0x452eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 532));
    // 0x452eb4: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x452eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x452eb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x452eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x452ebc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x452ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x452ec0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x452ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x452ec4: 0x8c94009c  lw          $s4, 0x9C($a0)
    ctx->pc = 0x452ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x452ec8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x452ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x452ecc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x452ECCu;
    {
        const bool branch_taken_0x452ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x452ecc) {
            ctx->pc = 0x452ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x452ECCu;
            // 0x452ed0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x452ED4u;
            goto label_452ed4;
        }
    }
    ctx->pc = 0x452ED4u;
label_452ed4:
    // 0x452ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x452ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x452ed8: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x452ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x452edc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x452edcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x452ee0: 0x8812  mflo        $s1
    ctx->pc = 0x452ee0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x452ee4: 0x1486000e  bne         $a0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x452EE4u;
    {
        const bool branch_taken_0x452ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x452EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452EE4u;
        // 0x452ee8: 0x8e770060  lw          $s7, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452ee4) {
            ctx->pc = 0x452F20u;
            goto label_452f20;
        }
    }
    ctx->pc = 0x452EECu;
    // 0x452eec: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x452eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x452ef0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x452ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452ef4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x452ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x452ef8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x452ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x452efc: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x452EFCu;
    {
        const bool branch_taken_0x452efc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x452efc) {
            ctx->pc = 0x452F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x452EFCu;
            // 0x452f00: 0xac71001c  sw          $s1, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x452F14u;
            goto label_452f14;
        }
    }
    ctx->pc = 0x452F04u;
    // 0x452f04: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x452f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x452f08: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x452F08u;
    {
        const bool branch_taken_0x452f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x452F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452F08u;
        // 0x452f0c: 0x8f828418  lw          $v0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452f08) {
            ctx->pc = 0x452F24u;
            goto label_452f24;
        }
    }
    ctx->pc = 0x452F10u;
    // 0x452f10: 0xac71001c  sw          $s1, 0x1C($v1)
    ctx->pc = 0x452f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
label_452f14:
    // 0x452f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x452f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452f18: 0xc11d3ae  jal         func_474EB8
    ctx->pc = 0x452F18u;
    SET_GPR_U32(ctx, 31, 0x452F20u);
    ctx->pc = 0x452F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452F18u;
    // 0x452f1c: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x474EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474EB8u, 0x452F18u, 0x452F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F20u;
label_452f20:
    // 0x452f20: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x452f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_452f24:
    // 0x452f24: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x452f24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452f28: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x452f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x452f2c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x452f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452f30: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x452f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x452f34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452f38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x452f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452f3c: 0x3a80a  movz        $s5, $zero, $v1
    ctx->pc = 0x452f3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x452f40: 0xc114438  jal         func_4510E0
    ctx->pc = 0x452F40u;
    SET_GPR_U32(ctx, 31, 0x452F48u);
    ctx->pc = 0x452F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452F40u;
    // 0x452f44: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4510E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4510E0u, 0x452F40u, 0x452F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F48u;
label_452f48:
    // 0x452f48: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x452f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x452f4c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x452f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x452f50: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x452f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x452f54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x452f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x452f58: 0xc114462  jal         func_451188
    ctx->pc = 0x452F58u;
    SET_GPR_U32(ctx, 31, 0x452F60u);
    ctx->pc = 0x452F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452F58u;
    // 0x452f5c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x451188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451188u, 0x452F58u, 0x452F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F60u;
label_452f60:
    // 0x452f60: 0xde8200b8  ld          $v0, 0xB8($s4)
    ctx->pc = 0x452f60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x452f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x452f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452f68: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x452f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x452f6c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x452f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x452f70: 0xde8300c8  ld          $v1, 0xC8($s4)
    ctx->pc = 0x452f70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x452f74: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x452f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x452f78: 0xde8200c0  ld          $v0, 0xC0($s4)
    ctx->pc = 0x452f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x452f7c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x452F7Cu;
    SET_GPR_U32(ctx, 31, 0x452F84u);
    ctx->pc = 0x452F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452F7Cu;
    // 0x452f80: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x452F7Cu, 0x452F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F84u;
label_452f84:
    // 0x452f84: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x452F84u;
    {
        const bool branch_taken_0x452f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452F84u;
        // 0x452f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452f84) {
            ctx->pc = 0x453384u;
            goto label_453384;
        }
    }
    ctx->pc = 0x452F8Cu;
    // 0x452f8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x452f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x452f90: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x452f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x452f94: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x452f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x452f98: 0x346303c6  ori         $v1, $v1, 0x3C6
    ctx->pc = 0x452f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)966);
    // 0x452f9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x452f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x452fa0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x452fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x452fa4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x452fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x452fa8: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x452fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x452fac: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x452facu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x452fb0: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x452fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x452fb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x452fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x452fb8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x452fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x452fbc: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x452fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x452fc0: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x452fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x452fc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x452fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x452fc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x452fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x452fcc: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x452fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x452fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x452fd4: 0xc6620070  lwc1        $f2, 0x70($s3)
    ctx->pc = 0x452fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x452fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x452fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x452fdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x452fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x452fe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x452fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x452fe4: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x452fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x452fe8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x452fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x452fec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x452fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x452ff0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452ff0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452ff4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x452ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x452ff8: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x452ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x452ffc: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x452ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x453000: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x453000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x453004: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x453004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x453008: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x453008u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45300c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45300cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x453010: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x453010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x453014: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x453014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x453018: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x453018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x45301c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x45301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x453020: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x453020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453024: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x453024u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x453028: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x453028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x45302c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x45302cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x453030: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x453030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x453034: 0x2484f7d0  addiu       $a0, $a0, -0x830
    ctx->pc = 0x453034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x453038: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x453038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x45303c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x45303cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7D0u));
    // 0x453040: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x453040u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x453044: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x453044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x453048: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x453048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x45304c: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x45304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
    // 0x453050: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x453050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x453054: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x453054u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7E0u));
    // 0x453058: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x453058u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x45305c: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x45305cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x453060: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x453060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x453064: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x453064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x453068: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x453068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45306c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x453070: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x453070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453074: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x453074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x453078: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x453078u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x45307c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x45307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x453080: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x453080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453084: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x453084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x453088: 0x154938  dsll        $t1, $s5, 4
    ctx->pc = 0x453088u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << 4);
    // 0x45308c: 0x8ca400b4  lw          $a0, 0xB4($a1)
    ctx->pc = 0x45308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x453090: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x453090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x453094: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x453094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x453098: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x453098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x45309c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x45309cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x4530a0: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x4530a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x4530a4: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x4530a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x4530a8: 0x24080412  addiu       $t0, $zero, 0x412
    ctx->pc = 0x4530a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x4530ac: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x4530acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x4530b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4530b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4530b4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4530b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4530b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4530b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4530bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4530bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4530c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4530c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4530c4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x4530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x4530c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4530c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4530cc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x4530ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4530d0: 0x71041389  pcpyld      $v0, $t0, $a0
    ctx->pc = 0x4530d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x4530d4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x4530d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x4530d8: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x4530d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x4530dc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4530dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4530e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4530e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4530e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4530e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4530e8: 0x34848005  ori         $a0, $a0, 0x8005
    ctx->pc = 0x4530e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32773);
    // 0x4530ec: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4530ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4530f0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x4530f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4530f4: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x4530f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x4530f8: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x4530f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4530fc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4530fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x453100: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x453100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x453104: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x453104u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453108: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x453108u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x45310c: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x45310cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x453110: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x453110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x453114: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x453114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x453118: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x453118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x45311c: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x45311cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x453120: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x453120u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x453124: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x453124u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x453128: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x453128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x45312c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x45312cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x453130: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x453130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x453134: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x453134u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453138: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x453138u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x45313c: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x45313cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x453140: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x453140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x453144: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x453144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x453148: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x453148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x45314c: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x45314cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x453150: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x453150u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x453154: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x453154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x453158: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x453158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x45315c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x45315cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x453160: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x453160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x453164: 0xdf8286e8  ld          $v0, -0x7918($gp)
    ctx->pc = 0x453164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x453168: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x453168u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x45316c: 0x7cc20090  sq          $v0, 0x90($a2)
    ctx->pc = 0x45316cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 2));
    // 0x453170: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x453170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x453174: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x453174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x453178: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x453178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45317c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x45317Cu;
    SET_GPR_U32(ctx, 31, 0x453184u);
    ctx->pc = 0x453180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45317Cu;
    // 0x453180: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x45317Cu, 0x453184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453184u;
label_453184:
    // 0x453184: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x453184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x453188: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x453188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x45318c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45318cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453190: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x453190u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x453194: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x453194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x453198: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x453198u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x45319c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x45319cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4531a0: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x4531a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x4531a4: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x4531a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x4531a8: 0x346303fb  ori         $v1, $v1, 0x3FB
    ctx->pc = 0x4531a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1019);
    // 0x4531ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4531acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4531b0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4531b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x4531b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4531b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4531b8: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x4531b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x4531bc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4531bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4531c0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4531c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4531c4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x4531c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4531c8: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x4531c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4531cc: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x4531CCu;
    {
        const bool branch_taken_0x4531cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4531D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4531CCu;
        // 0x4531d0: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4531cc) {
            ctx->pc = 0x4531D8u;
            goto label_4531d8;
        }
    }
    ctx->pc = 0x4531D4u;
    // 0x4531d4: 0xc7858024  lwc1        $f5, -0x7FDC($gp)
    ctx->pc = 0x4531d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4531d8:
    // 0x4531d8: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x4531d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x4531dc: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x4531dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x4531e0: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x4531e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x4531e4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4531e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4531e8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4531e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4531ec: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x4531ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x4531f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4531f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4531f4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4531f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4531f8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4531f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4531fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4531fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x453200: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x453200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453204: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x453204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x453208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x453208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x45320c: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x45320cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x453210: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x453210u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x453214: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x453214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x453218: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x453218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x45321c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x45321cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x453220: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x453220u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x453224: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x453224u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x453228: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x453228u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x45322c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x45322cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x453230: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x453230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x453234: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x453234u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x453238: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x453238u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x45323c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x45323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x453240: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x453240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x453244: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x453244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x453248: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x453248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45324c: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x45324Cu;
    {
        const bool branch_taken_0x45324c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x453250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45324Cu;
        // 0x453250: 0x8f828418  lw          $v0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45324c) {
            ctx->pc = 0x453270u;
            goto label_453270;
        }
    }
    ctx->pc = 0x453254u;
    // 0x453254: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x453254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x453258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x453258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45325c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x45325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x453260: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x453260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x453264: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x453264u;
    {
        const bool branch_taken_0x453264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x453264) {
            ctx->pc = 0x453268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453264u;
            // 0x453268: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x453288u;
            goto label_453288;
        }
    }
    ctx->pc = 0x45326Cu;
    // 0x45326c: 0x0  nop
    ctx->pc = 0x45326cu;
    // NOP
label_453270:
    // 0x453270: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x453270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x453274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x453274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x453278: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x453278u;
    {
        const bool branch_taken_0x453278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453278) {
            ctx->pc = 0x45327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453278u;
            // 0x45327c: 0xa205002b  sb          $a1, 0x2B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45329Cu;
            goto label_45329c;
        }
    }
    ctx->pc = 0x453280u;
    // 0x453280: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x453280u;
    {
        const bool branch_taken_0x453280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453280u;
        // 0x453284: 0xa200002b  sb          $zero, 0x2B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453280) {
            ctx->pc = 0x45329Cu;
            goto label_45329c;
        }
    }
    ctx->pc = 0x453288u;
label_453288:
    // 0x453288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x453288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x45328c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x45328Cu;
    {
        const bool branch_taken_0x45328c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x453290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45328Cu;
        // 0x453290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45328c) {
            ctx->pc = 0x453298u;
            goto label_453298;
        }
    }
    ctx->pc = 0x453294u;
    // 0x453294: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x453294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_453298:
    // 0x453298: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x453298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
label_45329c:
    // 0x45329c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x45329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4532a0: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x4532a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x4532a4: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x4532a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4532a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4532a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4532ac: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x4532acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x4532b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4532b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4532b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4532b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4532b8: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x4532B8u;
    {
        const bool branch_taken_0x4532b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4532BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4532B8u;
        // 0x4532bc: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4532b8) {
            ctx->pc = 0x4532E8u;
            goto label_4532e8;
        }
    }
    ctx->pc = 0x4532C0u;
    // 0x4532c0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x4532c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x4532c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4532c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4532c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4532c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4532cc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x4532ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4532d0: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x4532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4532d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4532d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4532d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4532d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4532dc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4532dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4532e0: 0xaf858784  sw          $a1, -0x787C($gp)
    ctx->pc = 0x4532e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 5));
    // 0x4532e4: 0x0  nop
    ctx->pc = 0x4532e4u;
    // NOP
label_4532e8:
    // 0x4532e8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4532e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4532ec: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x4532ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x4532f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4532f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4532f4: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x4532f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x4532f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4532f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4532fc: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x4532fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x453300: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x453300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x453304: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x453304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x453308: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x453308u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x45330c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x45330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x453310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x453310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x453314: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x453314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x453318: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x453318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x45331c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x45331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x453320: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x453320u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x453324: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x453324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x453328: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x453328u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x45332c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x45332cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x453330: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x453330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x453334: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x453334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_453338:
    // 0x453338: 0x42000039  di
    ctx->pc = 0x453338u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45333c: 0x40f  sync.p
    ctx->pc = 0x45333cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x453340: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x453340u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x453344: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x453344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x453348: 0x0  nop
    ctx->pc = 0x453348u;
    // NOP
    // 0x45334c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45334Cu;
    {
        const bool branch_taken_0x45334c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45334c) {
            ctx->pc = 0x453338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_453338;
        }
    }
    ctx->pc = 0x453354u;
    // 0x453354: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x453354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x453358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x453358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x45335c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x45335cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x453360: 0x42000038  ei
    ctx->pc = 0x453360u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x453364: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x453364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x453368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x453368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45336c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x45336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x453370: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x453370u;
    {
        const bool branch_taken_0x453370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x453374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453370u;
        // 0x453374: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453370) {
            ctx->pc = 0x453380u;
            goto label_453380;
        }
    }
    ctx->pc = 0x453378u;
    // 0x453378: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x453378u;
    SET_GPR_U32(ctx, 31, 0x453380u);
    ctx->pc = 0x45337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453378u;
    // 0x45337c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x453378u, 0x453380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453380u;
label_453380:
    // 0x453380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x453380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453384:
    // 0x453384: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x453384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x453388: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x453388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45338c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x45338cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x453390: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x453390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x453394: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x453394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x453398: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x453398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45339c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45339cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4533a0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4533a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4533a4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4533a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4533a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4533a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4533ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4533ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4533B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4533ACu;
        // 0x4533b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4533ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4533B4u;
    // 0x4533b4: 0x0  nop
    ctx->pc = 0x4533b4u;
    // NOP
    ctx->pc = 0x4533b8u;
}
