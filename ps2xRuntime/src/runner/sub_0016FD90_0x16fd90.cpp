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

// Function: sub_0016FD90
// Address: 0x16fd90 - 0x16ffd8
void sub_0016FD90_0x16fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FD90_0x16fd90");
#endif

    switch (ctx->pc) {
        case 0x16fd90u: goto label_16fd90;
        case 0x16fd94u: goto label_16fd94;
        case 0x16fd98u: goto label_16fd98;
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fda0u: goto label_16fda0;
        case 0x16fda4u: goto label_16fda4;
        case 0x16fda8u: goto label_16fda8;
        case 0x16fdacu: goto label_16fdac;
        case 0x16fdb0u: goto label_16fdb0;
        case 0x16fdb4u: goto label_16fdb4;
        case 0x16fdb8u: goto label_16fdb8;
        case 0x16fdbcu: goto label_16fdbc;
        case 0x16fdc0u: goto label_16fdc0;
        case 0x16fdc4u: goto label_16fdc4;
        case 0x16fdc8u: goto label_16fdc8;
        case 0x16fdccu: goto label_16fdcc;
        case 0x16fdd0u: goto label_16fdd0;
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fdd8u: goto label_16fdd8;
        case 0x16fddcu: goto label_16fddc;
        case 0x16fde0u: goto label_16fde0;
        case 0x16fde4u: goto label_16fde4;
        case 0x16fde8u: goto label_16fde8;
        case 0x16fdecu: goto label_16fdec;
        case 0x16fdf0u: goto label_16fdf0;
        case 0x16fdf4u: goto label_16fdf4;
        case 0x16fdf8u: goto label_16fdf8;
        case 0x16fdfcu: goto label_16fdfc;
        case 0x16fe00u: goto label_16fe00;
        case 0x16fe04u: goto label_16fe04;
        case 0x16fe08u: goto label_16fe08;
        case 0x16fe0cu: goto label_16fe0c;
        case 0x16fe10u: goto label_16fe10;
        case 0x16fe14u: goto label_16fe14;
        case 0x16fe18u: goto label_16fe18;
        case 0x16fe1cu: goto label_16fe1c;
        case 0x16fe20u: goto label_16fe20;
        case 0x16fe24u: goto label_16fe24;
        case 0x16fe28u: goto label_16fe28;
        case 0x16fe2cu: goto label_16fe2c;
        case 0x16fe30u: goto label_16fe30;
        case 0x16fe34u: goto label_16fe34;
        case 0x16fe38u: goto label_16fe38;
        case 0x16fe3cu: goto label_16fe3c;
        case 0x16fe40u: goto label_16fe40;
        case 0x16fe44u: goto label_16fe44;
        case 0x16fe48u: goto label_16fe48;
        case 0x16fe4cu: goto label_16fe4c;
        case 0x16fe50u: goto label_16fe50;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe58u: goto label_16fe58;
        case 0x16fe5cu: goto label_16fe5c;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe64u: goto label_16fe64;
        case 0x16fe68u: goto label_16fe68;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe70u: goto label_16fe70;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fe78u: goto label_16fe78;
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe80u: goto label_16fe80;
        case 0x16fe84u: goto label_16fe84;
        case 0x16fe88u: goto label_16fe88;
        case 0x16fe8cu: goto label_16fe8c;
        case 0x16fe90u: goto label_16fe90;
        case 0x16fe94u: goto label_16fe94;
        case 0x16fe98u: goto label_16fe98;
        case 0x16fe9cu: goto label_16fe9c;
        case 0x16fea0u: goto label_16fea0;
        case 0x16fea4u: goto label_16fea4;
        case 0x16fea8u: goto label_16fea8;
        case 0x16feacu: goto label_16feac;
        case 0x16feb0u: goto label_16feb0;
        case 0x16feb4u: goto label_16feb4;
        case 0x16feb8u: goto label_16feb8;
        case 0x16febcu: goto label_16febc;
        case 0x16fec0u: goto label_16fec0;
        case 0x16fec4u: goto label_16fec4;
        case 0x16fec8u: goto label_16fec8;
        case 0x16feccu: goto label_16fecc;
        case 0x16fed0u: goto label_16fed0;
        case 0x16fed4u: goto label_16fed4;
        case 0x16fed8u: goto label_16fed8;
        case 0x16fedcu: goto label_16fedc;
        case 0x16fee0u: goto label_16fee0;
        case 0x16fee4u: goto label_16fee4;
        case 0x16fee8u: goto label_16fee8;
        case 0x16feecu: goto label_16feec;
        case 0x16fef0u: goto label_16fef0;
        case 0x16fef4u: goto label_16fef4;
        case 0x16fef8u: goto label_16fef8;
        case 0x16fefcu: goto label_16fefc;
        case 0x16ff00u: goto label_16ff00;
        case 0x16ff04u: goto label_16ff04;
        case 0x16ff08u: goto label_16ff08;
        case 0x16ff0cu: goto label_16ff0c;
        case 0x16ff10u: goto label_16ff10;
        case 0x16ff14u: goto label_16ff14;
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff1cu: goto label_16ff1c;
        case 0x16ff20u: goto label_16ff20;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff28u: goto label_16ff28;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff30u: goto label_16ff30;
        case 0x16ff34u: goto label_16ff34;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff44u: goto label_16ff44;
        case 0x16ff48u: goto label_16ff48;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff50u: goto label_16ff50;
        case 0x16ff54u: goto label_16ff54;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff5cu: goto label_16ff5c;
        case 0x16ff60u: goto label_16ff60;
        case 0x16ff64u: goto label_16ff64;
        case 0x16ff68u: goto label_16ff68;
        case 0x16ff6cu: goto label_16ff6c;
        case 0x16ff70u: goto label_16ff70;
        case 0x16ff74u: goto label_16ff74;
        case 0x16ff78u: goto label_16ff78;
        case 0x16ff7cu: goto label_16ff7c;
        case 0x16ff80u: goto label_16ff80;
        case 0x16ff84u: goto label_16ff84;
        case 0x16ff88u: goto label_16ff88;
        case 0x16ff8cu: goto label_16ff8c;
        case 0x16ff90u: goto label_16ff90;
        case 0x16ff94u: goto label_16ff94;
        case 0x16ff98u: goto label_16ff98;
        case 0x16ff9cu: goto label_16ff9c;
        case 0x16ffa0u: goto label_16ffa0;
        case 0x16ffa4u: goto label_16ffa4;
        case 0x16ffa8u: goto label_16ffa8;
        case 0x16ffacu: goto label_16ffac;
        case 0x16ffb0u: goto label_16ffb0;
        case 0x16ffb4u: goto label_16ffb4;
        case 0x16ffb8u: goto label_16ffb8;
        case 0x16ffbcu: goto label_16ffbc;
        case 0x16ffc0u: goto label_16ffc0;
        case 0x16ffc4u: goto label_16ffc4;
        case 0x16ffc8u: goto label_16ffc8;
        case 0x16ffccu: goto label_16ffcc;
        case 0x16ffd0u: goto label_16ffd0;
        case 0x16ffd4u: goto label_16ffd4;
        default: break;
    }

    ctx->pc = 0x16fd90u;

