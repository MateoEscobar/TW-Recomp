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

// Function: sub_001BBBB0
// Address: 0x1bbbb0 - 0x1bc000
void sub_001BBBB0_0x1bbbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBBB0_0x1bbbb0");
#endif

    switch (ctx->pc) {
        case 0x1bbbb0u: goto label_1bbbb0;
        case 0x1bbbb4u: goto label_1bbbb4;
        case 0x1bbbb8u: goto label_1bbbb8;
        case 0x1bbbbcu: goto label_1bbbbc;
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc4u: goto label_1bbbc4;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbccu: goto label_1bbbcc;
        case 0x1bbbd0u: goto label_1bbbd0;
        case 0x1bbbd4u: goto label_1bbbd4;
        case 0x1bbbd8u: goto label_1bbbd8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbbe0u: goto label_1bbbe0;
        case 0x1bbbe4u: goto label_1bbbe4;
        case 0x1bbbe8u: goto label_1bbbe8;
        case 0x1bbbecu: goto label_1bbbec;
        case 0x1bbbf0u: goto label_1bbbf0;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbbf8u: goto label_1bbbf8;
        case 0x1bbbfcu: goto label_1bbbfc;
        case 0x1bbc00u: goto label_1bbc00;
        case 0x1bbc04u: goto label_1bbc04;
        case 0x1bbc08u: goto label_1bbc08;
        case 0x1bbc0cu: goto label_1bbc0c;
        case 0x1bbc10u: goto label_1bbc10;
        case 0x1bbc14u: goto label_1bbc14;
        case 0x1bbc18u: goto label_1bbc18;
        case 0x1bbc1cu: goto label_1bbc1c;
        case 0x1bbc20u: goto label_1bbc20;
        case 0x1bbc24u: goto label_1bbc24;
        case 0x1bbc28u: goto label_1bbc28;
        case 0x1bbc2cu: goto label_1bbc2c;
        case 0x1bbc30u: goto label_1bbc30;
        case 0x1bbc34u: goto label_1bbc34;
        case 0x1bbc38u: goto label_1bbc38;
        case 0x1bbc3cu: goto label_1bbc3c;
        case 0x1bbc40u: goto label_1bbc40;
        case 0x1bbc44u: goto label_1bbc44;
        case 0x1bbc48u: goto label_1bbc48;
        case 0x1bbc4cu: goto label_1bbc4c;
        case 0x1bbc50u: goto label_1bbc50;
        case 0x1bbc54u: goto label_1bbc54;
        case 0x1bbc58u: goto label_1bbc58;
        case 0x1bbc5cu: goto label_1bbc5c;
        case 0x1bbc60u: goto label_1bbc60;
        case 0x1bbc64u: goto label_1bbc64;
        case 0x1bbc68u: goto label_1bbc68;
        case 0x1bbc6cu: goto label_1bbc6c;
        case 0x1bbc70u: goto label_1bbc70;
        case 0x1bbc74u: goto label_1bbc74;
        case 0x1bbc78u: goto label_1bbc78;
        case 0x1bbc7cu: goto label_1bbc7c;
        case 0x1bbc80u: goto label_1bbc80;
        case 0x1bbc84u: goto label_1bbc84;
        case 0x1bbc88u: goto label_1bbc88;
        case 0x1bbc8cu: goto label_1bbc8c;
        case 0x1bbc90u: goto label_1bbc90;
        case 0x1bbc94u: goto label_1bbc94;
        case 0x1bbc98u: goto label_1bbc98;
        case 0x1bbc9cu: goto label_1bbc9c;
        case 0x1bbca0u: goto label_1bbca0;
        case 0x1bbca4u: goto label_1bbca4;
        case 0x1bbca8u: goto label_1bbca8;
        case 0x1bbcacu: goto label_1bbcac;
        case 0x1bbcb0u: goto label_1bbcb0;
        case 0x1bbcb4u: goto label_1bbcb4;
        case 0x1bbcb8u: goto label_1bbcb8;
        case 0x1bbcbcu: goto label_1bbcbc;
        case 0x1bbcc0u: goto label_1bbcc0;
        case 0x1bbcc4u: goto label_1bbcc4;
        case 0x1bbcc8u: goto label_1bbcc8;
        case 0x1bbcccu: goto label_1bbccc;
        case 0x1bbcd0u: goto label_1bbcd0;
        case 0x1bbcd4u: goto label_1bbcd4;
        case 0x1bbcd8u: goto label_1bbcd8;
        case 0x1bbcdcu: goto label_1bbcdc;
        case 0x1bbce0u: goto label_1bbce0;
        case 0x1bbce4u: goto label_1bbce4;
        case 0x1bbce8u: goto label_1bbce8;
        case 0x1bbcecu: goto label_1bbcec;
        case 0x1bbcf0u: goto label_1bbcf0;
        case 0x1bbcf4u: goto label_1bbcf4;
        case 0x1bbcf8u: goto label_1bbcf8;
        case 0x1bbcfcu: goto label_1bbcfc;
        case 0x1bbd00u: goto label_1bbd00;
        case 0x1bbd04u: goto label_1bbd04;
        case 0x1bbd08u: goto label_1bbd08;
        case 0x1bbd0cu: goto label_1bbd0c;
        case 0x1bbd10u: goto label_1bbd10;
        case 0x1bbd14u: goto label_1bbd14;
        case 0x1bbd18u: goto label_1bbd18;
        case 0x1bbd1cu: goto label_1bbd1c;
        case 0x1bbd20u: goto label_1bbd20;
        case 0x1bbd24u: goto label_1bbd24;
        case 0x1bbd28u: goto label_1bbd28;
        case 0x1bbd2cu: goto label_1bbd2c;
        case 0x1bbd30u: goto label_1bbd30;
        case 0x1bbd34u: goto label_1bbd34;
        case 0x1bbd38u: goto label_1bbd38;
        case 0x1bbd3cu: goto label_1bbd3c;
        case 0x1bbd40u: goto label_1bbd40;
        case 0x1bbd44u: goto label_1bbd44;
        case 0x1bbd48u: goto label_1bbd48;
        case 0x1bbd4cu: goto label_1bbd4c;
        case 0x1bbd50u: goto label_1bbd50;
        case 0x1bbd54u: goto label_1bbd54;
        case 0x1bbd58u: goto label_1bbd58;
        case 0x1bbd5cu: goto label_1bbd5c;
        case 0x1bbd60u: goto label_1bbd60;
        case 0x1bbd64u: goto label_1bbd64;
        case 0x1bbd68u: goto label_1bbd68;
        case 0x1bbd6cu: goto label_1bbd6c;
        case 0x1bbd70u: goto label_1bbd70;
        case 0x1bbd74u: goto label_1bbd74;
        case 0x1bbd78u: goto label_1bbd78;
        case 0x1bbd7cu: goto label_1bbd7c;
        case 0x1bbd80u: goto label_1bbd80;
        case 0x1bbd84u: goto label_1bbd84;
        case 0x1bbd88u: goto label_1bbd88;
        case 0x1bbd8cu: goto label_1bbd8c;
        case 0x1bbd90u: goto label_1bbd90;
        case 0x1bbd94u: goto label_1bbd94;
        case 0x1bbd98u: goto label_1bbd98;
        case 0x1bbd9cu: goto label_1bbd9c;
        case 0x1bbda0u: goto label_1bbda0;
        case 0x1bbda4u: goto label_1bbda4;
        case 0x1bbda8u: goto label_1bbda8;
        case 0x1bbdacu: goto label_1bbdac;
        case 0x1bbdb0u: goto label_1bbdb0;
        case 0x1bbdb4u: goto label_1bbdb4;
        case 0x1bbdb8u: goto label_1bbdb8;
        case 0x1bbdbcu: goto label_1bbdbc;
        case 0x1bbdc0u: goto label_1bbdc0;
        case 0x1bbdc4u: goto label_1bbdc4;
        case 0x1bbdc8u: goto label_1bbdc8;
        case 0x1bbdccu: goto label_1bbdcc;
        case 0x1bbdd0u: goto label_1bbdd0;
        case 0x1bbdd4u: goto label_1bbdd4;
        case 0x1bbdd8u: goto label_1bbdd8;
        case 0x1bbddcu: goto label_1bbddc;
        case 0x1bbde0u: goto label_1bbde0;
        case 0x1bbde4u: goto label_1bbde4;
        case 0x1bbde8u: goto label_1bbde8;
        case 0x1bbdecu: goto label_1bbdec;
        case 0x1bbdf0u: goto label_1bbdf0;
        case 0x1bbdf4u: goto label_1bbdf4;
        case 0x1bbdf8u: goto label_1bbdf8;
        case 0x1bbdfcu: goto label_1bbdfc;
        case 0x1bbe00u: goto label_1bbe00;
        case 0x1bbe04u: goto label_1bbe04;
        case 0x1bbe08u: goto label_1bbe08;
        case 0x1bbe0cu: goto label_1bbe0c;
        case 0x1bbe10u: goto label_1bbe10;
        case 0x1bbe14u: goto label_1bbe14;
        case 0x1bbe18u: goto label_1bbe18;
        case 0x1bbe1cu: goto label_1bbe1c;
        case 0x1bbe20u: goto label_1bbe20;
        case 0x1bbe24u: goto label_1bbe24;
        case 0x1bbe28u: goto label_1bbe28;
        case 0x1bbe2cu: goto label_1bbe2c;
        case 0x1bbe30u: goto label_1bbe30;
        case 0x1bbe34u: goto label_1bbe34;
        case 0x1bbe38u: goto label_1bbe38;
        case 0x1bbe3cu: goto label_1bbe3c;
        case 0x1bbe40u: goto label_1bbe40;
        case 0x1bbe44u: goto label_1bbe44;
        case 0x1bbe48u: goto label_1bbe48;
        case 0x1bbe4cu: goto label_1bbe4c;
        case 0x1bbe50u: goto label_1bbe50;
        case 0x1bbe54u: goto label_1bbe54;
        case 0x1bbe58u: goto label_1bbe58;
        case 0x1bbe5cu: goto label_1bbe5c;
        case 0x1bbe60u: goto label_1bbe60;
        case 0x1bbe64u: goto label_1bbe64;
        case 0x1bbe68u: goto label_1bbe68;
        case 0x1bbe6cu: goto label_1bbe6c;
        case 0x1bbe70u: goto label_1bbe70;
        case 0x1bbe74u: goto label_1bbe74;
        case 0x1bbe78u: goto label_1bbe78;
        case 0x1bbe7cu: goto label_1bbe7c;
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbe84u: goto label_1bbe84;
        case 0x1bbe88u: goto label_1bbe88;
        case 0x1bbe8cu: goto label_1bbe8c;
        case 0x1bbe90u: goto label_1bbe90;
        case 0x1bbe94u: goto label_1bbe94;
        case 0x1bbe98u: goto label_1bbe98;
        case 0x1bbe9cu: goto label_1bbe9c;
        case 0x1bbea0u: goto label_1bbea0;
        case 0x1bbea4u: goto label_1bbea4;
        case 0x1bbea8u: goto label_1bbea8;
        case 0x1bbeacu: goto label_1bbeac;
        case 0x1bbeb0u: goto label_1bbeb0;
        case 0x1bbeb4u: goto label_1bbeb4;
        case 0x1bbeb8u: goto label_1bbeb8;
        case 0x1bbebcu: goto label_1bbebc;
        case 0x1bbec0u: goto label_1bbec0;
        case 0x1bbec4u: goto label_1bbec4;
        case 0x1bbec8u: goto label_1bbec8;
        case 0x1bbeccu: goto label_1bbecc;
        case 0x1bbed0u: goto label_1bbed0;
        case 0x1bbed4u: goto label_1bbed4;
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbedcu: goto label_1bbedc;
        case 0x1bbee0u: goto label_1bbee0;
        case 0x1bbee4u: goto label_1bbee4;
        case 0x1bbee8u: goto label_1bbee8;
        case 0x1bbeecu: goto label_1bbeec;
        case 0x1bbef0u: goto label_1bbef0;
        case 0x1bbef4u: goto label_1bbef4;
        case 0x1bbef8u: goto label_1bbef8;
        case 0x1bbefcu: goto label_1bbefc;
        case 0x1bbf00u: goto label_1bbf00;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf08u: goto label_1bbf08;
        case 0x1bbf0cu: goto label_1bbf0c;
        case 0x1bbf10u: goto label_1bbf10;
        case 0x1bbf14u: goto label_1bbf14;
        case 0x1bbf18u: goto label_1bbf18;
        case 0x1bbf1cu: goto label_1bbf1c;
        case 0x1bbf20u: goto label_1bbf20;
        case 0x1bbf24u: goto label_1bbf24;
        case 0x1bbf28u: goto label_1bbf28;
        case 0x1bbf2cu: goto label_1bbf2c;
        case 0x1bbf30u: goto label_1bbf30;
        case 0x1bbf34u: goto label_1bbf34;
        case 0x1bbf38u: goto label_1bbf38;
        case 0x1bbf3cu: goto label_1bbf3c;
        case 0x1bbf40u: goto label_1bbf40;
        case 0x1bbf44u: goto label_1bbf44;
        case 0x1bbf48u: goto label_1bbf48;
        case 0x1bbf4cu: goto label_1bbf4c;
        case 0x1bbf50u: goto label_1bbf50;
        case 0x1bbf54u: goto label_1bbf54;
        case 0x1bbf58u: goto label_1bbf58;
        case 0x1bbf5cu: goto label_1bbf5c;
        case 0x1bbf60u: goto label_1bbf60;
        case 0x1bbf64u: goto label_1bbf64;
        case 0x1bbf68u: goto label_1bbf68;
        case 0x1bbf6cu: goto label_1bbf6c;
        case 0x1bbf70u: goto label_1bbf70;
        case 0x1bbf74u: goto label_1bbf74;
        case 0x1bbf78u: goto label_1bbf78;
        case 0x1bbf7cu: goto label_1bbf7c;
        case 0x1bbf80u: goto label_1bbf80;
        case 0x1bbf84u: goto label_1bbf84;
        case 0x1bbf88u: goto label_1bbf88;
        case 0x1bbf8cu: goto label_1bbf8c;
        case 0x1bbf90u: goto label_1bbf90;
        case 0x1bbf94u: goto label_1bbf94;
        case 0x1bbf98u: goto label_1bbf98;
        case 0x1bbf9cu: goto label_1bbf9c;
        case 0x1bbfa0u: goto label_1bbfa0;
        case 0x1bbfa4u: goto label_1bbfa4;
        case 0x1bbfa8u: goto label_1bbfa8;
        case 0x1bbfacu: goto label_1bbfac;
        case 0x1bbfb0u: goto label_1bbfb0;
        case 0x1bbfb4u: goto label_1bbfb4;
        case 0x1bbfb8u: goto label_1bbfb8;
        case 0x1bbfbcu: goto label_1bbfbc;
        case 0x1bbfc0u: goto label_1bbfc0;
        case 0x1bbfc4u: goto label_1bbfc4;
        case 0x1bbfc8u: goto label_1bbfc8;
        case 0x1bbfccu: goto label_1bbfcc;
        case 0x1bbfd0u: goto label_1bbfd0;
        case 0x1bbfd4u: goto label_1bbfd4;
        case 0x1bbfd8u: goto label_1bbfd8;
        case 0x1bbfdcu: goto label_1bbfdc;
        case 0x1bbfe0u: goto label_1bbfe0;
        case 0x1bbfe4u: goto label_1bbfe4;
        case 0x1bbfe8u: goto label_1bbfe8;
        case 0x1bbfecu: goto label_1bbfec;
        case 0x1bbff0u: goto label_1bbff0;
        case 0x1bbff4u: goto label_1bbff4;
        case 0x1bbff8u: goto label_1bbff8;
        case 0x1bbffcu: goto label_1bbffc;
        default: break;
    }

    ctx->pc = 0x1bbbb0u;

