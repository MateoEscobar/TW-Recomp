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

// Function: sub_0015DD98
// Address: 0x15dd98 - 0x15df68
void sub_0015DD98_0x15dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DD98_0x15dd98");
#endif

    switch (ctx->pc) {
        case 0x15dd98u: goto label_15dd98;
        case 0x15dd9cu: goto label_15dd9c;
        case 0x15dda0u: goto label_15dda0;
        case 0x15dda4u: goto label_15dda4;
        case 0x15dda8u: goto label_15dda8;
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddb0u: goto label_15ddb0;
        case 0x15ddb4u: goto label_15ddb4;
        case 0x15ddb8u: goto label_15ddb8;
        case 0x15ddbcu: goto label_15ddbc;
        case 0x15ddc0u: goto label_15ddc0;
        case 0x15ddc4u: goto label_15ddc4;
        case 0x15ddc8u: goto label_15ddc8;
        case 0x15ddccu: goto label_15ddcc;
        case 0x15ddd0u: goto label_15ddd0;
        case 0x15ddd4u: goto label_15ddd4;
        case 0x15ddd8u: goto label_15ddd8;
        case 0x15dddcu: goto label_15dddc;
        case 0x15dde0u: goto label_15dde0;
        case 0x15dde4u: goto label_15dde4;
        case 0x15dde8u: goto label_15dde8;
        case 0x15ddecu: goto label_15ddec;
        case 0x15ddf0u: goto label_15ddf0;
        case 0x15ddf4u: goto label_15ddf4;
        case 0x15ddf8u: goto label_15ddf8;
        case 0x15ddfcu: goto label_15ddfc;
        case 0x15de00u: goto label_15de00;
        case 0x15de04u: goto label_15de04;
        case 0x15de08u: goto label_15de08;
        case 0x15de0cu: goto label_15de0c;
        case 0x15de10u: goto label_15de10;
        case 0x15de14u: goto label_15de14;
        case 0x15de18u: goto label_15de18;
        case 0x15de1cu: goto label_15de1c;
        case 0x15de20u: goto label_15de20;
        case 0x15de24u: goto label_15de24;
        case 0x15de28u: goto label_15de28;
        case 0x15de2cu: goto label_15de2c;
        case 0x15de30u: goto label_15de30;
        case 0x15de34u: goto label_15de34;
        case 0x15de38u: goto label_15de38;
        case 0x15de3cu: goto label_15de3c;
        case 0x15de40u: goto label_15de40;
        case 0x15de44u: goto label_15de44;
        case 0x15de48u: goto label_15de48;
        case 0x15de4cu: goto label_15de4c;
        case 0x15de50u: goto label_15de50;
        case 0x15de54u: goto label_15de54;
        case 0x15de58u: goto label_15de58;
        case 0x15de5cu: goto label_15de5c;
        case 0x15de60u: goto label_15de60;
        case 0x15de64u: goto label_15de64;
        case 0x15de68u: goto label_15de68;
        case 0x15de6cu: goto label_15de6c;
        case 0x15de70u: goto label_15de70;
        case 0x15de74u: goto label_15de74;
        case 0x15de78u: goto label_15de78;
        case 0x15de7cu: goto label_15de7c;
        case 0x15de80u: goto label_15de80;
        case 0x15de84u: goto label_15de84;
        case 0x15de88u: goto label_15de88;
        case 0x15de8cu: goto label_15de8c;
        case 0x15de90u: goto label_15de90;
        case 0x15de94u: goto label_15de94;
        case 0x15de98u: goto label_15de98;
        case 0x15de9cu: goto label_15de9c;
        case 0x15dea0u: goto label_15dea0;
        case 0x15dea4u: goto label_15dea4;
        case 0x15dea8u: goto label_15dea8;
        case 0x15deacu: goto label_15deac;
        case 0x15deb0u: goto label_15deb0;
        case 0x15deb4u: goto label_15deb4;
        case 0x15deb8u: goto label_15deb8;
        case 0x15debcu: goto label_15debc;
        case 0x15dec0u: goto label_15dec0;
        case 0x15dec4u: goto label_15dec4;
        case 0x15dec8u: goto label_15dec8;
        case 0x15deccu: goto label_15decc;
        case 0x15ded0u: goto label_15ded0;
        case 0x15ded4u: goto label_15ded4;
        case 0x15ded8u: goto label_15ded8;
        case 0x15dedcu: goto label_15dedc;
        case 0x15dee0u: goto label_15dee0;
        case 0x15dee4u: goto label_15dee4;
        case 0x15dee8u: goto label_15dee8;
        case 0x15deecu: goto label_15deec;
        case 0x15def0u: goto label_15def0;
        case 0x15def4u: goto label_15def4;
        case 0x15def8u: goto label_15def8;
        case 0x15defcu: goto label_15defc;
        case 0x15df00u: goto label_15df00;
        case 0x15df04u: goto label_15df04;
        case 0x15df08u: goto label_15df08;
        case 0x15df0cu: goto label_15df0c;
        case 0x15df10u: goto label_15df10;
        case 0x15df14u: goto label_15df14;
        case 0x15df18u: goto label_15df18;
        case 0x15df1cu: goto label_15df1c;
        case 0x15df20u: goto label_15df20;
        case 0x15df24u: goto label_15df24;
        case 0x15df28u: goto label_15df28;
        case 0x15df2cu: goto label_15df2c;
        case 0x15df30u: goto label_15df30;
        case 0x15df34u: goto label_15df34;
        case 0x15df38u: goto label_15df38;
        case 0x15df3cu: goto label_15df3c;
        case 0x15df40u: goto label_15df40;
        case 0x15df44u: goto label_15df44;
        case 0x15df48u: goto label_15df48;
        case 0x15df4cu: goto label_15df4c;
        case 0x15df50u: goto label_15df50;
        case 0x15df54u: goto label_15df54;
        case 0x15df58u: goto label_15df58;
        case 0x15df5cu: goto label_15df5c;
        case 0x15df60u: goto label_15df60;
        case 0x15df64u: goto label_15df64;
        default: break;
    }

    ctx->pc = 0x15dd98u;

