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

// Function: sub_0028AC80
// Address: 0x28ac80 - 0x28af88
void sub_0028AC80_0x28ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC80_0x28ac80");
#endif

    switch (ctx->pc) {
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad74u: goto label_28ad74;
        case 0x28ad78u: goto label_28ad78;
        case 0x28ad7cu: goto label_28ad7c;
        case 0x28ad80u: goto label_28ad80;
        case 0x28ad84u: goto label_28ad84;
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad8cu: goto label_28ad8c;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28ada0u: goto label_28ada0;
        case 0x28ada4u: goto label_28ada4;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adacu: goto label_28adac;
        case 0x28adb0u: goto label_28adb0;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adb8u: goto label_28adb8;
        case 0x28adbcu: goto label_28adbc;
        case 0x28adc0u: goto label_28adc0;
        case 0x28adc4u: goto label_28adc4;
        case 0x28adc8u: goto label_28adc8;
        case 0x28adccu: goto label_28adcc;
        case 0x28add0u: goto label_28add0;
        case 0x28add4u: goto label_28add4;
        case 0x28add8u: goto label_28add8;
        case 0x28addcu: goto label_28addc;
        case 0x28ade0u: goto label_28ade0;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ade8u: goto label_28ade8;
        case 0x28adecu: goto label_28adec;
        case 0x28adf0u: goto label_28adf0;
        case 0x28adf4u: goto label_28adf4;
        case 0x28adf8u: goto label_28adf8;
        case 0x28adfcu: goto label_28adfc;
        case 0x28ae00u: goto label_28ae00;
        case 0x28ae04u: goto label_28ae04;
        case 0x28ae08u: goto label_28ae08;
        case 0x28ae0cu: goto label_28ae0c;
        case 0x28ae10u: goto label_28ae10;
        case 0x28ae14u: goto label_28ae14;
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae1cu: goto label_28ae1c;
        case 0x28ae20u: goto label_28ae20;
        case 0x28ae24u: goto label_28ae24;
        case 0x28ae28u: goto label_28ae28;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae38u: goto label_28ae38;
        case 0x28ae3cu: goto label_28ae3c;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae44u: goto label_28ae44;
        case 0x28ae48u: goto label_28ae48;
        case 0x28ae4cu: goto label_28ae4c;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae54u: goto label_28ae54;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae60u: goto label_28ae60;
        case 0x28ae64u: goto label_28ae64;
        case 0x28ae68u: goto label_28ae68;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae74u: goto label_28ae74;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae80u: goto label_28ae80;
        case 0x28ae84u: goto label_28ae84;
        case 0x28ae88u: goto label_28ae88;
        case 0x28ae8cu: goto label_28ae8c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28ae94u: goto label_28ae94;
        case 0x28ae98u: goto label_28ae98;
        case 0x28ae9cu: goto label_28ae9c;
        case 0x28aea0u: goto label_28aea0;
        case 0x28aea4u: goto label_28aea4;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aeacu: goto label_28aeac;
        case 0x28aeb0u: goto label_28aeb0;
        case 0x28aeb4u: goto label_28aeb4;
        case 0x28aeb8u: goto label_28aeb8;
        case 0x28aebcu: goto label_28aebc;
        case 0x28aec0u: goto label_28aec0;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aec8u: goto label_28aec8;
        case 0x28aeccu: goto label_28aecc;
        case 0x28aed0u: goto label_28aed0;
        case 0x28aed4u: goto label_28aed4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aee0u: goto label_28aee0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aee8u: goto label_28aee8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28aef0u: goto label_28aef0;
        case 0x28aef4u: goto label_28aef4;
        case 0x28aef8u: goto label_28aef8;
        case 0x28aefcu: goto label_28aefc;
        case 0x28af00u: goto label_28af00;
        case 0x28af04u: goto label_28af04;
        case 0x28af08u: goto label_28af08;
        case 0x28af0cu: goto label_28af0c;
        case 0x28af10u: goto label_28af10;
        case 0x28af14u: goto label_28af14;
        case 0x28af18u: goto label_28af18;
        case 0x28af1cu: goto label_28af1c;
        case 0x28af20u: goto label_28af20;
        case 0x28af24u: goto label_28af24;
        case 0x28af28u: goto label_28af28;
        case 0x28af2cu: goto label_28af2c;
        case 0x28af30u: goto label_28af30;
        case 0x28af34u: goto label_28af34;
        case 0x28af38u: goto label_28af38;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af40u: goto label_28af40;
        case 0x28af44u: goto label_28af44;
        case 0x28af48u: goto label_28af48;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af50u: goto label_28af50;
        case 0x28af54u: goto label_28af54;
        case 0x28af58u: goto label_28af58;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af60u: goto label_28af60;
        case 0x28af64u: goto label_28af64;
        case 0x28af68u: goto label_28af68;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af70u: goto label_28af70;
        case 0x28af74u: goto label_28af74;
        case 0x28af78u: goto label_28af78;
        case 0x28af7cu: goto label_28af7c;
        case 0x28af80u: goto label_28af80;
        case 0x28af84u: goto label_28af84;
        default: break;
    }

    ctx->pc = 0x28ac80u;

