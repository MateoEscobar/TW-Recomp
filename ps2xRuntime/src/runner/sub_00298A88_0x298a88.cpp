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

// Function: sub_00298A88
// Address: 0x298a88 - 0x298d68
void sub_00298A88_0x298a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298A88_0x298a88");
#endif

    switch (ctx->pc) {
        case 0x298a88u: goto label_298a88;
        case 0x298a8cu: goto label_298a8c;
        case 0x298a90u: goto label_298a90;
        case 0x298a94u: goto label_298a94;
        case 0x298a98u: goto label_298a98;
        case 0x298a9cu: goto label_298a9c;
        case 0x298aa0u: goto label_298aa0;
        case 0x298aa4u: goto label_298aa4;
        case 0x298aa8u: goto label_298aa8;
        case 0x298aacu: goto label_298aac;
        case 0x298ab0u: goto label_298ab0;
        case 0x298ab4u: goto label_298ab4;
        case 0x298ab8u: goto label_298ab8;
        case 0x298abcu: goto label_298abc;
        case 0x298ac0u: goto label_298ac0;
        case 0x298ac4u: goto label_298ac4;
        case 0x298ac8u: goto label_298ac8;
        case 0x298accu: goto label_298acc;
        case 0x298ad0u: goto label_298ad0;
        case 0x298ad4u: goto label_298ad4;
        case 0x298ad8u: goto label_298ad8;
        case 0x298adcu: goto label_298adc;
        case 0x298ae0u: goto label_298ae0;
        case 0x298ae4u: goto label_298ae4;
        case 0x298ae8u: goto label_298ae8;
        case 0x298aecu: goto label_298aec;
        case 0x298af0u: goto label_298af0;
        case 0x298af4u: goto label_298af4;
        case 0x298af8u: goto label_298af8;
        case 0x298afcu: goto label_298afc;
        case 0x298b00u: goto label_298b00;
        case 0x298b04u: goto label_298b04;
        case 0x298b08u: goto label_298b08;
        case 0x298b0cu: goto label_298b0c;
        case 0x298b10u: goto label_298b10;
        case 0x298b14u: goto label_298b14;
        case 0x298b18u: goto label_298b18;
        case 0x298b1cu: goto label_298b1c;
        case 0x298b20u: goto label_298b20;
        case 0x298b24u: goto label_298b24;
        case 0x298b28u: goto label_298b28;
        case 0x298b2cu: goto label_298b2c;
        case 0x298b30u: goto label_298b30;
        case 0x298b34u: goto label_298b34;
        case 0x298b38u: goto label_298b38;
        case 0x298b3cu: goto label_298b3c;
        case 0x298b40u: goto label_298b40;
        case 0x298b44u: goto label_298b44;
        case 0x298b48u: goto label_298b48;
        case 0x298b4cu: goto label_298b4c;
        case 0x298b50u: goto label_298b50;
        case 0x298b54u: goto label_298b54;
        case 0x298b58u: goto label_298b58;
        case 0x298b5cu: goto label_298b5c;
        case 0x298b60u: goto label_298b60;
        case 0x298b64u: goto label_298b64;
        case 0x298b68u: goto label_298b68;
        case 0x298b6cu: goto label_298b6c;
        case 0x298b70u: goto label_298b70;
        case 0x298b74u: goto label_298b74;
        case 0x298b78u: goto label_298b78;
        case 0x298b7cu: goto label_298b7c;
        case 0x298b80u: goto label_298b80;
        case 0x298b84u: goto label_298b84;
        case 0x298b88u: goto label_298b88;
        case 0x298b8cu: goto label_298b8c;
        case 0x298b90u: goto label_298b90;
        case 0x298b94u: goto label_298b94;
        case 0x298b98u: goto label_298b98;
        case 0x298b9cu: goto label_298b9c;
        case 0x298ba0u: goto label_298ba0;
        case 0x298ba4u: goto label_298ba4;
        case 0x298ba8u: goto label_298ba8;
        case 0x298bacu: goto label_298bac;
        case 0x298bb0u: goto label_298bb0;
        case 0x298bb4u: goto label_298bb4;
        case 0x298bb8u: goto label_298bb8;
        case 0x298bbcu: goto label_298bbc;
        case 0x298bc0u: goto label_298bc0;
        case 0x298bc4u: goto label_298bc4;
        case 0x298bc8u: goto label_298bc8;
        case 0x298bccu: goto label_298bcc;
        case 0x298bd0u: goto label_298bd0;
        case 0x298bd4u: goto label_298bd4;
        case 0x298bd8u: goto label_298bd8;
        case 0x298bdcu: goto label_298bdc;
        case 0x298be0u: goto label_298be0;
        case 0x298be4u: goto label_298be4;
        case 0x298be8u: goto label_298be8;
        case 0x298becu: goto label_298bec;
        case 0x298bf0u: goto label_298bf0;
        case 0x298bf4u: goto label_298bf4;
        case 0x298bf8u: goto label_298bf8;
        case 0x298bfcu: goto label_298bfc;
        case 0x298c00u: goto label_298c00;
        case 0x298c04u: goto label_298c04;
        case 0x298c08u: goto label_298c08;
        case 0x298c0cu: goto label_298c0c;
        case 0x298c10u: goto label_298c10;
        case 0x298c14u: goto label_298c14;
        case 0x298c18u: goto label_298c18;
        case 0x298c1cu: goto label_298c1c;
        case 0x298c20u: goto label_298c20;
        case 0x298c24u: goto label_298c24;
        case 0x298c28u: goto label_298c28;
        case 0x298c2cu: goto label_298c2c;
        case 0x298c30u: goto label_298c30;
        case 0x298c34u: goto label_298c34;
        case 0x298c38u: goto label_298c38;
        case 0x298c3cu: goto label_298c3c;
        case 0x298c40u: goto label_298c40;
        case 0x298c44u: goto label_298c44;
        case 0x298c48u: goto label_298c48;
        case 0x298c4cu: goto label_298c4c;
        case 0x298c50u: goto label_298c50;
        case 0x298c54u: goto label_298c54;
        case 0x298c58u: goto label_298c58;
        case 0x298c5cu: goto label_298c5c;
        case 0x298c60u: goto label_298c60;
        case 0x298c64u: goto label_298c64;
        case 0x298c68u: goto label_298c68;
        case 0x298c6cu: goto label_298c6c;
        case 0x298c70u: goto label_298c70;
        case 0x298c74u: goto label_298c74;
        case 0x298c78u: goto label_298c78;
        case 0x298c7cu: goto label_298c7c;
        case 0x298c80u: goto label_298c80;
        case 0x298c84u: goto label_298c84;
        case 0x298c88u: goto label_298c88;
        case 0x298c8cu: goto label_298c8c;
        case 0x298c90u: goto label_298c90;
        case 0x298c94u: goto label_298c94;
        case 0x298c98u: goto label_298c98;
        case 0x298c9cu: goto label_298c9c;
        case 0x298ca0u: goto label_298ca0;
        case 0x298ca4u: goto label_298ca4;
        case 0x298ca8u: goto label_298ca8;
        case 0x298cacu: goto label_298cac;
        case 0x298cb0u: goto label_298cb0;
        case 0x298cb4u: goto label_298cb4;
        case 0x298cb8u: goto label_298cb8;
        case 0x298cbcu: goto label_298cbc;
        case 0x298cc0u: goto label_298cc0;
        case 0x298cc4u: goto label_298cc4;
        case 0x298cc8u: goto label_298cc8;
        case 0x298cccu: goto label_298ccc;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298cd8u: goto label_298cd8;
        case 0x298cdcu: goto label_298cdc;
        case 0x298ce0u: goto label_298ce0;
        case 0x298ce4u: goto label_298ce4;
        case 0x298ce8u: goto label_298ce8;
        case 0x298cecu: goto label_298cec;
        case 0x298cf0u: goto label_298cf0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298cf8u: goto label_298cf8;
        case 0x298cfcu: goto label_298cfc;
        case 0x298d00u: goto label_298d00;
        case 0x298d04u: goto label_298d04;
        case 0x298d08u: goto label_298d08;
        case 0x298d0cu: goto label_298d0c;
        case 0x298d10u: goto label_298d10;
        case 0x298d14u: goto label_298d14;
        case 0x298d18u: goto label_298d18;
        case 0x298d1cu: goto label_298d1c;
        case 0x298d20u: goto label_298d20;
        case 0x298d24u: goto label_298d24;
        case 0x298d28u: goto label_298d28;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d30u: goto label_298d30;
        case 0x298d34u: goto label_298d34;
        case 0x298d38u: goto label_298d38;
        case 0x298d3cu: goto label_298d3c;
        case 0x298d40u: goto label_298d40;
        case 0x298d44u: goto label_298d44;
        case 0x298d48u: goto label_298d48;
        case 0x298d4cu: goto label_298d4c;
        case 0x298d50u: goto label_298d50;
        case 0x298d54u: goto label_298d54;
        case 0x298d58u: goto label_298d58;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d60u: goto label_298d60;
        case 0x298d64u: goto label_298d64;
        default: break;
    }

    ctx->pc = 0x298a88u;