label_1bbbb0:
    // 0x1bbbb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1bbbb4:
    // 0x1bbbb4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bbbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1bbbb8:
    // 0x1bbbb8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1bbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1bbbbc:
    // 0x1bbbbc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bbbbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bbbc0:
    // 0x1bbbc0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1bbbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1bbbc4:
    // 0x1bbbc4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1bbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1bbbc8:
    // 0x1bbbc8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1bbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1bbbcc:
    // 0x1bbbcc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1bbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1bbbd0:
    // 0x1bbbd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bbbd4:
    // 0x1bbbd4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1bbbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1bbbd8:
    // 0x1bbbd8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1bbbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1bbbdc:
    // 0x1bbbdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bbbe0:
    // 0x1bbbe0: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x1bbbe0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1bbbe4:
    // 0x1bbbe4: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x1bbbe4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1bbbe8:
    // 0x1bbbe8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1bbbe8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1bbbec:
    // 0x1bbbec: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1bbbecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1bbbf0:
    // 0x1bbbf0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1bbbf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1bbbf4:
    // 0x1bbbf4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1bbbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1bbbf8:
    // 0x1bbbf8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1bbbfc:
    // 0x1bbbfc: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
label_1bbc00:
    if (ctx->pc == 0x1BBC00u) {
        ctx->pc = 0x1BBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBFCu;
        // 0x1bbc00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC04u;
        goto label_1bbc04;
    }
    ctx->pc = 0x1BBBFCu;
    {
        const bool branch_taken_0x1bbbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBFCu;
        // 0x1bbc00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbfc) {
            ctx->pc = 0x1BBFDCu;
            goto label_1bbfdc;
        }
    }
    ctx->pc = 0x1BBC04u;