label_15dd98:
    // 0x15dd98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_15dd9c:
    // 0x15dd9c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x15dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_15dda0:
    // 0x15dda0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15dda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15dda4:
    // 0x15dda4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x15dda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_15dda8:
    // 0x15dda8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x15dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_15ddac:
    // 0x15ddac: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x15ddacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_15ddb0:
    // 0x15ddb0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15ddb4:
    // 0x15ddb4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x15ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_15ddb8:
    // 0x15ddb8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x15ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_15ddbc:
    // 0x15ddbc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x15ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_15ddc0:
    // 0x15ddc0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15ddc4:
    // 0x15ddc4: 0xc05587e  jal         func_1561F8
label_15ddc8:
    if (ctx->pc == 0x15DDC8u) {
        ctx->pc = 0x15DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDC4u;
        // 0x15ddc8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDCCu;
        goto label_15ddcc;
    }
    ctx->pc = 0x15DDC4u;
    SET_GPR_U32(ctx, 31, 0x15DDCCu);
    ctx->pc = 0x15DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDC4u;
    // 0x15ddc8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15DDC4u, 0x15DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDCCu;
label_15ddcc:
    // 0x15ddcc: 0xc055888  jal         func_156220
label_15ddd0:
    if (ctx->pc == 0x15DDD0u) {
        ctx->pc = 0x15DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDCCu;
        // 0x15ddd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDD4u;
        goto label_15ddd4;
    }
    ctx->pc = 0x15DDCCu;
    SET_GPR_U32(ctx, 31, 0x15DDD4u);
    ctx->pc = 0x15DDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDCCu;
    // 0x15ddd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15DDCCu, 0x15DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDD4u;
label_15ddd4:
    // 0x15ddd4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15ddd8:
    // 0x15ddd8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15ddd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15dddc:
    // 0x15dddc: 0xc0e8c52  jal         func_3A3148
label_15dde0:
    if (ctx->pc == 0x15DDE0u) {
        ctx->pc = 0x15DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDDCu;
        // 0x15dde0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDE4u;
        goto label_15dde4;
    }
    ctx->pc = 0x15DDDCu;
    SET_GPR_U32(ctx, 31, 0x15DDE4u);
    ctx->pc = 0x15DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDDCu;
    // 0x15dde0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15DDDCu, 0x15DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDE4u;
label_15dde4:
    // 0x15dde4: 0xc0558b2  jal         func_1562C8