label_298a88:
    // 0x298a88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x298a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_298a8c:
    // 0x298a8c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x298a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_298a90:
    // 0x298a90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x298a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298a94:
    // 0x298a94: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x298a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_298a98:
    // 0x298a98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x298a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_298a9c:
    // 0x298a9c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x298a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_298aa0:
    // 0x298aa0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x298aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_298aa4:
    // 0x298aa4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x298aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_298aa8:
    // 0x298aa8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x298aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_298aac:
    // 0x298aac: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x298aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_298ab0:
    // 0x298ab0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_298ab4:
    // 0x298ab4: 0xc0a5a72  jal         func_2969C8
label_298ab8:
    if (ctx->pc == 0x298AB8u) {
        ctx->pc = 0x298AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AB4u;
        // 0x298ab8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298ABCu;
        goto label_298abc;
    }
    ctx->pc = 0x298AB4u;
    SET_GPR_U32(ctx, 31, 0x298ABCu);
    ctx->pc = 0x298AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AB4u;
    // 0x298ab8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298AB4u, 0x298ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298ABCu;
label_298abc:
    // 0x298abc: 0x8684000c  lh          $a0, 0xC($s4)
    ctx->pc = 0x298abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_298ac0:
    // 0x298ac0: 0xc0e402c  jal         func_3900B0