label_28ac80:
    // 0x28ac80: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_28ac84:
    // 0x28ac84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_28ac88:
    // 0x28ac88: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x28ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_28ac8c:
    // 0x28ac8c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x28ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_28ac90:
    // 0x28ac90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28ac90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ac94:
    // 0x28ac94: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x28ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_28ac98:
    // 0x28ac98: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28ac98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ac9c:
    // 0x28ac9c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x28ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_28aca0:
    // 0x28aca0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x28aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_28aca4:
    // 0x28aca4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x28aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_28aca8:
    // 0x28aca8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x28aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_28acac:
    // 0x28acac: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x28acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_28acb0:
    // 0x28acb0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x28acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_28acb4:
    // 0x28acb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_28acb8:
    // 0x28acb8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x28acb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_28acbc:
    // 0x28acbc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x28acbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_28acc0:
    // 0x28acc0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x28acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_28acc4:
    // 0x28acc4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x28acc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_28acc8:
    // 0x28acc8: 0x184000a0  blez        $v0, . + 4 + (0xA0 << 2)
label_28accc:
    if (ctx->pc == 0x28ACCCu) {
        ctx->pc = 0x28ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACC8u;
        // 0x28accc: 0x8eb40000  lw          $s4, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACD0u;
        goto label_28acd0;
    }
    ctx->pc = 0x28ACC8u;
    {
        const bool branch_taken_0x28acc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACC8u;
        // 0x28accc: 0x8eb40000  lw          $s4, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acc8) {
            ctx->pc = 0x28AF4Cu;
            goto label_28af4c;
        }
    }
    ctx->pc = 0x28ACD0u;
label_28acd0:
    // 0x28acd0: 0x26830090  addiu       $v1, $s4, 0x90
    ctx->pc = 0x28acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_28acd4:
    // 0x28acd4: 0x26a2014e  addiu       $v0, $s5, 0x14E
    ctx->pc = 0x28acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 334));
label_28acd8:
    // 0x28acd8: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x28acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_28acdc:
    // 0x28acdc: 0x241e0228  addiu       $fp, $zero, 0x228
    ctx->pc = 0x28acdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_28ace0:
    // 0x28ace0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x28ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_28ace4:
    // 0x28ace4: 0x0  nop
    ctx->pc = 0x28ace4u;
    // NOP
label_28ace8:
    // 0x28ace8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_28acec:
    // 0x28acec: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x28acecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_28acf0:
    // 0x28acf0: 0xc0e409a  jal         func_390268
label_28acf4:
    if (ctx->pc == 0x28ACF4u) {
        ctx->pc = 0x28ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACF0u;
        // 0x28acf4: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACF8u;
        goto label_28acf8;
    }
    ctx->pc = 0x28ACF0u;
    SET_GPR_U32(ctx, 31, 0x28ACF8u);
    ctx->pc = 0x28ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ACF0u;
    // 0x28acf4: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28ACF0u, 0x28ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACF8u;
label_28acf8:
    // 0x28acf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28acf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28acfc:
    // 0x28acfc: 0x1240008d  beqz        $s2, . + 4 + (0x8D << 2)