label_1bbc04:
    // 0x1bbc04: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1bbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1bbc08:
    // 0x1bbc08: 0x2442e780  addiu       $v0, $v0, -0x1880
    ctx->pc = 0x1bbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
label_1bbc0c:
    // 0x1bbc0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bbc0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bbc10:
    // 0x1bbc10: 0xc441ff80  lwc1        $f1, -0x80($v0)
    ctx->pc = 0x1bbc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bbc14:
    // 0x1bbc14: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1bbc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1bbc18:
    // 0x1bbc18: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bbc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbc1c:
    // 0x1bbc1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bbc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bbc20:
    // 0x1bbc20: 0x0  nop
    ctx->pc = 0x1bbc20u;
    // NOP
label_1bbc24:
    // 0x1bbc24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1bbc28:
    if (ctx->pc == 0x1BBC28u) {
        ctx->pc = 0x1BBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC24u;
        // 0x1bbc28: 0x2444ff80  addiu       $a0, $v0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC2Cu;
        goto label_1bbc2c;
    }
    ctx->pc = 0x1BBC24u;
    {
        const bool branch_taken_0x1bbc24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC24u;
        // 0x1bbc28: 0x2444ff80  addiu       $a0, $v0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc24) {
            ctx->pc = 0x1BBC34u;
            goto label_1bbc34;
        }
    }
    ctx->pc = 0x1BBC2Cu;
label_1bbc2c:
    // 0x1bbc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbc30:
    // 0x1bbc30: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1bbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1bbc34:
    // 0x1bbc34: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1bbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bbc38:
    // 0x1bbc38: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1bbc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbc3c:
    // 0x1bbc3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bbc3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bbc40:
    // 0x1bbc40: 0x0  nop
    ctx->pc = 0x1bbc40u;
    // NOP
label_1bbc44:
    // 0x1bbc44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bbc48:
    if (ctx->pc == 0x1BBC48u) {
        ctx->pc = 0x1BBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC44u;
        // 0x1bbc48: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC4Cu;
        goto label_1bbc4c;
    }
    ctx->pc = 0x1BBC44u;
    {
        const bool branch_taken_0x1bbc44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC44u;
        // 0x1bbc48: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc44) {
            ctx->pc = 0x1BBC50u;
            goto label_1bbc50;
        }
    }
    ctx->pc = 0x1BBC4Cu;