label_16fd90:
    // 0x16fd90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_16fd94:
    // 0x16fd94: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_16fd98:
    // 0x16fd98: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_16fd9c:
    // 0x16fd9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16fd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16fda0:
    // 0x16fda0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16fda4:
    // 0x16fda4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16fda4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16fda8:
    // 0x16fda8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_16fdac:
    // 0x16fdac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16fdacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16fdb0:
    // 0x16fdb0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x16fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_16fdb4:
    // 0x16fdb4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x16fdb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16fdb8:
    // 0x16fdb8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_16fdbc:
    // 0x16fdbc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x16fdbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16fdc0:
    // 0x16fdc0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16fdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_16fdc4:
    // 0x16fdc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fdc8:
    // 0x16fdc8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16fdcc:
    // 0x16fdcc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x16fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_16fdd0:
    // 0x16fdd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16fdd4:
    // 0x16fdd4: 0xc047e6c  jal         func_11F9B0
label_16fdd8:
    if (ctx->pc == 0x16FDD8u) {
        ctx->pc = 0x16FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDD4u;
        // 0x16fdd8: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FDDCu;
        goto label_16fddc;
    }
    ctx->pc = 0x16FDD4u;
    SET_GPR_U32(ctx, 31, 0x16FDDCu);
    ctx->pc = 0x16FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDD4u;
    // 0x16fdd8: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x16FDD4u, 0x16FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDDCu;