label_28ad00:
    if (ctx->pc == 0x28AD00u) {
        ctx->pc = 0x28AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACFCu;
        // 0x28ad00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD04u;
        goto label_28ad04;
    }
    ctx->pc = 0x28ACFCu;
    {
        const bool branch_taken_0x28acfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACFCu;
        // 0x28ad00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acfc) {
            ctx->pc = 0x28AF34u;
            goto label_28af34;
        }
    }
    ctx->pc = 0x28AD04u;
label_28ad04:
    // 0x28ad04: 0x5254008c  beql        $s2, $s4, . + 4 + (0x8C << 2)
label_28ad08:
    if (ctx->pc == 0x28AD08u) {
        ctx->pc = 0x28AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD04u;
        // 0x28ad08: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD0Cu;
        goto label_28ad0c;
    }
    ctx->pc = 0x28AD04u;
    {
        const bool branch_taken_0x28ad04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x28ad04) {
            ctx->pc = 0x28AD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AD04u;
            // 0x28ad08: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AF38u;
            goto label_28af38;
        }
    }
    ctx->pc = 0x28AD0Cu;
label_28ad0c:
    // 0x28ad0c: 0xc6b4012c  lwc1        $f20, 0x12C($s5)
    ctx->pc = 0x28ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28ad10:
    // 0x28ad10: 0xc0a2fc0  jal         func_28BF00
label_28ad14:
    if (ctx->pc == 0x28AD14u) {
        ctx->pc = 0x28AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD10u;
        // 0x28ad14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD18u;
        goto label_28ad18;
    }
    ctx->pc = 0x28AD10u;
    SET_GPR_U32(ctx, 31, 0x28AD18u);
    ctx->pc = 0x28AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD10u;
    // 0x28ad14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x28AD10u, 0x28AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD18u;
label_28ad18:
    // 0x28ad18: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28ad18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_28ad1c:
    // 0x28ad1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x28ad1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_28ad20:
    // 0x28ad20: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_28ad24:
    // 0x28ad24: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28ad24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_28ad28:
    // 0x28ad28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28ad28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28ad2c:
    // 0x28ad2c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x28ad2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_28ad30:
    // 0x28ad30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ad34:
    // 0x28ad34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ad38:
    // 0x28ad38: 0xc0888fa  jal         func_2223E8
label_28ad3c:
    if (ctx->pc == 0x28AD3Cu) {
        ctx->pc = 0x28AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD38u;
        // 0x28ad3c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD40u;
        goto label_28ad40;
    }
    ctx->pc = 0x28AD38u;
    SET_GPR_U32(ctx, 31, 0x28AD40u);
    ctx->pc = 0x28AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD38u;
    // 0x28ad3c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x28AD38u, 0x28AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD40u;
label_28ad40:
    // 0x28ad40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28ad40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ad44:
    // 0x28ad44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ad48:
    // 0x28ad48: 0x16110070  bne         $s0, $s1, . + 4 + (0x70 << 2)
label_28ad4c:
    if (ctx->pc == 0x28AD4Cu) {
        ctx->pc = 0x28AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD48u;
        // 0x28ad4c: 0x26b7014e  addiu       $s7, $s5, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD50u;
        goto label_28ad50;
    }
    ctx->pc = 0x28AD48u;
    {
        const bool branch_taken_0x28ad48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD48u;
        // 0x28ad4c: 0x26b7014e  addiu       $s7, $s5, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 334));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad48) {
            ctx->pc = 0x28AF0Cu;
            goto label_28af0c;
        }
    }
    ctx->pc = 0x28AD50u;
label_28ad50:
    // 0x28ad50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_28ad54:
    // 0x28ad54: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x28ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_28ad58:
    // 0x28ad58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28ad5c:
    // 0x28ad5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28ad5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28ad60:
    // 0x28ad60: 0x5460006b  bnel        $v1, $zero, . + 4 + (0x6B << 2)
label_28ad64:
    if (ctx->pc == 0x28AD64u) {
        ctx->pc = 0x28AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD60u;
        // 0x28ad64: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD68u;
        goto label_28ad68;
    }
    ctx->pc = 0x28AD60u;
    {
        const bool branch_taken_0x28ad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ad60) {
            ctx->pc = 0x28AD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AD60u;
            // 0x28ad64: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AF10u;
            goto label_28af10;
        }
    }
    ctx->pc = 0x28AD68u;