label_1bbc4c:
    // 0x1bbc4c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1bbc4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbc50:
    // 0x1bbc50: 0xc047e6c  jal         func_11F9B0
label_1bbc54:
    if (ctx->pc == 0x1BBC54u) {
        ctx->pc = 0x1BBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC50u;
        // 0x1bbc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC58u;
        goto label_1bbc58;
    }
    ctx->pc = 0x1BBC50u;
    SET_GPR_U32(ctx, 31, 0x1BBC58u);
    ctx->pc = 0x1BBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC50u;
    // 0x1bbc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1BBC50u, 0x1BBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC58u;
label_1bbc58:
    // 0x1bbc58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bbc58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bbc5c:
    // 0x1bbc5c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_1bbc60:
    if (ctx->pc == 0x1BBC60u) {
        ctx->pc = 0x1BBC64u;
        goto label_1bbc64;
    }
    ctx->pc = 0x1BBC5Cu;
    {
        const bool branch_taken_0x1bbc5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc5c) {
            ctx->pc = 0x1BBC88u;
            goto label_1bbc88;
        }
    }
    ctx->pc = 0x1BBC64u;
label_1bbc64:
    // 0x1bbc64: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bbc68:
    // 0x1bbc68: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x1bbc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_1bbc6c:
    // 0x1bbc6c: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x1bbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1bbc70:
    // 0x1bbc70: 0x60f809  jalr        $v1
label_1bbc74:
    if (ctx->pc == 0x1BBC74u) {
        ctx->pc = 0x1BBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC70u;
        // 0x1bbc74: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC78u;
        goto label_1bbc78;
    }
    ctx->pc = 0x1BBC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBC78u);
        ctx->pc = 0x1BBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC70u;
        // 0x1bbc74: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBC70u, 0x1BBC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBC78u;
label_1bbc78:
    // 0x1bbc78: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1bbc7c:
    // 0x1bbc7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bbc80:
    // 0x1bbc80: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bbc84:
    if (ctx->pc == 0x1BBC84u) {
        ctx->pc = 0x1BBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC80u;
        // 0x1bbc84: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC88u;
        goto label_1bbc88;
    }
    ctx->pc = 0x1BBC80u;
    {
        const bool branch_taken_0x1bbc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC80u;
        // 0x1bbc84: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc80) {
            ctx->pc = 0x1BBC90u;
            goto label_1bbc90;
        }
    }
    ctx->pc = 0x1BBC88u;
label_1bbc88:
    // 0x1bbc88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bbc8c:
    // 0x1bbc8c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1bbc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1bbc90:
    // 0x1bbc90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bbc94:
    // 0x1bbc94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bbc98:
    // 0x1bbc98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bbc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bbc9c:
    // 0x1bbc9c: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1bbc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1bbca0:
    // 0x1bbca0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1bbca0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbca4:
    // 0x1bbca4: 0x4614b801  sub.s       $f0, $f23, $f20
    ctx->pc = 0x1bbca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_1bbca8:
    // 0x1bbca8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bbca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bbcac:
    // 0x1bbcac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bbcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bbcb0:
    // 0x1bbcb0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bbcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bbcb4:
    // 0x1bbcb4: 0x4600a646  mov.s       $f25, $f20
    ctx->pc = 0x1bbcb4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
label_1bbcb8:
    // 0x1bbcb8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1bbcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1bbcbc:
    // 0x1bbcbc: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1bbcbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1bbcc0:
    // 0x1bbcc0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1bbcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1bbcc4:
    // 0x1bbcc4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bbcc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbcc8:
    // 0x1bbcc8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1bbcc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1bbccc:
    // 0x1bbccc: 0x46150582  mul.s       $f22, $f0, $f21
    ctx->pc = 0x1bbcccu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1bbcd0:
    // 0x1bbcd0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1bbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1bbcd4:
    // 0x1bbcd4: 0x26b10340  addiu       $s1, $s5, 0x340
    ctx->pc = 0x1bbcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 832));
label_1bbcd8:
    // 0x1bbcd8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1bbcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bbcdc:
    // 0x1bbcdc: 0x40f809  jalr        $v0
label_1bbce0:
    if (ctx->pc == 0x1BBCE0u) {
        ctx->pc = 0x1BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCDCu;
        // 0x1bbce0: 0x26b30080  addiu       $s3, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBCE4u;
        goto label_1bbce4;
    }
    ctx->pc = 0x1BBCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBCE4u);
        ctx->pc = 0x1BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCDCu;
        // 0x1bbce0: 0x26b30080  addiu       $s3, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBCDCu, 0x1BBCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBCE4u;
label_1bbce4:
    // 0x1bbce4: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x1bbce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_1bbce8:
    // 0x1bbce8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1bbce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1bbcec:
    // 0x1bbcec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bbcf0:
    // 0x1bbcf0: 0x2452e700  addiu       $s2, $v0, -0x1900
    ctx->pc = 0x1bbcf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
label_1bbcf4:
    // 0x1bbcf4: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x1bbcf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1bbcf8:
    // 0x1bbcf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbcfc:
    // 0x1bbcfc: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1bbcfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1bbd00:
    // 0x1bbd00: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1bbd04:
    // 0x1bbd04: 0x40f809  jalr        $v0
label_1bbd08:
    if (ctx->pc == 0x1BBD08u) {
        ctx->pc = 0x1BBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD04u;
        // 0x1bbd08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD0Cu;
        goto label_1bbd0c;
    }
    ctx->pc = 0x1BBD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBD0Cu);
        ctx->pc = 0x1BBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD04u;
        // 0x1bbd08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD04u, 0x1BBD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBD0Cu;
label_1bbd0c:
    // 0x1bbd0c: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
label_1bbd10:
    if (ctx->pc == 0x1BBD10u) {
        ctx->pc = 0x1BBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD0Cu;
        // 0x1bbd10: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD14u;
        goto label_1bbd14;
    }
    ctx->pc = 0x1BBD0Cu;
    {
        const bool branch_taken_0x1bbd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd0c) {
            ctx->pc = 0x1BBD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBD0Cu;
            // 0x1bbd10: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE58u;
            goto label_1bbe58;
        }
    }
    ctx->pc = 0x1BBD14u;
label_1bbd14:
    // 0x1bbd14: 0x8e03042c  lw          $v1, 0x42C($s0)
    ctx->pc = 0x1bbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
label_1bbd18:
    // 0x1bbd18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbd1c:
    // 0x1bbd1c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1bbd20:
    if (ctx->pc == 0x1BBD20u) {
        ctx->pc = 0x1BBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD1Cu;
        // 0x1bbd20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD24u;
        goto label_1bbd24;
    }
    ctx->pc = 0x1BBD1Cu;
    {
        const bool branch_taken_0x1bbd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD1Cu;
        // 0x1bbd20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd1c) {
            ctx->pc = 0x1BBD2Cu;
            goto label_1bbd2c;
        }
    }
    ctx->pc = 0x1BBD24u;