label_15dde8:
    if (ctx->pc == 0x15DDE8u) {
        ctx->pc = 0x15DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDE4u;
        // 0x15dde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDECu;
        goto label_15ddec;
    }
    ctx->pc = 0x15DDE4u;
    SET_GPR_U32(ctx, 31, 0x15DDECu);
    ctx->pc = 0x15DDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDE4u;
    // 0x15dde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15DDE4u, 0x15DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDECu;
label_15ddec:
    // 0x15ddec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ddf0:
    // 0x15ddf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ddf4:
    // 0x15ddf4: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x15ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21356)));
label_15ddf8:
    // 0x15ddf8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_15ddfc:
    if (ctx->pc == 0x15DDFCu) {
        ctx->pc = 0x15DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDF8u;
        // 0x15ddfc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE00u;
        goto label_15de00;
    }
    ctx->pc = 0x15DDF8u;
    {
        const bool branch_taken_0x15ddf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDF8u;
        // 0x15ddfc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddf8) {
            ctx->pc = 0x15DE24u;
            goto label_15de24;
        }
    }
    ctx->pc = 0x15DE00u;
label_15de00:
    // 0x15de00: 0xc0926e6  jal         func_249B98
label_15de04:
    if (ctx->pc == 0x15DE04u) {
        ctx->pc = 0x15DE08u;
        goto label_15de08;
    }
    ctx->pc = 0x15DE00u;
    SET_GPR_U32(ctx, 31, 0x15DE08u);
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x15DE00u, 0x15DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE08u;
label_15de08:
    // 0x15de08: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15de0c:
    // 0x15de0c: 0xc0e8c6a  jal         func_3A31A8
label_15de10:
    if (ctx->pc == 0x15DE10u) {
        ctx->pc = 0x15DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE0Cu;
        // 0x15de10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE14u;
        goto label_15de14;
    }
    ctx->pc = 0x15DE0Cu;
    SET_GPR_U32(ctx, 31, 0x15DE14u);
    ctx->pc = 0x15DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE0Cu;
    // 0x15de10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15DE0Cu, 0x15DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE14u;
label_15de14:
    // 0x15de14: 0x8e8347c4  lw          $v1, 0x47C4($s4)
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_15de18:
    // 0x15de18: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15de1c:
    // 0x15de1c: 0xc0d4456  jal         func_351158
label_15de20:
    if (ctx->pc == 0x15DE20u) {
        ctx->pc = 0x15DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE1Cu;
        // 0x15de20: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE24u;
        goto label_15de24;
    }
    ctx->pc = 0x15DE1Cu;
    SET_GPR_U32(ctx, 31, 0x15DE24u);
    ctx->pc = 0x15DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE1Cu;
    // 0x15de20: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15DE1Cu, 0x15DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE24u;
label_15de24:
    // 0x15de24: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15de28:
    // 0x15de28: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_15de2c:
    // 0x15de2c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x15de2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15de30:
    // 0x15de30: 0xc062a60  jal         func_18A980
label_15de34:
    if (ctx->pc == 0x15DE34u) {
        ctx->pc = 0x15DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE30u;
        // 0x15de34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE38u;
        goto label_15de38;
    }
    ctx->pc = 0x15DE30u;
    SET_GPR_U32(ctx, 31, 0x15DE38u);
    ctx->pc = 0x15DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE30u;
    // 0x15de34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15DE30u, 0x15DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE38u;
label_15de38:
    // 0x15de38: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_15de3c:
    // 0x15de3c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15de40:
    // 0x15de40: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15de44:
    // 0x15de44: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15de48:
    // 0x15de48: 0x60f809  jalr        $v1
label_15de4c:
    if (ctx->pc == 0x15DE4Cu) {
        ctx->pc = 0x15DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE48u;
        // 0x15de4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE50u;
        goto label_15de50;
    }
    ctx->pc = 0x15DE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DE50u);
        ctx->pc = 0x15DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE48u;
        // 0x15de4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DE48u, 0x15DE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DE50u;
label_15de50:
    // 0x15de50: 0xc103e28  jal         func_40F8A0
label_15de54:
    if (ctx->pc == 0x15DE54u) {
        ctx->pc = 0x15DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE50u;
        // 0x15de54: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE58u;
        goto label_15de58;
    }
    ctx->pc = 0x15DE50u;
    SET_GPR_U32(ctx, 31, 0x15DE58u);
    ctx->pc = 0x15DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE50u;
    // 0x15de54: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15DE50u, 0x15DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE58u;