label_28ad68:
    // 0x28ad68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ad6c:
    // 0x28ad6c: 0xc088976  jal         func_2225D8
label_28ad70:
    if (ctx->pc == 0x28AD70u) {
        ctx->pc = 0x28AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD6Cu;
        // 0x28ad70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD74u;
        goto label_28ad74;
    }
    ctx->pc = 0x28AD6Cu;
    SET_GPR_U32(ctx, 31, 0x28AD74u);
    ctx->pc = 0x28AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD6Cu;
    // 0x28ad70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D8u, 0x28AD6Cu, 0x28AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD74u;
label_28ad74:
    // 0x28ad74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ad78:
    // 0x28ad78: 0xc087502  jal         func_21D408
label_28ad7c:
    if (ctx->pc == 0x28AD7Cu) {
        ctx->pc = 0x28AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD78u;
        // 0x28ad7c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD80u;
        goto label_28ad80;
    }
    ctx->pc = 0x28AD78u;
    SET_GPR_U32(ctx, 31, 0x28AD80u);
    ctx->pc = 0x28AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD78u;
    // 0x28ad7c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28AD78u, 0x28AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD80u;
label_28ad80:
    // 0x28ad80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28ad80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ad84:
    // 0x28ad84: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x28ad84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_28ad88:
    // 0x28ad88: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x28ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_28ad8c:
    // 0x28ad8c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_28ad90:
    // 0x28ad90: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x28ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_28ad94:
    // 0x28ad94: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x28ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_28ad98:
    // 0x28ad98: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x28ad98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_28ad9c:
    // 0x28ad9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28ada0:
    // 0x28ada0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_28ada4:
    // 0x28ada4: 0xc0cdb38  jal         func_336CE0
label_28ada8:
    if (ctx->pc == 0x28ADA8u) {
        ctx->pc = 0x28ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADA4u;
        // 0x28ada8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADACu;
        goto label_28adac;
    }
    ctx->pc = 0x28ADA4u;
    SET_GPR_U32(ctx, 31, 0x28ADACu);
    ctx->pc = 0x28ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADA4u;
    // 0x28ada8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28ADA4u, 0x28ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADACu;
label_28adac:
    // 0x28adac: 0x926202d4  lbu         $v0, 0x2D4($s3)
    ctx->pc = 0x28adacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
label_28adb0:
    // 0x28adb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28adb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28adb4:
    // 0x28adb4: 0x14510011  bne         $v0, $s1, . + 4 + (0x11 << 2)
label_28adb8:
    if (ctx->pc == 0x28ADB8u) {
        ctx->pc = 0x28ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB4u;
        // 0x28adb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADBCu;
        goto label_28adbc;
    }
    ctx->pc = 0x28ADB4u;
    {
        const bool branch_taken_0x28adb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB4u;
        // 0x28adb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adb4) {
            ctx->pc = 0x28ADFCu;
            goto label_28adfc;
        }
    }
    ctx->pc = 0x28ADBCu;
label_28adbc:
    // 0x28adbc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x28adbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28adc0:
    // 0x28adc0: 0x0  nop
    ctx->pc = 0x28adc0u;
    // NOP
label_28adc4:
    // 0x28adc4: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_28adc8:
    if (ctx->pc == 0x28ADC8u) {
        ctx->pc = 0x28ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC4u;
        // 0x28adc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADCCu;
        goto label_28adcc;
    }
    ctx->pc = 0x28ADC4u;
    {
        const bool branch_taken_0x28adc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28adc4) {
            ctx->pc = 0x28ADC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ADC4u;
            // 0x28adc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ADFCu;
            goto label_28adfc;
        }
    }
    ctx->pc = 0x28ADCCu;
label_28adcc:
    // 0x28adcc: 0x926202d5  lbu         $v0, 0x2D5($s3)
    ctx->pc = 0x28adccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 725)));
label_28add0:
    // 0x28add0: 0x92a302d5  lbu         $v1, 0x2D5($s5)
    ctx->pc = 0x28add0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 725)));