label_16fddc:
    // 0x16fddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16fde0:
    if (ctx->pc == 0x16FDE0u) {
        ctx->pc = 0x16FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDDCu;
        // 0x16fde0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FDE4u;
        goto label_16fde4;
    }
    ctx->pc = 0x16FDDCu;
    {
        const bool branch_taken_0x16fddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDDCu;
        // 0x16fde0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fddc) {
            ctx->pc = 0x16FE0Cu;
            goto label_16fe0c;
        }
    }
    ctx->pc = 0x16FDE4u;
label_16fde4:
    // 0x16fde4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fde8:
    // 0x16fde8: 0xc047e6c  jal         func_11F9B0
label_16fdec:
    if (ctx->pc == 0x16FDECu) {
        ctx->pc = 0x16FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDE8u;
        // 0x16fdec: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FDF0u;
        goto label_16fdf0;
    }
    ctx->pc = 0x16FDE8u;
    SET_GPR_U32(ctx, 31, 0x16FDF0u);
    ctx->pc = 0x16FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDE8u;
    // 0x16fdec: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x16FDE8u, 0x16FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDF0u;
label_16fdf0:
    // 0x16fdf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16fdf4:
    // 0x16fdf4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x16fdf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_16fdf8:
    // 0x16fdf8: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x16fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_16fdfc:
    // 0x16fdfc: 0xa0f809  jalr        $a1
label_16fe00:
    if (ctx->pc == 0x16FE00u) {
        ctx->pc = 0x16FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDFCu;
        // 0x16fe00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE04u;
        goto label_16fe04;
    }
    ctx->pc = 0x16FDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x16FE04u);
        ctx->pc = 0x16FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDFCu;
        // 0x16fe00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FDFCu, 0x16FE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FE04u;
label_16fe04:
    // 0x16fe04: 0x10000004  b           . + 4 + (0x4 << 2)
label_16fe08:
    if (ctx->pc == 0x16FE08u) {
        ctx->pc = 0x16FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE04u;
        // 0x16fe08: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE0Cu;
        goto label_16fe0c;
    }
    ctx->pc = 0x16FE04u;
    {
        const bool branch_taken_0x16fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE04u;
        // 0x16fe08: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe04) {
            ctx->pc = 0x16FE18u;
            goto label_16fe18;
        }
    }
    ctx->pc = 0x16FE0Cu;
label_16fe0c:
    // 0x16fe0c: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x16fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_16fe10:
    // 0x16fe10: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x16fe10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fe14:
    // 0x16fe14: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x16fe14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16fe18:
    // 0x16fe18: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x16fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_16fe1c:
    // 0x16fe1c: 0x92650069  lbu         $a1, 0x69($s3)
    ctx->pc = 0x16fe1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
label_16fe20:
    // 0x16fe20: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x16fe20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_16fe24:
    // 0x16fe24: 0x9264006a  lbu         $a0, 0x6A($s3)
    ctx->pc = 0x16fe24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 106)));
label_16fe28:
    // 0x16fe28: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x16fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