label_1bbd24:
    // 0x1bbd24: 0x5462004c  bnel        $v1, $v0, . + 4 + (0x4C << 2)
label_1bbd28:
    if (ctx->pc == 0x1BBD28u) {
        ctx->pc = 0x1BBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD24u;
        // 0x1bbd28: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD2Cu;
        goto label_1bbd2c;
    }
    ctx->pc = 0x1BBD24u;
    {
        const bool branch_taken_0x1bbd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbd24) {
            ctx->pc = 0x1BBD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBD24u;
            // 0x1bbd28: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE58u;
            goto label_1bbe58;
        }
    }
    ctx->pc = 0x1BBD2Cu;
label_1bbd2c:
    // 0x1bbd2c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1bbd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbd30:
    // 0x1bbd30: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_1bbd34:
    if (ctx->pc == 0x1BBD34u) {
        ctx->pc = 0x1BBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD30u;
        // 0x1bbd34: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD38u;
        goto label_1bbd38;
    }
    ctx->pc = 0x1BBD30u;
    {
        const bool branch_taken_0x1bbd30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD30u;
        // 0x1bbd34: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd30) {
            ctx->pc = 0x1BBDB4u;
            goto label_1bbdb4;
        }
    }
    ctx->pc = 0x1BBD38u;
label_1bbd38:
    // 0x1bbd38: 0x4619b801  sub.s       $f0, $f23, $f25
    ctx->pc = 0x1bbd38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
label_1bbd3c:
    // 0x1bbd3c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bbd3cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1bbd40:
    // 0x1bbd40: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1bbd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bbd44:
    // 0x1bbd44: 0x0  nop
    ctx->pc = 0x1bbd44u;
    // NOP
label_1bbd48:
    // 0x1bbd48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bbd4c:
    if (ctx->pc == 0x1BBD4Cu) {
        ctx->pc = 0x1BBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD48u;
        // 0x1bbd4c: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD50u;
        goto label_1bbd50;
    }
    ctx->pc = 0x1BBD48u;
    {
        const bool branch_taken_0x1bbd48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD48u;
        // 0x1bbd4c: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd48) {
            ctx->pc = 0x1BBD68u;
            goto label_1bbd68;
        }
    }
    ctx->pc = 0x1BBD50u;
label_1bbd50:
    // 0x1bbd50: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1bbd54:
    if (ctx->pc == 0x1BBD54u) {
        ctx->pc = 0x1BBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD50u;
        // 0x1bbd54: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD58u;
        goto label_1bbd58;
    }
    ctx->pc = 0x1BBD50u;
    {
        const bool branch_taken_0x1bbd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD50u;
        // 0x1bbd54: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd50) {
            ctx->pc = 0x1BBD60u;
            goto label_1bbd60;
        }
    }
    ctx->pc = 0x1BBD58u;
label_1bbd58:
    // 0x1bbd58: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bbd5c:
    if (ctx->pc == 0x1BBD5Cu) {
        ctx->pc = 0x1BBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD58u;
        // 0x1bbd5c: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD60u;
        goto label_1bbd60;
    }
    ctx->pc = 0x1BBD58u;
    {
        const bool branch_taken_0x1bbd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD58u;
        // 0x1bbd5c: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd58) {
            ctx->pc = 0x1BBD64u;
            goto label_1bbd64;
        }
    }
    ctx->pc = 0x1BBD60u;
label_1bbd60:
    // 0x1bbd60: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x1bbd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1bbd64:
    // 0x1bbd64: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1bbd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1bbd68:
    // 0x1bbd68: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bbd6c:
    // 0x1bbd6c: 0x8c85cdb4  lw          $a1, -0x324C($a0)
    ctx->pc = 0x1bbd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_1bbd70:
    // 0x1bbd70: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bbd74:
    // 0x1bbd74: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1bbd74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1bbd78:
    // 0x1bbd78: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1bbd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1bbd7c:
    // 0x1bbd7c: 0x60f809  jalr        $v1
label_1bbd80:
    if (ctx->pc == 0x1BBD80u) {
        ctx->pc = 0x1BBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD7Cu;
        // 0x1bbd80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD84u;
        goto label_1bbd84;
    }
    ctx->pc = 0x1BBD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBD84u);
        ctx->pc = 0x1BBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD7Cu;
        // 0x1bbd80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD7Cu, 0x1BBD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBD84u;
label_1bbd84:
    // 0x1bbd84: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x1bbd84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_1bbd88:
    // 0x1bbd88: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bbd88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1bbd8c:
    // 0x1bbd8c: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1bbd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bbd90:
    // 0x1bbd90: 0x0  nop
    ctx->pc = 0x1bbd90u;
    // NOP
label_1bbd94:
    // 0x1bbd94: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bbd98:
    if (ctx->pc == 0x1BBD98u) {
        ctx->pc = 0x1BBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD94u;
        // 0x1bbd98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD9Cu;
        goto label_1bbd9c;
    }
    ctx->pc = 0x1BBD94u;
    {
        const bool branch_taken_0x1bbd94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD94u;
        // 0x1bbd98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd94) {
            ctx->pc = 0x1BBDB4u;
            goto label_1bbdb4;
        }
    }
    ctx->pc = 0x1BBD9Cu;
label_1bbd9c:
    // 0x1bbd9c: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
label_1bbda0:
    if (ctx->pc == 0x1BBDA0u) {
        ctx->pc = 0x1BBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD9Cu;
        // 0x1bbda0: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDA4u;
        goto label_1bbda4;
    }
    ctx->pc = 0x1BBD9Cu;
    {
        const bool branch_taken_0x1bbd9c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD9Cu;
        // 0x1bbda0: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd9c) {
            ctx->pc = 0x1BBDACu;
            goto label_1bbdac;
        }
    }
    ctx->pc = 0x1BBDA4u;
label_1bbda4:
    // 0x1bbda4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bbda8:
    if (ctx->pc == 0x1BBDA8u) {
        ctx->pc = 0x1BBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA4u;
        // 0x1bbda8: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDACu;
        goto label_1bbdac;
    }
    ctx->pc = 0x1BBDA4u;
    {
        const bool branch_taken_0x1bbda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA4u;
        // 0x1bbda8: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbda4) {
            ctx->pc = 0x1BBDB0u;
            goto label_1bbdb0;
        }
    }
    ctx->pc = 0x1BBDACu;