label_28add4:
    // 0x28add4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_28add8:
    if (ctx->pc == 0x28ADD8u) {
        ctx->pc = 0x28ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADD4u;
        // 0x28add8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADDCu;
        goto label_28addc;
    }
    ctx->pc = 0x28ADD4u;
    {
        const bool branch_taken_0x28add4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADD4u;
        // 0x28add8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28add4) {
            ctx->pc = 0x28ADF0u;
            goto label_28adf0;
        }
    }
    ctx->pc = 0x28ADDCu;
label_28addc:
    // 0x28addc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_28ade0:
    // 0x28ade0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_28ade4:
    if (ctx->pc == 0x28ADE4u) {
        ctx->pc = 0x28ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADE0u;
        // 0x28ade4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADE8u;
        goto label_28ade8;
    }
    ctx->pc = 0x28ADE0u;
    {
        const bool branch_taken_0x28ade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ade0) {
            ctx->pc = 0x28ADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ADE0u;
            // 0x28ade4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ADFCu;
            goto label_28adfc;
        }
    }
    ctx->pc = 0x28ADE8u;
label_28ade8:
    // 0x28ade8: 0x10000004  b           . + 4 + (0x4 << 2)
label_28adec:
    if (ctx->pc == 0x28ADECu) {
        ctx->pc = 0x28ADF0u;
        goto label_28adf0;
    }
    ctx->pc = 0x28ADE8u;
    {
        const bool branch_taken_0x28ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ade8) {
            ctx->pc = 0x28ADFCu;
            goto label_28adfc;
        }
    }
    ctx->pc = 0x28ADF0u;
label_28adf0:
    // 0x28adf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_28adf4:
    if (ctx->pc == 0x28ADF4u) {
        ctx->pc = 0x28ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADF0u;
        // 0x28adf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADF8u;
        goto label_28adf8;
    }
    ctx->pc = 0x28ADF0u;
    {
        const bool branch_taken_0x28adf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADF0u;
        // 0x28adf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adf0) {
            ctx->pc = 0x28ADFCu;
            goto label_28adfc;
        }
    }
    ctx->pc = 0x28ADF8u;
label_28adf8:
    // 0x28adf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28adf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28adfc:
    // 0x28adfc: 0xc088f14  jal         func_223C50
label_28ae00:
    if (ctx->pc == 0x28AE00u) {
        ctx->pc = 0x28AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADFCu;
        // 0x28ae00: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE04u;
        goto label_28ae04;
    }
    ctx->pc = 0x28ADFCu;
    SET_GPR_U32(ctx, 31, 0x28AE04u);
    ctx->pc = 0x28AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADFCu;
    // 0x28ae00: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C50u, 0x28ADFCu, 0x28AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE04u;
label_28ae04:
    // 0x28ae04: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
label_28ae08:
    if (ctx->pc == 0x28AE08u) {
        ctx->pc = 0x28AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE04u;
        // 0x28ae08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE0Cu;
        goto label_28ae0c;
    }
    ctx->pc = 0x28AE04u;
    {
        const bool branch_taken_0x28ae04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE04u;
        // 0x28ae08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae04) {
            ctx->pc = 0x28AE1Cu;
            goto label_28ae1c;
        }
    }
    ctx->pc = 0x28AE0Cu;
label_28ae0c:
    // 0x28ae0c: 0xc6ac012c  lwc1        $f12, 0x12C($s5)
    ctx->pc = 0x28ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28ae10:
    // 0x28ae10: 0xc0889b8  jal         func_2226E0
label_28ae14:
    if (ctx->pc == 0x28AE14u) {
        ctx->pc = 0x28AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE10u;
        // 0x28ae14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE18u;
        goto label_28ae18;
    }
    ctx->pc = 0x28AE10u;
    SET_GPR_U32(ctx, 31, 0x28AE18u);
    ctx->pc = 0x28AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE10u;
    // 0x28ae14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x28AE10u, 0x28AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE18u;
label_28ae18:
    // 0x28ae18: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x28ae18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_28ae1c:
    // 0x28ae1c: 0x5611003c  bnel        $s0, $s1, . + 4 + (0x3C << 2)