label_15de58:
    // 0x15de58: 0xc06181a  jal         func_186068
label_15de5c:
    if (ctx->pc == 0x15DE5Cu) {
        ctx->pc = 0x15DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE58u;
        // 0x15de5c: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE60u;
        goto label_15de60;
    }
    ctx->pc = 0x15DE58u;
    SET_GPR_U32(ctx, 31, 0x15DE60u);
    ctx->pc = 0x15DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE58u;
    // 0x15de5c: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15DE58u, 0x15DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE60u;
label_15de60:
    // 0x15de60: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15de64:
    // 0x15de64: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15de64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15de68:
    // 0x15de68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15de68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15de6c:
    // 0x15de6c: 0xc047e6c  jal         func_11F9B0
label_15de70:
    if (ctx->pc == 0x15DE70u) {
        ctx->pc = 0x15DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE6Cu;
        // 0x15de70: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE74u;
        goto label_15de74;
    }
    ctx->pc = 0x15DE6Cu;
    SET_GPR_U32(ctx, 31, 0x15DE74u);
    ctx->pc = 0x15DE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE6Cu;
    // 0x15de70: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15DE6Cu, 0x15DE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE74u;
label_15de74:
    // 0x15de74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15de78:
    // 0x15de78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de7c:
    // 0x15de7c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15de7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15de80:
    // 0x15de80: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15de84:
    // 0x15de84: 0xc0f809  jalr        $a2
label_15de88:
    if (ctx->pc == 0x15DE88u) {
        ctx->pc = 0x15DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE84u;
        // 0x15de88: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE8Cu;
        goto label_15de8c;
    }
    ctx->pc = 0x15DE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15DE8Cu);
        ctx->pc = 0x15DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE84u;
        // 0x15de88: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DE84u, 0x15DE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DE8Cu;
label_15de8c:
    // 0x15de8c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15de8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15de90:
    // 0x15de90: 0x2e640002  sltiu       $a0, $s3, 0x2
    ctx->pc = 0x15de90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15de94:
    // 0x15de94: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15de94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15de98:
    // 0x15de98: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15de98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15de9c:
    // 0x15de9c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15dea0:
    // 0x15dea0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15dea4:
    if (ctx->pc == 0x15DEA4u) {
        ctx->pc = 0x15DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA0u;
        // 0x15dea4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEA8u;
        goto label_15dea8;
    }
    ctx->pc = 0x15DEA0u;
    {
        const bool branch_taken_0x15dea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA0u;
        // 0x15dea4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dea0) {
            ctx->pc = 0x15DE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15de68;
        }
    }
    ctx->pc = 0x15DEA8u;
label_15dea8:
    // 0x15dea8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15deac:
    // 0x15deac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15deb0:
    // 0x15deb0: 0xc043e04  jal         func_10F810
label_15deb4:
    if (ctx->pc == 0x15DEB4u) {
        ctx->pc = 0x15DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEB0u;
        // 0x15deb4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEB8u;
        goto label_15deb8;
    }
    ctx->pc = 0x15DEB0u;
    SET_GPR_U32(ctx, 31, 0x15DEB8u);
    ctx->pc = 0x15DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEB0u;
    // 0x15deb4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15DEB0u, 0x15DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEB8u;
label_15deb8:
    // 0x15deb8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_15debc:
    // 0x15debc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15dec0:
    // 0x15dec0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15dec4:
    // 0x15dec4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15dec8:
    // 0x15dec8: 0x60f809  jalr        $v1
label_15decc:
    if (ctx->pc == 0x15DECCu) {
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DED0u;
        goto label_15ded0;
    }
    ctx->pc = 0x15DEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DED0u);
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DEC8u, 0x15DED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DED0u;
label_15ded0:
    // 0x15ded0: 0xc055950  jal         func_156540
label_15ded4:
    if (ctx->pc == 0x15DED4u) {
        ctx->pc = 0x15DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DED0u;
        // 0x15ded4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DED8u;
        goto label_15ded8;
    }
    ctx->pc = 0x15DED0u;
    SET_GPR_U32(ctx, 31, 0x15DED8u);
    ctx->pc = 0x15DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DED0u;
    // 0x15ded4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x15DED0u, 0x15DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DED8u;