label_298ac4:
    if (ctx->pc == 0x298AC4u) {
        ctx->pc = 0x298AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AC0u;
        // 0x298ac4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298AC8u;
        goto label_298ac8;
    }
    ctx->pc = 0x298AC0u;
    SET_GPR_U32(ctx, 31, 0x298AC8u);
    ctx->pc = 0x298AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AC0u;
    // 0x298ac4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x298AC0u, 0x298AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AC8u;
label_298ac8:
    // 0x298ac8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x298ac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298acc:
    // 0x298acc: 0x12c00081  beqz        $s6, . + 4 + (0x81 << 2)
label_298ad0:
    if (ctx->pc == 0x298AD0u) {
        ctx->pc = 0x298AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298ACCu;
        // 0x298ad0: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298AD4u;
        goto label_298ad4;
    }
    ctx->pc = 0x298ACCu;
    {
        const bool branch_taken_0x298acc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x298AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298ACCu;
        // 0x298ad0: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298acc) {
            ctx->pc = 0x298CD4u;
            goto label_298cd4;
        }
    }
    ctx->pc = 0x298AD4u;
label_298ad4:
    // 0x298ad4: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x298ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
label_298ad8:
    // 0x298ad8: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x298ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_298adc:
    // 0x298adc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298ae0:
    // 0x298ae0: 0x26d30090  addiu       $s3, $s6, 0x90
    ctx->pc = 0x298ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_298ae4:
    // 0x298ae4: 0xc12e34c  jal         func_4B8D30
label_298ae8:
    if (ctx->pc == 0x298AE8u) {
        ctx->pc = 0x298AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AE4u;
        // 0x298ae8: 0x26170284  addiu       $s7, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298AECu;
        goto label_298aec;
    }
    ctx->pc = 0x298AE4u;
    SET_GPR_U32(ctx, 31, 0x298AECu);
    ctx->pc = 0x298AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AE4u;
    // 0x298ae8: 0x26170284  addiu       $s7, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x298AE4u, 0x298AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AECu;