label_28ae20:
    if (ctx->pc == 0x28AE20u) {
        ctx->pc = 0x28AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE1Cu;
        // 0x28ae20: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE24u;
        goto label_28ae24;
    }
    ctx->pc = 0x28AE1Cu;
    {
        const bool branch_taken_0x28ae1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x28ae1c) {
            ctx->pc = 0x28AE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AE1Cu;
            // 0x28ae20: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AF10u;
            goto label_28af10;
        }
    }
    ctx->pc = 0x28AE24u;
label_28ae24:
    // 0x28ae24: 0x8eb1020c  lw          $s1, 0x20C($s5)
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
label_28ae28:
    // 0x28ae28: 0x922200d1  lbu         $v0, 0xD1($s1)
    ctx->pc = 0x28ae28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 209)));
label_28ae2c:
    // 0x28ae2c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_28ae30:
    if (ctx->pc == 0x28AE30u) {
        ctx->pc = 0x28AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE2Cu;
        // 0x28ae30: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE34u;
        goto label_28ae34;
    }
    ctx->pc = 0x28AE2Cu;
    {
        const bool branch_taken_0x28ae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE2Cu;
        // 0x28ae30: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae2c) {
            ctx->pc = 0x28AEECu;
            goto label_28aeec;
        }
    }
    ctx->pc = 0x28AE34u;
label_28ae34:
    // 0x28ae34: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_28ae38:
    // 0x28ae38: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_28ae3c:
    if (ctx->pc == 0x28AE3Cu) {
        ctx->pc = 0x28AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE38u;
        // 0x28ae3c: 0xa23000d1  sb          $s0, 0xD1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 209), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE40u;
        goto label_28ae40;
    }
    ctx->pc = 0x28AE38u;
    {
        const bool branch_taken_0x28ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE38u;
        // 0x28ae3c: 0xa23000d1  sb          $s0, 0xD1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 209), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae38) {
            ctx->pc = 0x28AEE8u;
            goto label_28aee8;
        }
    }
    ctx->pc = 0x28AE40u;
label_28ae40:
    // 0x28ae40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x28ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_28ae44:
    // 0x28ae44: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_28ae48:
    // 0x28ae48: 0x922300d2  lbu         $v1, 0xD2($s1)
    ctx->pc = 0x28ae48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 210)));
label_28ae4c:
    // 0x28ae4c: 0x8c4456f8  lw          $a0, 0x56F8($v0)
    ctx->pc = 0x28ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22264)));
label_28ae50:
    // 0x28ae50: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_28ae54:
    if (ctx->pc == 0x28AE54u) {
        ctx->pc = 0x28AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE50u;
        // 0x28ae54: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE58u;
        goto label_28ae58;
    }
    ctx->pc = 0x28AE50u;
    {
        const bool branch_taken_0x28ae50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE50u;
        // 0x28ae54: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae50) {
            ctx->pc = 0x28AEE8u;
            goto label_28aee8;
        }
    }
    ctx->pc = 0x28AE58u;
label_28ae58:
    // 0x28ae58: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_28ae5c:
    if (ctx->pc == 0x28AE5Cu) {
        ctx->pc = 0x28AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE58u;
        // 0x28ae5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE60u;
        goto label_28ae60;
    }
    ctx->pc = 0x28AE58u;
    {
        const bool branch_taken_0x28ae58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE58u;
        // 0x28ae5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae58) {
            ctx->pc = 0x28AEECu;
            goto label_28aeec;
        }
    }
    ctx->pc = 0x28AE60u;
label_28ae60:
    // 0x28ae60: 0x8e65020c  lw          $a1, 0x20C($s3)
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_28ae64:
    // 0x28ae64: 0xc05a3f8  jal         func_168FE0
label_28ae68:
    if (ctx->pc == 0x28AE68u) {
        ctx->pc = 0x28AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE64u;
        // 0x28ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE6Cu;
        goto label_28ae6c;
    }
    ctx->pc = 0x28AE64u;
    SET_GPR_U32(ctx, 31, 0x28AE6Cu);
    ctx->pc = 0x28AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE64u;
    // 0x28ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x28AE64u, 0x28AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE6Cu;
label_28ae6c:
    // 0x28ae6c: 0x1450001f  bne         $v0, $s0, . + 4 + (0x1F << 2)