label_15ded8:
    // 0x15ded8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ded8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15dedc:
    // 0x15dedc: 0xc0559fe  jal         func_1567F8
label_15dee0:
    if (ctx->pc == 0x15DEE0u) {
        ctx->pc = 0x15DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEDCu;
        // 0x15dee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEE4u;
        goto label_15dee4;
    }
    ctx->pc = 0x15DEDCu;
    SET_GPR_U32(ctx, 31, 0x15DEE4u);
    ctx->pc = 0x15DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEDCu;
    // 0x15dee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1567F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567F8u, 0x15DEDCu, 0x15DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEE4u;
label_15dee4:
    // 0x15dee4: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x15dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_15dee8:
    // 0x15dee8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15deec:
    // 0x15deec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15deecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15def0:
    // 0x15def0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15def4:
    // 0x15def4: 0x60f809  jalr        $v1
label_15def8:
    if (ctx->pc == 0x15DEF8u) {
        ctx->pc = 0x15DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEF4u;
        // 0x15def8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEFCu;
        goto label_15defc;
    }
    ctx->pc = 0x15DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DEFCu);
        ctx->pc = 0x15DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEF4u;
        // 0x15def8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DEF4u, 0x15DEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DEFCu;
label_15defc:
    // 0x15defc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15df00:
    // 0x15df00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15df00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15df04:
    // 0x15df04: 0xc0552b8  jal         func_154AE0
label_15df08:
    if (ctx->pc == 0x15DF08u) {
        ctx->pc = 0x15DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF04u;
        // 0x15df08: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF0Cu;
        goto label_15df0c;
    }
    ctx->pc = 0x15DF04u;
    SET_GPR_U32(ctx, 31, 0x15DF0Cu);
    ctx->pc = 0x15DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF04u;
    // 0x15df08: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15DF04u, 0x15DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF0Cu;
label_15df0c:
    // 0x15df0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15df10:
    // 0x15df10: 0xc06ba0a  jal         func_1AE828
label_15df14:
    if (ctx->pc == 0x15DF14u) {
        ctx->pc = 0x15DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF10u;
        // 0x15df14: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF18u;
        goto label_15df18;
    }
    ctx->pc = 0x15DF10u;
    SET_GPR_U32(ctx, 31, 0x15DF18u);
    ctx->pc = 0x15DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF10u;
    // 0x15df14: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15DF10u, 0x15DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF18u;
label_15df18:
    // 0x15df18: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x15df18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_15df1c:
    // 0x15df1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15df20:
    // 0x15df20: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15df24:
    // 0x15df24: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15df28:
    // 0x15df28: 0x60f809  jalr        $v1
label_15df2c:
    if (ctx->pc == 0x15DF2Cu) {
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF28u;
        // 0x15df2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF30u;
        goto label_15df30;
    }
    ctx->pc = 0x15DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF30u);
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF28u;
        // 0x15df2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF28u, 0x15DF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0xc055880  jal         func_156200
label_15df34:
    if (ctx->pc == 0x15DF34u) {
        ctx->pc = 0x15DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF30u;
        // 0x15df34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF38u;
        goto label_15df38;
    }
    ctx->pc = 0x15DF30u;
    SET_GPR_U32(ctx, 31, 0x15DF38u);
    ctx->pc = 0x15DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF30u;
    // 0x15df34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15DF30u, 0x15DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF38u;
label_15df38:
    // 0x15df38: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x15df38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15df3c:
    // 0x15df3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15df40:
    // 0x15df40: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x15df40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15df44:
    // 0x15df44: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x15df44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15df48:
    // 0x15df48: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x15df48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15df4c:
    // 0x15df4c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x15df4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15df50:
    // 0x15df50: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x15df50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15df54:
    // 0x15df54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15df58:
    // 0x15df58: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x15df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15df5c:
    // 0x15df5c: 0x3e00008  jr          $ra
label_15df60:
    if (ctx->pc == 0x15DF60u) {
        ctx->pc = 0x15DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF5Cu;
        // 0x15df60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF64u;
        goto label_15df64;
    }
    ctx->pc = 0x15DF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF5Cu;
        // 0x15df60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DF64u;
label_15df64:
    // 0x15df64: 0x0  nop
    ctx->pc = 0x15df64u;
    // NOP
    ctx->pc = 0x15df68u;
}