label_16fe2c:
    // 0x16fe2c: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x16fe2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16fe30:
    // 0x16fe30: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x16fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_16fe34:
    // 0x16fe34: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x16fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_16fe38:
    // 0x16fe38: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x16fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_16fe3c:
    // 0x16fe3c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x16fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_16fe40:
    // 0x16fe40: 0x7e660030  sq          $a2, 0x30($s3)
    ctx->pc = 0x16fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 6));
label_16fe44:
    // 0x16fe44: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x16fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16fe48:
    // 0x16fe48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x16fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16fe4c:
    // 0x16fe4c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16fe4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16fe50:
    // 0x16fe50: 0x0  nop
    ctx->pc = 0x16fe50u;
    // NOP
label_16fe54:
    // 0x16fe54: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x16fe54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_16fe58:
    // 0x16fe58: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x16fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16fe5c:
    // 0x16fe5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16fe5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16fe60:
    // 0x16fe60: 0x0  nop
    ctx->pc = 0x16fe60u;
    // NOP
label_16fe64:
    // 0x16fe64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16fe64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_16fe68:
    // 0x16fe68: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x16fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16fe6c:
    // 0x16fe6c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16fe6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_16fe70:
    // 0x16fe70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16fe70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16fe74:
    // 0x16fe74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16fe78:
    // 0x16fe78: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16fe78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_16fe7c:
    // 0x16fe7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_16fe80:
    // 0x16fe80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16fe80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16fe84:
    // 0x16fe84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16fe84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_16fe88:
    // 0x16fe88: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_16fe8c:
    // 0x16fe8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x16fe8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_16fe90:
    // 0x16fe90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16fe90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16fe94:
    // 0x16fe94: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x16fe94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_16fe98:
    // 0x16fe98: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x16fe98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_16fe9c:
    // 0x16fe9c: 0x26321720  addiu       $s2, $s1, 0x1720
    ctx->pc = 0x16fe9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
label_16fea0:
    // 0x16fea0: 0xc0cd508  jal         func_335420
label_16fea4:
    if (ctx->pc == 0x16FEA4u) {
        ctx->pc = 0x16FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEA0u;
        // 0x16fea4: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FEA8u;
        goto label_16fea8;
    }
    ctx->pc = 0x16FEA0u;
    SET_GPR_U32(ctx, 31, 0x16FEA8u);
    ctx->pc = 0x16FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEA0u;
    // 0x16fea4: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x16FEA0u, 0x16FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEA8u;
label_16fea8:
    // 0x16fea8: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x16fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16feac:
    // 0x16feac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16feacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16feb0:
    // 0x16feb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16feb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16feb4:
    // 0x16feb4: 0xc12e310  jal         func_4B8C40
label_16feb8:
    if (ctx->pc == 0x16FEB8u) {
        ctx->pc = 0x16FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEB4u;
        // 0x16feb8: 0xe6610038  swc1        $f1, 0x38($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FEBCu;
        goto label_16febc;
    }
    ctx->pc = 0x16FEB4u;
    SET_GPR_U32(ctx, 31, 0x16FEBCu);
    ctx->pc = 0x16FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEB4u;
    // 0x16feb8: 0xe6610038  swc1        $f1, 0x38($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x16FEB4u, 0x16FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEBCu;
label_16febc:
    // 0x16febc: 0xc6221720  lwc1        $f2, 0x1720($s1)
    ctx->pc = 0x16febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16fec0:
    // 0x16fec0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16fec0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16fec4:
    // 0x16fec4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x16fec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16fec8:
    // 0x16fec8: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x16fec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_16fecc:
    // 0x16fecc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x16feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16fed0:
    // 0x16fed0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16fed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16fed4:
    // 0x16fed4: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x16fed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_16fed8:
    // 0x16fed8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x16fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16fedc:
    // 0x16fedc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x16fedcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16fee0:
    // 0x16fee0: 0xc12e29c  jal         func_4B8A70