label_298aec:
    // 0x298aec: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x298aecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_298af0:
    // 0x298af0: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x298af0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_298af4:
    // 0x298af4: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x298af4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_298af8:
    // 0x298af8: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x298af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_298afc:
    // 0x298afc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x298afcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_298b00:
    // 0x298b00: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x298b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_298b04:
    // 0x298b04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_298b08:
    // 0x298b08: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x298b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_298b0c:
    // 0x298b0c: 0xc0cd8c2  jal         func_336308
label_298b10:
    if (ctx->pc == 0x298B10u) {
        ctx->pc = 0x298B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B0Cu;
        // 0x298b10: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B14u;
        goto label_298b14;
    }
    ctx->pc = 0x298B0Cu;
    SET_GPR_U32(ctx, 31, 0x298B14u);
    ctx->pc = 0x298B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B0Cu;
    // 0x298b10: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x298B0Cu, 0x298B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B14u;
label_298b14:
    // 0x298b14: 0x86700002  lh          $s0, 0x2($s3)
    ctx->pc = 0x298b14u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_298b18:
    // 0x298b18: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x298b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_298b1c:
    // 0x298b1c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x298b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_298b20:
    // 0x298b20: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x298b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_298b24:
    // 0x298b24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298b28:
    // 0x298b28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x298b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_298b2c:
    // 0x298b2c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x298b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_298b30:
    // 0x298b30: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x298b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_298b34:
    // 0x298b34: 0xc136b24  jal         func_4DAC90
label_298b38:
    if (ctx->pc == 0x298B38u) {
        ctx->pc = 0x298B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B34u;
        // 0x298b38: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B3Cu;
        goto label_298b3c;
    }
    ctx->pc = 0x298B34u;
    SET_GPR_U32(ctx, 31, 0x298B3Cu);
    ctx->pc = 0x298B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B34u;
    // 0x298b38: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x298B34u, 0x298B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B3Cu;
label_298b3c:
    // 0x298b3c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x298b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_298b40:
    // 0x298b40: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x298b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298b44:
    // 0x298b44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x298b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_298b48:
    // 0x298b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298b4c:
    // 0x298b4c: 0xc136b18  jal         func_4DAC60
label_298b50:
    if (ctx->pc == 0x298B50u) {
        ctx->pc = 0x298B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B4Cu;
        // 0x298b50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B54u;
        goto label_298b54;
    }
    ctx->pc = 0x298B4Cu;
    SET_GPR_U32(ctx, 31, 0x298B54u);
    ctx->pc = 0x298B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B4Cu;
    // 0x298b50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298B4Cu, 0x298B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B54u;
label_298b54:
    // 0x298b54: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x298b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_298b58:
    // 0x298b58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x298b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_298b5c:
    // 0x298b5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x298b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_298b60:
    // 0x298b60: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x298b60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_298b64:
    // 0x298b64: 0x86660002  lh          $a2, 0x2($s3)
    ctx->pc = 0x298b64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_298b68:
    // 0x298b68: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x298b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_298b6c:
    // 0x298b6c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x298b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_298b70:
    // 0x298b70: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x298b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_298b74:
    // 0x298b74: 0xc136afa  jal         func_4DABE8
label_298b78:
    if (ctx->pc == 0x298B78u) {
        ctx->pc = 0x298B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B74u;
        // 0x298b78: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B7Cu;
        goto label_298b7c;
    }
    ctx->pc = 0x298B74u;
    SET_GPR_U32(ctx, 31, 0x298B7Cu);
    ctx->pc = 0x298B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B74u;
    // 0x298b78: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x298B74u, 0x298B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B7Cu;
label_298b7c:
    // 0x298b7c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x298b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_298b80:
    // 0x298b80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x298b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_298b84:
    // 0x298b84: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x298b84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_298b88:
    // 0x298b88: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x298b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_298b8c:
    // 0x298b8c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x298b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_298b90:
    // 0x298b90: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x298b90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_298b94:
    // 0x298b94: 0x4a0003bf  vwaitq
    ctx->pc = 0x298b94u;
    // VWAITQ (Q already resolved in this runtime)
label_298b98:
    // 0x298b98: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x298b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_298b9c:
    // 0x298b9c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x298b9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_298ba0:
    // 0x298ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_298ba4:
    // 0x298ba4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x298ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_298ba8:
    // 0x298ba8: 0xc0a5a72  jal         func_2969C8