label_1bbdac:
    // 0x1bbdac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1bbdacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1bbdb0:
    // 0x1bbdb0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1bbdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1bbdb4:
    // 0x1bbdb4: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x1bbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_1bbdb8:
    // 0x1bbdb8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bbdbc:
    // 0x1bbdbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bbdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bbdc0:
    // 0x1bbdc0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1bbdc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbdc4:
    // 0x1bbdc4: 0xc073472  jal         func_1CD1C8
label_1bbdc8:
    if (ctx->pc == 0x1BBDC8u) {
        ctx->pc = 0x1BBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDC4u;
        // 0x1bbdc8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDCCu;
        goto label_1bbdcc;
    }
    ctx->pc = 0x1BBDC4u;
    SET_GPR_U32(ctx, 31, 0x1BBDCCu);
    ctx->pc = 0x1BBDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDC4u;
    // 0x1bbdc8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1BBDC4u, 0x1BBDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDCCu;
label_1bbdcc:
    // 0x1bbdcc: 0x6a4500d7  ldl         $a1, 0xD7($s2)
    ctx->pc = 0x1bbdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bbdd0:
    // 0x1bbdd0: 0x6e4500d0  ldr         $a1, 0xD0($s2)
    ctx->pc = 0x1bbdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bbdd4:
    // 0x1bbdd4: 0x6a4200df  ldl         $v0, 0xDF($s2)
    ctx->pc = 0x1bbdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1bbdd8:
    // 0x1bbdd8: 0x6e4200d8  ldr         $v0, 0xD8($s2)
    ctx->pc = 0x1bbdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1bbddc:
    // 0x1bbddc: 0xb20500bf  sdl         $a1, 0xBF($s0)
    ctx->pc = 0x1bbddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bbde0:
    // 0x1bbde0: 0xb60500b8  sdr         $a1, 0xB8($s0)
    ctx->pc = 0x1bbde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bbde4:
    // 0x1bbde4: 0xb20200c7  sdl         $v0, 0xC7($s0)
    ctx->pc = 0x1bbde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bbde8:
    // 0x1bbde8: 0xb60200c0  sdr         $v0, 0xC0($s0)
    ctx->pc = 0x1bbde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bbdec:
    // 0x1bbdec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1bbdecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bbdf0:
    // 0x1bbdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bbdf4:
    // 0x1bbdf4: 0xc64c0090  lwc1        $f12, 0x90($s2)
    ctx->pc = 0x1bbdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbdf8:
    // 0x1bbdf8: 0xc068848  jal         func_1A2120
label_1bbdfc:
    if (ctx->pc == 0x1BBDFCu) {
        ctx->pc = 0x1BBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDF8u;
        // 0x1bbdfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE00u;
        goto label_1bbe00;
    }
    ctx->pc = 0x1BBDF8u;
    SET_GPR_U32(ctx, 31, 0x1BBE00u);
    ctx->pc = 0x1BBDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDF8u;
    // 0x1bbdfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BBDF8u, 0x1BBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE00u;
label_1bbe00:
    // 0x1bbe00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbe04:
    // 0x1bbe04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bbe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bbe08:
    // 0x1bbe08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbe0c:
    // 0x1bbe0c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1bbe0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1bbe10:
    // 0x1bbe10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1bbe14:
    // 0x1bbe14: 0x40f809  jalr        $v0
label_1bbe18:
    if (ctx->pc == 0x1BBE18u) {
        ctx->pc = 0x1BBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE14u;
        // 0x1bbe18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE1Cu;
        goto label_1bbe1c;
    }
    ctx->pc = 0x1BBE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBE1Cu);
        ctx->pc = 0x1BBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE14u;
        // 0x1bbe18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBE14u, 0x1BBE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBE1Cu;
label_1bbe1c:
    // 0x1bbe1c: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1bbe20:
    // 0x1bbe20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bbe24:
    // 0x1bbe24: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x1bbe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1bbe28:
    // 0x1bbe28: 0xc068992  jal         func_1A2648
label_1bbe2c:
    if (ctx->pc == 0x1BBE2Cu) {
        ctx->pc = 0x1BBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE28u;
        // 0x1bbe2c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE30u;
        goto label_1bbe30;
    }
    ctx->pc = 0x1BBE28u;
    SET_GPR_U32(ctx, 31, 0x1BBE30u);
    ctx->pc = 0x1BBE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE28u;
    // 0x1bbe2c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1BBE28u, 0x1BBE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE30u;
label_1bbe30:
    // 0x1bbe30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbe34:
    // 0x1bbe34: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1bbe38:
    // 0x1bbe38: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1bbe3c:
    // 0x1bbe3c: 0x60f809  jalr        $v1
label_1bbe40:
    if (ctx->pc == 0x1BBE40u) {
        ctx->pc = 0x1BBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE3Cu;
        // 0x1bbe40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE44u;
        goto label_1bbe44;
    }
    ctx->pc = 0x1BBE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBE44u);
        ctx->pc = 0x1BBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE3Cu;
        // 0x1bbe40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBE3Cu, 0x1BBE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBE44u;
label_1bbe44:
    // 0x1bbe44: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bbe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbe48:
    // 0x1bbe48: 0xc64100a0  lwc1        $f1, 0xA0($s2)
    ctx->pc = 0x1bbe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bbe4c:
    // 0x1bbe4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bbe4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bbe50:
    // 0x1bbe50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bbe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bbe54:
    // 0x1bbe54: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1bbe54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1bbe58:
    // 0x1bbe58: 0x26310430  addiu       $s1, $s1, 0x430
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
label_1bbe5c:
    // 0x1bbe5c: 0x26730430  addiu       $s3, $s3, 0x430
    ctx->pc = 0x1bbe5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1072));
label_1bbe60:
    // 0x1bbe60: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x1bbe60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bbe64:
    // 0x1bbe64: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_1bbe68:
    if (ctx->pc == 0x1BBE68u) {
        ctx->pc = 0x1BBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE64u;
        // 0x1bbe68: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE6Cu;
        goto label_1bbe6c;
    }
    ctx->pc = 0x1BBE64u;
    {
        const bool branch_taken_0x1bbe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE64u;
        // 0x1bbe68: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe64) {
            ctx->pc = 0x1BBCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbcf8;
        }
    }
    ctx->pc = 0x1BBE6Cu;
label_1bbe6c:
    // 0x1bbe6c: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_1bbe70:
    if (ctx->pc == 0x1BBE70u) {
        ctx->pc = 0x1BBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE6Cu;
        // 0x1bbe70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE74u;
        goto label_1bbe74;
    }
    ctx->pc = 0x1BBE6Cu;
    {
        const bool branch_taken_0x1bbe6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE6Cu;
        // 0x1bbe70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe6c) {
            ctx->pc = 0x1BBE90u;
            goto label_1bbe90;
        }
    }
    ctx->pc = 0x1BBE74u;