label_16fee4:
    if (ctx->pc == 0x16FEE4u) {
        ctx->pc = 0x16FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEE0u;
        // 0x16fee4: 0xe6620008  swc1        $f2, 0x8($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FEE8u;
        goto label_16fee8;
    }
    ctx->pc = 0x16FEE0u;
    SET_GPR_U32(ctx, 31, 0x16FEE8u);
    ctx->pc = 0x16FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEE0u;
    // 0x16fee4: 0xe6620008  swc1        $f2, 0x8($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x16FEE0u, 0x16FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEE8u;
label_16fee8:
    // 0x16fee8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16fee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16feec:
    // 0x16feec: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x16feecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_16fef0:
    // 0x16fef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fef4:
    // 0x16fef4: 0xc0cd4fc  jal         func_3353F0
label_16fef8:
    if (ctx->pc == 0x16FEF8u) {
        ctx->pc = 0x16FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEF4u;
        // 0x16fef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FEFCu;
        goto label_16fefc;
    }
    ctx->pc = 0x16FEF4u;
    SET_GPR_U32(ctx, 31, 0x16FEFCu);
    ctx->pc = 0x16FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEF4u;
    // 0x16fef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x16FEF4u, 0x16FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEFCu;
label_16fefc:
    // 0x16fefc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16fefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_16ff00:
    // 0x16ff00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16ff00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ff04:
    // 0x16ff04: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x16ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_16ff08:
    // 0x16ff08: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x16ff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_16ff0c:
    // 0x16ff0c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16ff0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16ff10:
    // 0x16ff10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ff14:
    // 0x16ff14: 0xc0cd508  jal         func_335420
label_16ff18:
    if (ctx->pc == 0x16FF18u) {
        ctx->pc = 0x16FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF14u;
        // 0x16ff18: 0xae62005c  sw          $v0, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF1Cu;
        goto label_16ff1c;
    }
    ctx->pc = 0x16FF14u;
    SET_GPR_U32(ctx, 31, 0x16FF1Cu);
    ctx->pc = 0x16FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF14u;
    // 0x16ff18: 0xae62005c  sw          $v0, 0x5C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x16FF14u, 0x16FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF1Cu;
label_16ff1c:
    // 0x16ff1c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x16ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_16ff20:
    // 0x16ff20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ff24:
    // 0x16ff24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ff28:
    // 0x16ff28: 0xc0cd4fc  jal         func_3353F0
label_16ff2c:
    if (ctx->pc == 0x16FF2Cu) {
        ctx->pc = 0x16FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF28u;
        // 0x16ff2c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF30u;
        goto label_16ff30;
    }
    ctx->pc = 0x16FF28u;
    SET_GPR_U32(ctx, 31, 0x16FF30u);
    ctx->pc = 0x16FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF28u;
    // 0x16ff2c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x16FF28u, 0x16FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF30u;
label_16ff30:
    // 0x16ff30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16ff30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16ff34:
    // 0x16ff34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x16ff34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16ff38:
    // 0x16ff38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ff3c:
    // 0x16ff3c: 0xc0cd4fc  jal         func_3353F0
label_16ff40:
    if (ctx->pc == 0x16FF40u) {
        ctx->pc = 0x16FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF3Cu;
        // 0x16ff40: 0xa2620068  sb          $v0, 0x68($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF44u;
        goto label_16ff44;
    }
    ctx->pc = 0x16FF3Cu;
    SET_GPR_U32(ctx, 31, 0x16FF44u);
    ctx->pc = 0x16FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF3Cu;
    // 0x16ff40: 0xa2620068  sb          $v0, 0x68($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x16FF3Cu, 0x16FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF44u;
label_16ff44:
    // 0x16ff44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ff48:
    // 0x16ff48: 0xa262006b  sb          $v0, 0x6B($s3)
    ctx->pc = 0x16ff48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 2));
label_16ff4c:
    // 0x16ff4c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x16ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_16ff50:
    // 0x16ff50: 0xc0cd4fc  jal         func_3353F0