label_298bac:
    if (ctx->pc == 0x298BACu) {
        ctx->pc = 0x298BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BA8u;
        // 0x298bac: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BB0u;
        goto label_298bb0;
    }
    ctx->pc = 0x298BA8u;
    SET_GPR_U32(ctx, 31, 0x298BB0u);
    ctx->pc = 0x298BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BA8u;
    // 0x298bac: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298BA8u, 0x298BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BB0u;
label_298bb0:
    // 0x298bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298bb4:
    // 0x298bb4: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x298bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_298bb8:
    // 0x298bb8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_298bbc:
    if (ctx->pc == 0x298BBCu) {
        ctx->pc = 0x298BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BB8u;
        // 0x298bbc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BC0u;
        goto label_298bc0;
    }
    ctx->pc = 0x298BB8u;
    {
        const bool branch_taken_0x298bb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BB8u;
        // 0x298bbc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bb8) {
            ctx->pc = 0x298BCCu;
            goto label_298bcc;
        }
    }
    ctx->pc = 0x298BC0u;
label_298bc0:
    // 0x298bc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298bc4:
    // 0x298bc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_298bc8:
    if (ctx->pc == 0x298BC8u) {
        ctx->pc = 0x298BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BC4u;
        // 0x298bc8: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BCCu;
        goto label_298bcc;
    }
    ctx->pc = 0x298BC4u;
    {
        const bool branch_taken_0x298bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BC4u;
        // 0x298bc8: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bc4) {
            ctx->pc = 0x298BD0u;
            goto label_298bd0;
        }
    }
    ctx->pc = 0x298BCCu;
label_298bcc:
    // 0x298bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298bd0:
    // 0x298bd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_298bd4:
    if (ctx->pc == 0x298BD4u) {
        ctx->pc = 0x298BD8u;
        goto label_298bd8;
    }
    ctx->pc = 0x298BD0u;
    {
        const bool branch_taken_0x298bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298bd0) {
            ctx->pc = 0x298C18u;
            goto label_298c18;
        }
    }
    ctx->pc = 0x298BD8u;
label_298bd8:
    // 0x298bd8: 0xc0a5a72  jal         func_2969C8
label_298bdc:
    if (ctx->pc == 0x298BDCu) {
        ctx->pc = 0x298BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BD8u;
        // 0x298bdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BE0u;
        goto label_298be0;
    }
    ctx->pc = 0x298BD8u;
    SET_GPR_U32(ctx, 31, 0x298BE0u);
    ctx->pc = 0x298BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BD8u;
    // 0x298bdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298BD8u, 0x298BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BE0u;
label_298be0:
    // 0x298be0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298be4:
    // 0x298be4: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x298be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_298be8:
    // 0x298be8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_298bec:
    if (ctx->pc == 0x298BECu) {
        ctx->pc = 0x298BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BE8u;
        // 0x298bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BF0u;
        goto label_298bf0;
    }
    ctx->pc = 0x298BE8u;
    {
        const bool branch_taken_0x298be8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BE8u;
        // 0x298bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298be8) {
            ctx->pc = 0x298BFCu;
            goto label_298bfc;
        }
    }
    ctx->pc = 0x298BF0u;
label_298bf0:
    // 0x298bf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_298bf4:
    // 0x298bf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298bf8:
    // 0x298bf8: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x298bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_298bfc:
    // 0x298bfc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x298bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_298c00:
    // 0x298c00: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_298c04:
    // 0x298c04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x298c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_298c08:
    // 0x298c08: 0x40f809  jalr        $v0
label_298c0c:
    if (ctx->pc == 0x298C0Cu) {
        ctx->pc = 0x298C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C08u;
        // 0x298c0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C10u;
        goto label_298c10;
    }
    ctx->pc = 0x298C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x298C10u);
        ctx->pc = 0x298C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C08u;
        // 0x298c0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C08u, 0x298C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298C10u;
label_298c10:
    // 0x298c10: 0x38420071  xori        $v0, $v0, 0x71
    ctx->pc = 0x298c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)113);
label_298c14:
    // 0x298c14: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x298c14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_298c18:
    // 0x298c18: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