label_1bbe74:
    // 0x1bbe74: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1bbe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbe78:
    // 0x1bbe78: 0x2442e700  addiu       $v0, $v0, -0x1900
    ctx->pc = 0x1bbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
label_1bbe7c:
    // 0x1bbe7c: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1bbe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bbe80:
    // 0x1bbe80: 0xc4420080  lwc1        $f2, 0x80($v0)
    ctx->pc = 0x1bbe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bbe84:
    // 0x1bbe84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bbe84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bbe88:
    // 0x1bbe88: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1bbe88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bbe8c:
    // 0x1bbe8c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bbe8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bbe90:
    // 0x1bbe90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bbe94:
    // 0x1bbe94: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_1bbe98:
    // 0x1bbe98: 0x26b10340  addiu       $s1, $s5, 0x340
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 832));
label_1bbe9c:
    // 0x1bbe9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbe9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bbea0:
    // 0x1bbea0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1bbea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1bbea4:
    // 0x1bbea4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1bbea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1bbea8:
    // 0x1bbea8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1bbea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1bbeac:
    // 0x1bbeac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bbeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bbeb0:
    // 0x1bbeb0: 0x2453e700  addiu       $s3, $v0, -0x1900
    ctx->pc = 0x1bbeb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
label_1bbeb4:
    // 0x1bbeb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bbeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbeb8:
    // 0x1bbeb8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1bbeb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bbebc:
    // 0x1bbebc: 0x0  nop
    ctx->pc = 0x1bbebcu;
    // NOP
label_1bbec0:
    // 0x1bbec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbec4:
    // 0x1bbec4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1bbec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1bbec8:
    // 0x1bbec8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1bbecc:
    // 0x1bbecc: 0x40f809  jalr        $v0
label_1bbed0:
    if (ctx->pc == 0x1BBED0u) {
        ctx->pc = 0x1BBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBECCu;
        // 0x1bbed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBED4u;
        goto label_1bbed4;
    }
    ctx->pc = 0x1BBECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBED4u);
        ctx->pc = 0x1BBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBECCu;
        // 0x1bbed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBECCu, 0x1BBED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBED4u;
label_1bbed4:
    // 0x1bbed4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1bbed8:
    if (ctx->pc == 0x1BBED8u) {
        ctx->pc = 0x1BBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBED4u;
        // 0x1bbed8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEDCu;
        goto label_1bbedc;
    }
    ctx->pc = 0x1BBED4u;
    {
        const bool branch_taken_0x1bbed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBED4u;
        // 0x1bbed8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbed4) {
            ctx->pc = 0x1BBFC8u;
            goto label_1bbfc8;
        }
    }
    ctx->pc = 0x1BBEDCu;
label_1bbedc:
    // 0x1bbedc: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x1bbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
label_1bbee0:
    // 0x1bbee0: 0x5043003a  beql        $v0, $v1, . + 4 + (0x3A << 2)
label_1bbee4:
    if (ctx->pc == 0x1BBEE4u) {
        ctx->pc = 0x1BBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEE0u;
        // 0x1bbee4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEE8u;
        goto label_1bbee8;
    }
    ctx->pc = 0x1BBEE0u;
    {
        const bool branch_taken_0x1bbee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbee0) {
            ctx->pc = 0x1BBEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBEE0u;
            // 0x1bbee4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBFCCu;
            goto label_1bbfcc;
        }
    }
    ctx->pc = 0x1BBEE8u;
label_1bbee8:
    // 0x1bbee8: 0x10550037  beq         $v0, $s5, . + 4 + (0x37 << 2)
label_1bbeec:
    if (ctx->pc == 0x1BBEECu) {
        ctx->pc = 0x1BBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEE8u;
        // 0x1bbeec: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEF0u;
        goto label_1bbef0;
    }
    ctx->pc = 0x1BBEE8u;
    {
        const bool branch_taken_0x1bbee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1BBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEE8u;
        // 0x1bbeec: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbee8) {
            ctx->pc = 0x1BBFC8u;
            goto label_1bbfc8;
        }
    }
    ctx->pc = 0x1BBEF0u;
label_1bbef0:
    // 0x1bbef0: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_1bbef4:
    if (ctx->pc == 0x1BBEF4u) {
        ctx->pc = 0x1BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEF0u;
        // 0x1bbef4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEF8u;
        goto label_1bbef8;
    }
    ctx->pc = 0x1BBEF0u;
    {
        const bool branch_taken_0x1bbef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEF0u;
        // 0x1bbef4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbef0) {
            ctx->pc = 0x1BBF74u;
            goto label_1bbf74;
        }
    }
    ctx->pc = 0x1BBEF8u;
label_1bbef8:
    // 0x1bbef8: 0x4618b801  sub.s       $f0, $f23, $f24
    ctx->pc = 0x1bbef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
label_1bbefc:
    // 0x1bbefc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bbefcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1bbf00:
    // 0x1bbf00: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bbf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bbf04:
    // 0x1bbf04: 0x0  nop
    ctx->pc = 0x1bbf04u;
    // NOP
label_1bbf08:
    // 0x1bbf08: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bbf0c:
    if (ctx->pc == 0x1BBF0Cu) {
        ctx->pc = 0x1BBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF08u;
        // 0x1bbf0c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF10u;
        goto label_1bbf10;
    }
    ctx->pc = 0x1BBF08u;
    {
        const bool branch_taken_0x1bbf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF08u;
        // 0x1bbf0c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf08) {
            ctx->pc = 0x1BBF28u;
            goto label_1bbf28;
        }
    }
    ctx->pc = 0x1BBF10u;
label_1bbf10:
    // 0x1bbf10: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_1bbf14:
    if (ctx->pc == 0x1BBF14u) {
        ctx->pc = 0x1BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF10u;
        // 0x1bbf14: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF18u;
        goto label_1bbf18;
    }
    ctx->pc = 0x1BBF10u;
    {
        const bool branch_taken_0x1bbf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF10u;
        // 0x1bbf14: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf10) {
            ctx->pc = 0x1BBF20u;
            goto label_1bbf20;
        }
    }
    ctx->pc = 0x1BBF18u;
label_1bbf18:
    // 0x1bbf18: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bbf1c:
    if (ctx->pc == 0x1BBF1Cu) {
        ctx->pc = 0x1BBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF18u;
        // 0x1bbf1c: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF20u;
        goto label_1bbf20;
    }
    ctx->pc = 0x1BBF18u;
    {
        const bool branch_taken_0x1bbf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF18u;
        // 0x1bbf1c: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf18) {
            ctx->pc = 0x1BBF24u;
            goto label_1bbf24;
        }
    }
    ctx->pc = 0x1BBF20u;