label_16ff54:
    if (ctx->pc == 0x16FF54u) {
        ctx->pc = 0x16FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF50u;
        // 0x16ff54: 0x240600be  addiu       $a2, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF58u;
        goto label_16ff58;
    }
    ctx->pc = 0x16FF50u;
    SET_GPR_U32(ctx, 31, 0x16FF58u);
    ctx->pc = 0x16FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF50u;
    // 0x16ff54: 0x240600be  addiu       $a2, $zero, 0xBE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x16FF50u, 0x16FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF58u;
label_16ff58:
    // 0x16ff58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ff5c:
    // 0x16ff5c: 0xa262006c  sb          $v0, 0x6C($s3)
    ctx->pc = 0x16ff5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 2));
label_16ff60:
    // 0x16ff60: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x16ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_16ff64:
    // 0x16ff64: 0xc0cd4fc  jal         func_3353F0
label_16ff68:
    if (ctx->pc == 0x16FF68u) {
        ctx->pc = 0x16FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF64u;
        // 0x16ff68: 0x24060384  addiu       $a2, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF6Cu;
        goto label_16ff6c;
    }
    ctx->pc = 0x16FF64u;
    SET_GPR_U32(ctx, 31, 0x16FF6Cu);
    ctx->pc = 0x16FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF64u;
    // 0x16ff68: 0x24060384  addiu       $a2, $zero, 0x384 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x16FF64u, 0x16FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF6Cu;
label_16ff6c:
    // 0x16ff6c: 0xa6620066  sh          $v0, 0x66($s3)
    ctx->pc = 0x16ff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 2));
label_16ff70:
    // 0x16ff70: 0x27c416c0  addiu       $a0, $fp, 0x16C0
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
label_16ff74:
    // 0x16ff74: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x16ff74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_16ff78:
    // 0x16ff78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16ff7c:
    // 0x16ff7c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x16ff7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16ff80:
    // 0x16ff80: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x16ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
label_16ff84:
    // 0x16ff84: 0x7e620040  sq          $v0, 0x40($s3)
    ctx->pc = 0x16ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 2));
label_16ff88:
    // 0x16ff88: 0xa265006d  sb          $a1, 0x6D($s3)
    ctx->pc = 0x16ff88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 109), (uint8_t)GPR_U32(ctx, 5));
label_16ff8c:
    // 0x16ff8c: 0xa260006e  sb          $zero, 0x6E($s3)
    ctx->pc = 0x16ff8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 110), (uint8_t)GPR_U32(ctx, 0));
label_16ff90:
    // 0x16ff90: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x16ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_16ff94:
    // 0x16ff94: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x16ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_16ff98:
    // 0x16ff98: 0xa6600062  sh          $zero, 0x62($s3)
    ctx->pc = 0x16ff98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 98), (uint16_t)GPR_U32(ctx, 0));
label_16ff9c:
    // 0x16ff9c: 0xa6600060  sh          $zero, 0x60($s3)
    ctx->pc = 0x16ff9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 0));
label_16ffa0:
    // 0x16ffa0: 0xa6600064  sh          $zero, 0x64($s3)
    ctx->pc = 0x16ffa0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 0));
label_16ffa4:
    // 0x16ffa4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16ffa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16ffa8:
    // 0x16ffa8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16ffa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16ffac:
    // 0x16ffac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16ffacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16ffb0:
    // 0x16ffb0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16ffb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16ffb4:
    // 0x16ffb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16ffb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16ffb8:
    // 0x16ffb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16ffb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16ffbc:
    // 0x16ffbc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16ffbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16ffc0:
    // 0x16ffc0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x16ffc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ffc4:
    // 0x16ffc4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x16ffc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ffc8:
    // 0x16ffc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ffcc:
    // 0x16ffcc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x16ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16ffd0:
    // 0x16ffd0: 0x3e00008  jr          $ra
label_16ffd4:
    if (ctx->pc == 0x16FFD4u) {
        ctx->pc = 0x16FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFD0u;
        // 0x16ffd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FFD8u;
        goto label_fallthrough_0x16ffd0;
    }
    ctx->pc = 0x16FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFD0u;
        // 0x16ffd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16ffd0:
    ctx->pc = 0x16FFD8u;
}