label_298c1c:
    if (ctx->pc == 0x298C1Cu) {
        ctx->pc = 0x298C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C18u;
        // 0x298c1c: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C20u;
        goto label_298c20;
    }
    ctx->pc = 0x298C18u;
    {
        const bool branch_taken_0x298c18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C18u;
        // 0x298c1c: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c18) {
            ctx->pc = 0x298C4Cu;
            goto label_298c4c;
        }
    }
    ctx->pc = 0x298C20u;
label_298c20:
    // 0x298c20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_298c24:
    if (ctx->pc == 0x298C24u) {
        ctx->pc = 0x298C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C20u;
        // 0x298c24: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C28u;
        goto label_298c28;
    }
    ctx->pc = 0x298C20u;
    {
        const bool branch_taken_0x298c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C20u;
        // 0x298c24: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c20) {
            ctx->pc = 0x298C50u;
            goto label_298c50;
        }
    }
    ctx->pc = 0x298C28u;
label_298c28:
    // 0x298c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_298c2c:
    // 0x298c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298c30:
    // 0x298c30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_298c34:
    // 0x298c34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x298c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_298c38:
    // 0x298c38: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x298c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_298c3c:
    // 0x298c3c: 0xc0a6800  jal         func_29A000
label_298c40:
    if (ctx->pc == 0x298C40u) {
        ctx->pc = 0x298C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C3Cu;
        // 0x298c40: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C44u;
        goto label_298c44;
    }
    ctx->pc = 0x298C3Cu;
    SET_GPR_U32(ctx, 31, 0x298C44u);
    ctx->pc = 0x298C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C3Cu;
    // 0x298c40: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x298C3Cu, 0x298C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C44u;
label_298c44:
    // 0x298c44: 0x10000039  b           . + 4 + (0x39 << 2)
label_298c48:
    if (ctx->pc == 0x298C48u) {
        ctx->pc = 0x298C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C44u;
        // 0x298c48: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C4Cu;
        goto label_298c4c;
    }
    ctx->pc = 0x298C44u;
    {
        const bool branch_taken_0x298c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C44u;
        // 0x298c48: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c44) {
            ctx->pc = 0x298D2Cu;
            goto label_298d2c;
        }
    }
    ctx->pc = 0x298C4Cu;
label_298c4c:
    // 0x298c4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298c50:
    // 0x298c50: 0x10550008  beq         $v0, $s5, . + 4 + (0x8 << 2)
label_298c54:
    if (ctx->pc == 0x298C54u) {
        ctx->pc = 0x298C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C50u;
        // 0x298c54: 0x26a20002  addiu       $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C58u;
        goto label_298c58;
    }
    ctx->pc = 0x298C50u;
    {
        const bool branch_taken_0x298c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x298C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C50u;
        // 0x298c54: 0x26a20002  addiu       $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c50) {
            ctx->pc = 0x298C74u;
            goto label_298c74;
        }
    }
    ctx->pc = 0x298C58u;
label_298c58:
    // 0x298c58: 0x9283000f  lbu         $v1, 0xF($s4)
    ctx->pc = 0x298c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_298c5c:
    // 0x298c5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_298c60:
    if (ctx->pc == 0x298C60u) {
        ctx->pc = 0x298C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C5Cu;
        // 0x298c60: 0x26a20004  addiu       $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C64u;
        goto label_298c64;
    }
    ctx->pc = 0x298C5Cu;
    {
        const bool branch_taken_0x298c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C5Cu;
        // 0x298c60: 0x26a20004  addiu       $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c5c) {
            ctx->pc = 0x298C6Cu;
            goto label_298c6c;
        }
    }
    ctx->pc = 0x298C64u;
label_298c64:
    // 0x298c64: 0x10000004  b           . + 4 + (0x4 << 2)
label_298c68:
    if (ctx->pc == 0x298C68u) {
        ctx->pc = 0x298C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C64u;
        // 0x298c68: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C6Cu;
        goto label_298c6c;
    }
    ctx->pc = 0x298C64u;
    {
        const bool branch_taken_0x298c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C64u;
        // 0x298c68: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c64) {
            ctx->pc = 0x298C78u;
            goto label_298c78;
        }
    }
    ctx->pc = 0x298C6Cu;