label_1bbf20:
    // 0x1bbf20: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x1bbf20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1bbf24:
    // 0x1bbf24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1bbf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1bbf28:
    // 0x1bbf28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bbf2c:
    // 0x1bbf2c: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1bbf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1bbf30:
    // 0x1bbf30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bbf34:
    // 0x1bbf34: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1bbf34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1bbf38:
    // 0x1bbf38: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1bbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1bbf3c:
    // 0x1bbf3c: 0x60f809  jalr        $v1
label_1bbf40:
    if (ctx->pc == 0x1BBF40u) {
        ctx->pc = 0x1BBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF3Cu;
        // 0x1bbf40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF44u;
        goto label_1bbf44;
    }
    ctx->pc = 0x1BBF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBF44u);
        ctx->pc = 0x1BBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF3Cu;
        // 0x1bbf40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF3Cu, 0x1BBF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBF44u;
label_1bbf44:
    // 0x1bbf44: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x1bbf44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_1bbf48:
    // 0x1bbf48: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bbf48u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1bbf4c:
    // 0x1bbf4c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bbf4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bbf50:
    // 0x1bbf50: 0x0  nop
    ctx->pc = 0x1bbf50u;
    // NOP
label_1bbf54:
    // 0x1bbf54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bbf58:
    if (ctx->pc == 0x1BBF58u) {
        ctx->pc = 0x1BBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF54u;
        // 0x1bbf58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF5Cu;
        goto label_1bbf5c;
    }
    ctx->pc = 0x1BBF54u;
    {
        const bool branch_taken_0x1bbf54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF54u;
        // 0x1bbf58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf54) {
            ctx->pc = 0x1BBF74u;
            goto label_1bbf74;
        }
    }
    ctx->pc = 0x1BBF5Cu;
label_1bbf5c:
    // 0x1bbf5c: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
label_1bbf60:
    if (ctx->pc == 0x1BBF60u) {
        ctx->pc = 0x1BBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF5Cu;
        // 0x1bbf60: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF64u;
        goto label_1bbf64;
    }
    ctx->pc = 0x1BBF5Cu;
    {
        const bool branch_taken_0x1bbf5c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF5Cu;
        // 0x1bbf60: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf5c) {
            ctx->pc = 0x1BBF6Cu;
            goto label_1bbf6c;
        }
    }
    ctx->pc = 0x1BBF64u;
label_1bbf64:
    // 0x1bbf64: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bbf68:
    if (ctx->pc == 0x1BBF68u) {
        ctx->pc = 0x1BBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF64u;
        // 0x1bbf68: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF6Cu;
        goto label_1bbf6c;
    }
    ctx->pc = 0x1BBF64u;
    {
        const bool branch_taken_0x1bbf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF64u;
        // 0x1bbf68: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf64) {
            ctx->pc = 0x1BBF70u;
            goto label_1bbf70;
        }
    }
    ctx->pc = 0x1BBF6Cu;
label_1bbf6c:
    // 0x1bbf6c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1bbf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1bbf70:
    // 0x1bbf70: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1bbf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1bbf74:
    // 0x1bbf74: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x1bbf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbf78:
    // 0x1bbf78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf7c:
    // 0x1bbf7c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1bbf7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bbf80:
    // 0x1bbf80: 0xc068848  jal         func_1A2120
label_1bbf84:
    if (ctx->pc == 0x1BBF84u) {
        ctx->pc = 0x1BBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF80u;
        // 0x1bbf84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF88u;
        goto label_1bbf88;
    }
    ctx->pc = 0x1BBF80u;
    SET_GPR_U32(ctx, 31, 0x1BBF88u);
    ctx->pc = 0x1BBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF80u;
    // 0x1bbf84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BBF80u, 0x1BBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF88u;
label_1bbf88:
    // 0x1bbf88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbf8c:
    // 0x1bbf8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bbf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bbf90:
    // 0x1bbf90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bbf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbf94:
    // 0x1bbf94: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1bbf94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1bbf98:
    // 0x1bbf98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1bbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1bbf9c:
    // 0x1bbf9c: 0x60f809  jalr        $v1
label_1bbfa0:
    if (ctx->pc == 0x1BBFA0u) {
        ctx->pc = 0x1BBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF9Cu;
        // 0x1bbfa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBFA4u;
        goto label_1bbfa4;
    }
    ctx->pc = 0x1BBF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBFA4u);
        ctx->pc = 0x1BBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF9Cu;
        // 0x1bbfa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF9Cu, 0x1BBFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBFA4u;
label_1bbfa4:
    // 0x1bbfa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbfa8:
    // 0x1bbfa8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1bbfa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1bbfac:
    // 0x1bbfac: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1bbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1bbfb0:
    // 0x1bbfb0: 0x60f809  jalr        $v1
label_1bbfb4:
    if (ctx->pc == 0x1BBFB4u) {
        ctx->pc = 0x1BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFB0u;
        // 0x1bbfb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBFB8u;
        goto label_1bbfb8;
    }
    ctx->pc = 0x1BBFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBFB8u);
        ctx->pc = 0x1BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFB0u;
        // 0x1bbfb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBFB0u, 0x1BBFB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBFB8u;
label_1bbfb8:
    // 0x1bbfb8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bbfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbfbc:
    // 0x1bbfbc: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x1bbfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bbfc0:
    // 0x1bbfc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bbfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bbfc4:
    // 0x1bbfc4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bbfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bbfc8:
    // 0x1bbfc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bbfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bbfcc:
    // 0x1bbfcc: 0x26310430  addiu       $s1, $s1, 0x430
    ctx->pc = 0x1bbfccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
label_1bbfd0:
    // 0x1bbfd0: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1bbfd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bbfd4:
    // 0x1bbfd4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_1bbfd8:
    if (ctx->pc == 0x1BBFD8u) {
        ctx->pc = 0x1BBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFD4u;
        // 0x1bbfd8: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBFDCu;
        goto label_1bbfdc;
    }
    ctx->pc = 0x1BBFD4u;
    {
        const bool branch_taken_0x1bbfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFD4u;
        // 0x1bbfd8: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfd4) {
            ctx->pc = 0x1BBEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbec0;
        }
    }
    ctx->pc = 0x1BBFDCu;
label_1bbfdc:
    // 0x1bbfdc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1bbfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bbfe0:
    // 0x1bbfe0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1bbfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bbfe4:
    // 0x1bbfe4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1bbfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bbfe8:
    // 0x1bbfe8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1bbfe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bbfec:
    // 0x1bbfec: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1bbfecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bbff0:
    // 0x1bbff0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bbff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bbff4:
    // 0x1bbff4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bbff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bbff8:
    // 0x1bbff8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1bbff8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bbffc:
    // 0x1bbffc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1bbffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1bc000u;
}