label_28ae70:
    if (ctx->pc == 0x28AE70u) {
        ctx->pc = 0x28AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE6Cu;
        // 0x28ae70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE74u;
        goto label_28ae74;
    }
    ctx->pc = 0x28AE6Cu;
    {
        const bool branch_taken_0x28ae6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE6Cu;
        // 0x28ae70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae6c) {
            ctx->pc = 0x28AEECu;
            goto label_28aeec;
        }
    }
    ctx->pc = 0x28AE74u;
label_28ae74:
    // 0x28ae74: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x28ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28ae78:
    // 0x28ae78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_28ae7c:
    // 0x28ae7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28ae80:
    if (ctx->pc == 0x28AE80u) {
        ctx->pc = 0x28AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE7Cu;
        // 0x28ae80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE84u;
        goto label_28ae84;
    }
    ctx->pc = 0x28AE7Cu;
    {
        const bool branch_taken_0x28ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE7Cu;
        // 0x28ae80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae7c) {
            ctx->pc = 0x28AEA0u;
            goto label_28aea0;
        }
    }
    ctx->pc = 0x28AE84u;
label_28ae84:
    // 0x28ae84: 0xc08a096  jal         func_228258
label_28ae88:
    if (ctx->pc == 0x28AE88u) {
        ctx->pc = 0x28AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE84u;
        // 0x28ae88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE8Cu;
        goto label_28ae8c;
    }
    ctx->pc = 0x28AE84u;
    SET_GPR_U32(ctx, 31, 0x28AE8Cu);
    ctx->pc = 0x28AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE84u;
    // 0x28ae88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x28AE84u, 0x28AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE8Cu;
label_28ae8c:
    // 0x28ae8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_28ae90:
    if (ctx->pc == 0x28AE90u) {
        ctx->pc = 0x28AE94u;
        goto label_28ae94;
    }
    ctx->pc = 0x28AE8Cu;
    {
        const bool branch_taken_0x28ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ae8c) {
            ctx->pc = 0x28AEA0u;
            goto label_28aea0;
        }
    }
    ctx->pc = 0x28AE94u;
label_28ae94:
    // 0x28ae94: 0xc08a08a  jal         func_228228
label_28ae98:
    if (ctx->pc == 0x28AE98u) {
        ctx->pc = 0x28AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE94u;
        // 0x28ae98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE9Cu;
        goto label_28ae9c;
    }
    ctx->pc = 0x28AE94u;
    SET_GPR_U32(ctx, 31, 0x28AE9Cu);
    ctx->pc = 0x28AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE94u;
    // 0x28ae98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x28AE94u, 0x28AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE9Cu;
label_28ae9c:
    // 0x28ae9c: 0x202980a  movz        $s3, $s0, $v0
    ctx->pc = 0x28ae9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_28aea0:
    // 0x28aea0: 0x52600011  beql        $s3, $zero, . + 4 + (0x11 << 2)
label_28aea4:
    if (ctx->pc == 0x28AEA4u) {
        ctx->pc = 0x28AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEA0u;
        // 0x28aea4: 0xa22000d2  sb          $zero, 0xD2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 210), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEA8u;
        goto label_28aea8;
    }
    ctx->pc = 0x28AEA0u;
    {
        const bool branch_taken_0x28aea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aea0) {
            ctx->pc = 0x28AEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AEA0u;
            // 0x28aea4: 0xa22000d2  sb          $zero, 0xD2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 210), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AEE8u;
            goto label_28aee8;
        }
    }
    ctx->pc = 0x28AEA8u;
label_28aea8:
    // 0x28aea8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28aeac:
    // 0x28aeac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28aeb0:
    // 0x28aeb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28aeb4:
    // 0x28aeb4: 0x40f809  jalr        $v0
label_28aeb8:
    if (ctx->pc == 0x28AEB8u) {
        ctx->pc = 0x28AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEB4u;
        // 0x28aeb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEBCu;
        goto label_28aebc;
    }
    ctx->pc = 0x28AEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28AEBCu);
        ctx->pc = 0x28AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEB4u;
        // 0x28aeb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AEB4u, 0x28AEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AEBCu;