label_298c6c:
    // 0x298c6c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_298c70:
    if (ctx->pc == 0x298C70u) {
        ctx->pc = 0x298C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C6Cu;
        // 0x298c70: 0x26a20006  addiu       $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C74u;
        goto label_298c74;
    }
    ctx->pc = 0x298C6Cu;
    {
        const bool branch_taken_0x298c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C6Cu;
        // 0x298c70: 0x26a20006  addiu       $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c6c) {
            ctx->pc = 0x298CC0u;
            goto label_298cc0;
        }
    }
    ctx->pc = 0x298C74u;
label_298c74:
    // 0x298c74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x298c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_298c78:
    // 0x298c78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x298c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_298c7c:
    // 0x298c7c: 0xc136b24  jal         func_4DAC90
label_298c80:
    if (ctx->pc == 0x298C80u) {
        ctx->pc = 0x298C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C7Cu;
        // 0x298c80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C84u;
        goto label_298c84;
    }
    ctx->pc = 0x298C7Cu;
    SET_GPR_U32(ctx, 31, 0x298C84u);
    ctx->pc = 0x298C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C7Cu;
    // 0x298c80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x298C7Cu, 0x298C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C84u;
label_298c84:
    // 0x298c84: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x298c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_298c88:
    // 0x298c88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x298c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_298c8c:
    // 0x298c8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298c90:
    // 0x298c90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x298c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298c94:
    // 0x298c94: 0xc136b18  jal         func_4DAC60
label_298c98:
    if (ctx->pc == 0x298C98u) {
        ctx->pc = 0x298C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C94u;
        // 0x298c98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C9Cu;
        goto label_298c9c;
    }
    ctx->pc = 0x298C94u;
    SET_GPR_U32(ctx, 31, 0x298C9Cu);
    ctx->pc = 0x298C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C94u;
    // 0x298c98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298C94u, 0x298C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C9Cu;
label_298c9c:
    // 0x298c9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x298c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_298ca0:
    // 0x298ca0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298ca4:
    // 0x298ca4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_298ca8:
    // 0x298ca8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x298ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_298cac:
    // 0x298cac: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x298cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_298cb0:
    // 0x298cb0: 0xc0a67ca  jal         func_299F28
label_298cb4:
    if (ctx->pc == 0x298CB4u) {
        ctx->pc = 0x298CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CB0u;
        // 0x298cb4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CB8u;
        goto label_298cb8;
    }
    ctx->pc = 0x298CB0u;
    SET_GPR_U32(ctx, 31, 0x298CB8u);
    ctx->pc = 0x298CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CB0u;
    // 0x298cb4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x298CB0u, 0x298CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CB8u;
label_298cb8:
    // 0x298cb8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_298cbc:
    if (ctx->pc == 0x298CBCu) {
        ctx->pc = 0x298CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CB8u;
        // 0x298cbc: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CC0u;
        goto label_298cc0;
    }
    ctx->pc = 0x298CB8u;
    {
        const bool branch_taken_0x298cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CB8u;
        // 0x298cbc: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cb8) {
            ctx->pc = 0x298D2Cu;
            goto label_298d2c;
        }
    }
    ctx->pc = 0x298CC0u;
label_298cc0:
    // 0x298cc0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_298cc4:
    if (ctx->pc == 0x298CC4u) {
        ctx->pc = 0x298CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC0u;
        // 0x298cc4: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CC8u;
        goto label_298cc8;
    }
    ctx->pc = 0x298CC0u;
    {
        const bool branch_taken_0x298cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC0u;
        // 0x298cc4: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cc0) {
            ctx->pc = 0x298CE4u;
            goto label_298ce4;
        }
    }
    ctx->pc = 0x298CC8u;
label_298cc8:
    // 0x298cc8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x298cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_298ccc:
    // 0x298ccc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_298cd0:
    if (ctx->pc == 0x298CD0u) {
        ctx->pc = 0x298CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CCCu;
        // 0x298cd0: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CD4u;
        goto label_298cd4;
    }
    ctx->pc = 0x298CCCu;
    {
        const bool branch_taken_0x298ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298ccc) {
            ctx->pc = 0x298CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298CCCu;
            // 0x298cd0: 0x9282000f  lbu         $v0, 0xF($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D2Cu;
            goto label_298d2c;
        }
    }
    ctx->pc = 0x298CD4u;
label_298cd4:
    // 0x298cd4: 0xc0a5d78  jal         func_2975E0
label_298cd8:
    if (ctx->pc == 0x298CD8u) {
        ctx->pc = 0x298CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CD4u;
        // 0x298cd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CDCu;
        goto label_298cdc;
    }
    ctx->pc = 0x298CD4u;
    SET_GPR_U32(ctx, 31, 0x298CDCu);
    ctx->pc = 0x298CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CD4u;
    // 0x298cd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x298CD4u, 0x298CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CDCu;
label_298cdc:
    // 0x298cdc: 0x10000016  b           . + 4 + (0x16 << 2)
label_298ce0:
    if (ctx->pc == 0x298CE0u) {
        ctx->pc = 0x298CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CDCu;
        // 0x298ce0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CE4u;
        goto label_298ce4;
    }
    ctx->pc = 0x298CDCu;
    {
        const bool branch_taken_0x298cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CDCu;
        // 0x298ce0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cdc) {
            ctx->pc = 0x298D38u;
            goto label_298d38;
        }
    }
    ctx->pc = 0x298CE4u;
label_298ce4:
    // 0x298ce4: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x298ce4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_298ce8:
    // 0x298ce8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x298ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_298cec:
    // 0x298cec: 0xc136b24  jal         func_4DAC90
label_298cf0:
    if (ctx->pc == 0x298CF0u) {
        ctx->pc = 0x298CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CECu;
        // 0x298cf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CF4u;
        goto label_298cf4;
    }
    ctx->pc = 0x298CECu;
    SET_GPR_U32(ctx, 31, 0x298CF4u);
    ctx->pc = 0x298CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CECu;
    // 0x298cf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x298CECu, 0x298CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CF4u;
label_298cf4:
    // 0x298cf4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x298cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_298cf8:
    // 0x298cf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_298cfc:
    // 0x298cfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298d00:
    // 0x298d00: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x298d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298d04:
    // 0x298d04: 0xc136b18  jal         func_4DAC60
label_298d08:
    if (ctx->pc == 0x298D08u) {
        ctx->pc = 0x298D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D04u;
        // 0x298d08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D0Cu;
        goto label_298d0c;
    }
    ctx->pc = 0x298D04u;
    SET_GPR_U32(ctx, 31, 0x298D0Cu);
    ctx->pc = 0x298D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D04u;
    // 0x298d08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298D04u, 0x298D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D0Cu;
label_298d0c:
    // 0x298d0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x298d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_298d10:
    // 0x298d10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298d14:
    // 0x298d14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_298d18:
    // 0x298d18: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x298d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_298d1c:
    // 0x298d1c: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x298d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_298d20:
    // 0x298d20: 0xc0a67ca  jal         func_299F28
label_298d24:
    if (ctx->pc == 0x298D24u) {
        ctx->pc = 0x298D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D20u;
        // 0x298d24: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D28u;
        goto label_298d28;
    }
    ctx->pc = 0x298D20u;
    SET_GPR_U32(ctx, 31, 0x298D28u);
    ctx->pc = 0x298D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D20u;
    // 0x298d24: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x298D20u, 0x298D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D28u;
label_298d28:
    // 0x298d28: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x298d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_298d2c:
    // 0x298d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_298d30:
    // 0x298d30: 0xa282000f  sb          $v0, 0xF($s4)
    ctx->pc = 0x298d30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15), (uint8_t)GPR_U32(ctx, 2));
label_298d34:
    // 0x298d34: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x298d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_298d38:
    // 0x298d38: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x298d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_298d3c:
    // 0x298d3c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x298d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_298d40:
    // 0x298d40: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x298d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_298d44:
    // 0x298d44: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x298d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_298d48:
    // 0x298d48: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x298d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_298d4c:
    // 0x298d4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x298d4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_298d50:
    // 0x298d50: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x298d50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_298d54:
    // 0x298d54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_298d58:
    // 0x298d58: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x298d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_298d5c:
    // 0x298d5c: 0x3e00008  jr          $ra
label_298d60:
    if (ctx->pc == 0x298D60u) {
        ctx->pc = 0x298D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D5Cu;
        // 0x298d60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D64u;
        goto label_298d64;
    }
    ctx->pc = 0x298D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D5Cu;
        // 0x298d60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298D64u;
label_298d64:
    // 0x298d64: 0x0  nop
    ctx->pc = 0x298d64u;
    // NOP
    ctx->pc = 0x298d68u;
}