label_28aebc:
    // 0x28aebc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28aebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_28aec0:
    // 0x28aec0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28aec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28aec4:
    // 0x28aec4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28aec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28aec8:
    // 0x28aec8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aecc:
    // 0x28aecc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_28aed0:
    // 0x28aed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28aed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aed4:
    // 0x28aed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28aed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28aed8:
    // 0x28aed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28aed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aedc:
    // 0x28aedc: 0xc088178  jal         func_2205E0
label_28aee0:
    if (ctx->pc == 0x28AEE0u) {
        ctx->pc = 0x28AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEDCu;
        // 0x28aee0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEE4u;
        goto label_28aee4;
    }
    ctx->pc = 0x28AEDCu;
    SET_GPR_U32(ctx, 31, 0x28AEE4u);
    ctx->pc = 0x28AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEDCu;
    // 0x28aee0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x28AEDCu, 0x28AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEE4u;
label_28aee4:
    // 0x28aee4: 0xa22000d2  sb          $zero, 0xD2($s1)
    ctx->pc = 0x28aee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 210), (uint8_t)GPR_U32(ctx, 0));
label_28aee8:
    // 0x28aee8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28aeec:
    // 0x28aeec: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x28aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
label_28aef0:
    // 0x28aef0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28aef4:
    // 0x28aef4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28aef8:
    // 0x28aef8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28aefc:
    // 0x28aefc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28aefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28af00:
    // 0x28af00: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28af04:
    // 0x28af04: 0x40f809  jalr        $v0
label_28af08:
    if (ctx->pc == 0x28AF08u) {
        ctx->pc = 0x28AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF04u;
        // 0x28af08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF0Cu;
        goto label_28af0c;
    }
    ctx->pc = 0x28AF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28AF0Cu);
        ctx->pc = 0x28AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF04u;
        // 0x28af08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF04u, 0x28AF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AF0Cu;
label_28af0c:
    // 0x28af0c: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x28af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_28af10:
    // 0x28af10: 0x26a40150  addiu       $a0, $s5, 0x150
    ctx->pc = 0x28af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_28af14:
    // 0x28af14: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x28af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28af18:
    // 0x28af18: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x28af18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_28af1c:
    // 0x28af1c: 0x8e430380  lw          $v1, 0x380($s2)
    ctx->pc = 0x28af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_28af20:
    // 0x28af20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28af24:
    // 0x28af24: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28af24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_28af28:
    // 0x28af28: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x28af28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_28af2c:
    // 0x28af2c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28af2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_28af30:
    // 0x28af30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_28af34:
    // 0x28af34: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28af34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28af38:
    // 0x28af38: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x28af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_28af3c:
    // 0x28af3c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x28af3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_28af40:
    // 0x28af40: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x28af40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28af44:
    // 0x28af44: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
label_28af48:
    if (ctx->pc == 0x28AF48u) {
        ctx->pc = 0x28AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF44u;
        // 0x28af48: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF4Cu;
        goto label_28af4c;
    }
    ctx->pc = 0x28AF44u;
    {
        const bool branch_taken_0x28af44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF44u;
        // 0x28af48: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af44) {
            ctx->pc = 0x28ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ace8;
        }
    }
    ctx->pc = 0x28AF4Cu;
label_28af4c:
    // 0x28af4c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x28af4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28af50:
    // 0x28af50: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x28af50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28af54:
    // 0x28af54: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x28af54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28af58:
    // 0x28af58: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x28af58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28af5c:
    // 0x28af5c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x28af5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28af60:
    // 0x28af60: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x28af60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28af64:
    // 0x28af64: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x28af64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28af68:
    // 0x28af68: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x28af68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28af6c:
    // 0x28af6c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x28af6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28af70:
    // 0x28af70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28af70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28af74:
    // 0x28af74: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x28af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28af78:
    // 0x28af78: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x28af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28af7c:
    // 0x28af7c: 0x3e00008  jr          $ra
label_28af80:
    if (ctx->pc == 0x28AF80u) {
        ctx->pc = 0x28AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF7Cu;
        // 0x28af80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF84u;
        goto label_28af84;
    }
    ctx->pc = 0x28AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF7Cu;
        // 0x28af80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AF84u;
label_28af84:
    // 0x28af84: 0x0  nop
    ctx->pc = 0x28af84u;
    // NOP
    ctx->pc = 0x28af88u;
}
