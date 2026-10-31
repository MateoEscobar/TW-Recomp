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

// Function: sub_0015F958
// Address: 0x15f958 - 0x15fd20
void sub_0015F958_0x15f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F958_0x15f958");
#endif

    switch (ctx->pc) {
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        case 0x15fae0u: goto label_15fae0;
        case 0x15fae4u: goto label_15fae4;
        case 0x15fae8u: goto label_15fae8;
        case 0x15faecu: goto label_15faec;
        case 0x15faf0u: goto label_15faf0;
        case 0x15faf4u: goto label_15faf4;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fafcu: goto label_15fafc;
        case 0x15fb00u: goto label_15fb00;
        case 0x15fb04u: goto label_15fb04;
        case 0x15fb08u: goto label_15fb08;
        case 0x15fb0cu: goto label_15fb0c;
        case 0x15fb10u: goto label_15fb10;
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb18u: goto label_15fb18;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb20u: goto label_15fb20;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb2cu: goto label_15fb2c;
        case 0x15fb30u: goto label_15fb30;
        case 0x15fb34u: goto label_15fb34;
        case 0x15fb38u: goto label_15fb38;
        case 0x15fb3cu: goto label_15fb3c;
        case 0x15fb40u: goto label_15fb40;
        case 0x15fb44u: goto label_15fb44;
        case 0x15fb48u: goto label_15fb48;
        case 0x15fb4cu: goto label_15fb4c;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb54u: goto label_15fb54;
        case 0x15fb58u: goto label_15fb58;
        case 0x15fb5cu: goto label_15fb5c;
        case 0x15fb60u: goto label_15fb60;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb68u: goto label_15fb68;
        case 0x15fb6cu: goto label_15fb6c;
        case 0x15fb70u: goto label_15fb70;
        case 0x15fb74u: goto label_15fb74;
        case 0x15fb78u: goto label_15fb78;
        case 0x15fb7cu: goto label_15fb7c;
        case 0x15fb80u: goto label_15fb80;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fb88u: goto label_15fb88;
        case 0x15fb8cu: goto label_15fb8c;
        case 0x15fb90u: goto label_15fb90;
        case 0x15fb94u: goto label_15fb94;
        case 0x15fb98u: goto label_15fb98;
        case 0x15fb9cu: goto label_15fb9c;
        case 0x15fba0u: goto label_15fba0;
        case 0x15fba4u: goto label_15fba4;
        case 0x15fba8u: goto label_15fba8;
        case 0x15fbacu: goto label_15fbac;
        case 0x15fbb0u: goto label_15fbb0;
        case 0x15fbb4u: goto label_15fbb4;
        case 0x15fbb8u: goto label_15fbb8;
        case 0x15fbbcu: goto label_15fbbc;
        case 0x15fbc0u: goto label_15fbc0;
        case 0x15fbc4u: goto label_15fbc4;
        case 0x15fbc8u: goto label_15fbc8;
        case 0x15fbccu: goto label_15fbcc;
        case 0x15fbd0u: goto label_15fbd0;
        case 0x15fbd4u: goto label_15fbd4;
        case 0x15fbd8u: goto label_15fbd8;
        case 0x15fbdcu: goto label_15fbdc;
        case 0x15fbe0u: goto label_15fbe0;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbe8u: goto label_15fbe8;
        case 0x15fbecu: goto label_15fbec;
        case 0x15fbf0u: goto label_15fbf0;
        case 0x15fbf4u: goto label_15fbf4;
        case 0x15fbf8u: goto label_15fbf8;
        case 0x15fbfcu: goto label_15fbfc;
        case 0x15fc00u: goto label_15fc00;
        case 0x15fc04u: goto label_15fc04;
        case 0x15fc08u: goto label_15fc08;
        case 0x15fc0cu: goto label_15fc0c;
        case 0x15fc10u: goto label_15fc10;
        case 0x15fc14u: goto label_15fc14;
        case 0x15fc18u: goto label_15fc18;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fc20u: goto label_15fc20;
        case 0x15fc24u: goto label_15fc24;
        case 0x15fc28u: goto label_15fc28;
        case 0x15fc2cu: goto label_15fc2c;
        case 0x15fc30u: goto label_15fc30;
        case 0x15fc34u: goto label_15fc34;
        case 0x15fc38u: goto label_15fc38;
        case 0x15fc3cu: goto label_15fc3c;
        case 0x15fc40u: goto label_15fc40;
        case 0x15fc44u: goto label_15fc44;
        case 0x15fc48u: goto label_15fc48;
        case 0x15fc4cu: goto label_15fc4c;
        case 0x15fc50u: goto label_15fc50;
        case 0x15fc54u: goto label_15fc54;
        case 0x15fc58u: goto label_15fc58;
        case 0x15fc5cu: goto label_15fc5c;
        case 0x15fc60u: goto label_15fc60;
        case 0x15fc64u: goto label_15fc64;
        case 0x15fc68u: goto label_15fc68;
        case 0x15fc6cu: goto label_15fc6c;
        case 0x15fc70u: goto label_15fc70;
        case 0x15fc74u: goto label_15fc74;
        case 0x15fc78u: goto label_15fc78;
        case 0x15fc7cu: goto label_15fc7c;
        case 0x15fc80u: goto label_15fc80;
        case 0x15fc84u: goto label_15fc84;
        case 0x15fc88u: goto label_15fc88;
        case 0x15fc8cu: goto label_15fc8c;
        case 0x15fc90u: goto label_15fc90;
        case 0x15fc94u: goto label_15fc94;
        case 0x15fc98u: goto label_15fc98;
        case 0x15fc9cu: goto label_15fc9c;
        case 0x15fca0u: goto label_15fca0;
        case 0x15fca4u: goto label_15fca4;
        case 0x15fca8u: goto label_15fca8;
        case 0x15fcacu: goto label_15fcac;
        case 0x15fcb0u: goto label_15fcb0;
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcb8u: goto label_15fcb8;
        case 0x15fcbcu: goto label_15fcbc;
        case 0x15fcc0u: goto label_15fcc0;
        case 0x15fcc4u: goto label_15fcc4;
        case 0x15fcc8u: goto label_15fcc8;
        case 0x15fcccu: goto label_15fccc;
        case 0x15fcd0u: goto label_15fcd0;
        case 0x15fcd4u: goto label_15fcd4;
        case 0x15fcd8u: goto label_15fcd8;
        case 0x15fcdcu: goto label_15fcdc;
        case 0x15fce0u: goto label_15fce0;
        case 0x15fce4u: goto label_15fce4;
        case 0x15fce8u: goto label_15fce8;
        case 0x15fcecu: goto label_15fcec;
        case 0x15fcf0u: goto label_15fcf0;
        case 0x15fcf4u: goto label_15fcf4;
        case 0x15fcf8u: goto label_15fcf8;
        case 0x15fcfcu: goto label_15fcfc;
        case 0x15fd00u: goto label_15fd00;
        case 0x15fd04u: goto label_15fd04;
        case 0x15fd08u: goto label_15fd08;
        case 0x15fd0cu: goto label_15fd0c;
        case 0x15fd10u: goto label_15fd10;
        case 0x15fd14u: goto label_15fd14;
        case 0x15fd18u: goto label_15fd18;
        case 0x15fd1cu: goto label_15fd1c;
        default: break;
    }

    ctx->pc = 0x15f958u;

label_15f958:
    // 0x15f958: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15f958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_15f95c:
    // 0x15f95c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15f960:
    // 0x15f960: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x15f960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_15f964:
    // 0x15f964: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_15f968:
    // 0x15f968: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x15f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_15f96c:
    // 0x15f96c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15f96cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15f970:
    // 0x15f970: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x15f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_15f974:
    // 0x15f974: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15f974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f978:
    // 0x15f978: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x15f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_15f97c:
    // 0x15f97c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15f97cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15f980:
    // 0x15f980: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x15f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_15f984:
    // 0x15f984: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_15f988:
    // 0x15f988: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x15f988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_15f98c:
    // 0x15f98c: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x15f98cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
label_15f990:
    // 0x15f990: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_15f994:
    // 0x15f994: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x15f994u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_15f998:
    // 0x15f998: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15f99c:
    // 0x15f99c: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_15f9a0:
    // 0x15f9a0: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x15f9a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_15f9a4:
    // 0x15f9a4: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x15f9a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_15f9a8:
    // 0x15f9a8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x15f9a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_15f9ac:
    // 0x15f9ac: 0xc06ba0a  jal         func_1AE828
label_15f9b0:
    if (ctx->pc == 0x15F9B0u) {
        ctx->pc = 0x15F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9ACu;
        // 0x15f9b0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9B4u;
        goto label_15f9b4;
    }
    ctx->pc = 0x15F9ACu;
    SET_GPR_U32(ctx, 31, 0x15F9B4u);
    ctx->pc = 0x15F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9ACu;
    // 0x15f9b0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15F9ACu, 0x15F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9B4u;
label_15f9b4:
    // 0x15f9b4: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15f9b8:
    // 0x15f9b8: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15f9bc:
    // 0x15f9bc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15f9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15f9c0:
    // 0x15f9c0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15f9c4:
    // 0x15f9c4: 0x60f809  jalr        $v1
label_15f9c8:
    if (ctx->pc == 0x15F9C8u) {
        ctx->pc = 0x15F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9C4u;
        // 0x15f9c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9CCu;
        goto label_15f9cc;
    }
    ctx->pc = 0x15F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F9CCu);
        ctx->pc = 0x15F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9C4u;
        // 0x15f9c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F9C4u, 0x15F9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F9CCu;
label_15f9cc:
    // 0x15f9cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f9d0:
    // 0x15f9d0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f9d4:
    // 0x15f9d4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_15f9d8:
    // 0x15f9d8: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x15f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_15f9dc:
    // 0x15f9dc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15f9dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15f9e0:
    // 0x15f9e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15f9e4:
    // 0x15f9e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x15f9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15f9e8:
    // 0x15f9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f9ec:
    // 0x15f9ec: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x15f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_15f9f0:
    // 0x15f9f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15f9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15f9f4:
    // 0x15f9f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x15f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_15f9f8:
    // 0x15f9f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x15f9f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15f9fc:
    // 0x15f9fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15fa00:
    // 0x15fa00: 0x2ce40002  sltiu       $a0, $a3, 0x2
    ctx->pc = 0x15fa00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15fa04:
    // 0x15fa04: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x15fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_15fa08:
    // 0x15fa08: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x15fa08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fa0c:
    // 0x15fa0c: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x15fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_15fa10:
    // 0x15fa10: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_15fa14:
    if (ctx->pc == 0x15FA14u) {
        ctx->pc = 0x15FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA10u;
        // 0x15fa14: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA18u;
        goto label_15fa18;
    }
    ctx->pc = 0x15FA10u;
    {
        const bool branch_taken_0x15fa10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA10u;
        // 0x15fa14: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa10) {
            ctx->pc = 0x15F9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f9f8;
        }
    }
    ctx->pc = 0x15FA18u;
label_15fa18:
    // 0x15fa18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fa1c:
    // 0x15fa1c: 0xc043e04  jal         func_10F810
label_15fa20:
    if (ctx->pc == 0x15FA20u) {
        ctx->pc = 0x15FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA1Cu;
        // 0x15fa20: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA24u;
        goto label_15fa24;
    }
    ctx->pc = 0x15FA1Cu;
    SET_GPR_U32(ctx, 31, 0x15FA24u);
    ctx->pc = 0x15FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA1Cu;
    // 0x15fa20: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15FA1Cu, 0x15FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA24u;
label_15fa24:
    // 0x15fa24: 0x8ec45340  lw          $a0, 0x5340($s6)
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21312)));
label_15fa28:
    // 0x15fa28: 0xc0552b8  jal         func_154AE0
label_15fa2c:
    if (ctx->pc == 0x15FA2Cu) {
        ctx->pc = 0x15FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA28u;
        // 0x15fa2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA30u;
        goto label_15fa30;
    }
    ctx->pc = 0x15FA28u;
    SET_GPR_U32(ctx, 31, 0x15FA30u);
    ctx->pc = 0x15FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA28u;
    // 0x15fa2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15FA28u, 0x15FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA30u;
label_15fa30:
    // 0x15fa30: 0x8ea2c7a0  lw          $v0, -0x3860($s5)
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952864)));
label_15fa34:
    // 0x15fa34: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
label_15fa38:
    if (ctx->pc == 0x15FA38u) {
        ctx->pc = 0x15FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA34u;
        // 0x15fa38: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA3Cu;
        goto label_15fa3c;
    }
    ctx->pc = 0x15FA34u;
    {
        const bool branch_taken_0x15fa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA34u;
        // 0x15fa38: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa34) {
            ctx->pc = 0x15FB74u;
            goto label_15fb74;
        }
    }
    ctx->pc = 0x15FA3Cu;
label_15fa3c:
    // 0x15fa3c: 0xc071bd6  jal         func_1C6F58
label_15fa40:
    if (ctx->pc == 0x15FA40u) {
        ctx->pc = 0x15FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA3Cu;
        // 0x15fa40: 0x26846830  addiu       $a0, $s4, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA44u;
        goto label_15fa44;
    }
    ctx->pc = 0x15FA3Cu;
    SET_GPR_U32(ctx, 31, 0x15FA44u);
    ctx->pc = 0x15FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA3Cu;
    // 0x15fa40: 0x26846830  addiu       $a0, $s4, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6F58u, 0x15FA3Cu, 0x15FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA44u;
label_15fa44:
    // 0x15fa44: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_15fa48:
    if (ctx->pc == 0x15FA48u) {
        ctx->pc = 0x15FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA44u;
        // 0x15fa48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA4Cu;
        goto label_15fa4c;
    }
    ctx->pc = 0x15FA44u;
    {
        const bool branch_taken_0x15fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA44u;
        // 0x15fa48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa44) {
            ctx->pc = 0x15FA90u;
            goto label_15fa90;
        }
    }
    ctx->pc = 0x15FA4Cu;
label_15fa4c:
    // 0x15fa4c: 0x8e255024  lw          $a1, 0x5024($s1)
    ctx->pc = 0x15fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20516)));
label_15fa50:
    // 0x15fa50: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15fa54:
    // 0x15fa54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15fa54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15fa58:
    // 0x15fa58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15fa5c:
    // 0x15fa5c: 0x40f809  jalr        $v0
label_15fa60:
    if (ctx->pc == 0x15FA60u) {
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA64u;
        goto label_15fa64;
    }
    ctx->pc = 0x15FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FA64u);
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA5Cu, 0x15FA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA64u;
label_15fa64:
    // 0x15fa64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15fa68:
    if (ctx->pc == 0x15FA68u) {
        ctx->pc = 0x15FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA64u;
        // 0x15fa68: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA6Cu;
        goto label_15fa6c;
    }
    ctx->pc = 0x15FA64u;
    {
        const bool branch_taken_0x15fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA64u;
        // 0x15fa68: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa64) {
            ctx->pc = 0x15FA78u;
            goto label_15fa78;
        }
    }
    ctx->pc = 0x15FA6Cu;
label_15fa6c:
    // 0x15fa6c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15fa70:
    // 0x15fa70: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
label_15fa74:
    // 0x15fa74: 0xac62c7ac  sw          $v0, -0x3854($v1)
    ctx->pc = 0x15fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 2));
label_15fa78:
    // 0x15fa78: 0x8c62c7ac  lw          $v0, -0x3854($v1)
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952876)));
label_15fa7c:
    // 0x15fa7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_15fa80:
    if (ctx->pc == 0x15FA80u) {
        ctx->pc = 0x15FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA7Cu;
        // 0x15fa80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA84u;
        goto label_15fa84;
    }
    ctx->pc = 0x15FA7Cu;
    {
        const bool branch_taken_0x15fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa7c) {
            ctx->pc = 0x15FA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FA7Cu;
            // 0x15fa80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA90u;
            goto label_15fa90;
        }
    }
    ctx->pc = 0x15FA84u;
label_15fa84:
    // 0x15fa84: 0x40f809  jalr        $v0
label_15fa88:
    if (ctx->pc == 0x15FA88u) {
        ctx->pc = 0x15FA8Cu;
        goto label_15fa8c;
    }
    ctx->pc = 0x15FA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FA8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA84u, 0x15FA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA8Cu;
label_15fa8c:
    // 0x15fa8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fa90:
    // 0x15fa90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa94:
    // 0x15fa94: 0xc0e8c52  jal         func_3A3148
label_15fa98:
    if (ctx->pc == 0x15FA98u) {
        ctx->pc = 0x15FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA94u;
        // 0x15fa98: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA9Cu;
        goto label_15fa9c;
    }
    ctx->pc = 0x15FA94u;
    SET_GPR_U32(ctx, 31, 0x15FA9Cu);
    ctx->pc = 0x15FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA94u;
    // 0x15fa98: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15FA94u, 0x15FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA9Cu;
label_15fa9c:
    // 0x15fa9c: 0x8e44cdb4  lw          $a0, -0x324C($s2)
    ctx->pc = 0x15fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15faa0:
    // 0x15faa0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15faa4:
    // 0x15faa4: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x15faa4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15faa8:
    // 0x15faa8: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x15faa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15faac:
    // 0x15faac: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15faacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15fab0:
    // 0x15fab0: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x15fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15fab4:
    // 0x15fab4: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x15fab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15fab8:
    // 0x15fab8: 0xa0f809  jalr        $a1
label_15fabc:
    if (ctx->pc == 0x15FABCu) {
        ctx->pc = 0x15FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAB8u;
        // 0x15fabc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FAC0u;
        goto label_15fac0;
    }
    ctx->pc = 0x15FAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15FAC0u);
        ctx->pc = 0x15FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAB8u;
        // 0x15fabc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FAB8u, 0x15FAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FAC0u;
label_15fac0:
    // 0x15fac0: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fac4:
    // 0x15fac4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15fac4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15fac8:
    // 0x15fac8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15facc:
    // 0x15facc: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15fad0:
    // 0x15fad0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15fad4:
    // 0x15fad4: 0x60f809  jalr        $v1
label_15fad8:
    if (ctx->pc == 0x15FAD8u) {
        ctx->pc = 0x15FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD4u;
        // 0x15fad8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FADCu;
        goto label_15fadc;
    }
    ctx->pc = 0x15FAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FADCu);
        ctx->pc = 0x15FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD4u;
        // 0x15fad8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FAD4u, 0x15FADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FADCu;
label_15fadc:
    // 0x15fadc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x15fadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_15fae0:
    // 0x15fae0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x15fae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_15fae4:
    // 0x15fae4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15fae8:
    // 0x15fae8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x15fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_15faec:
    // 0x15faec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15faecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15faf0:
    // 0x15faf0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x15faf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_15faf4:
    // 0x15faf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15faf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15faf8:
    // 0x15faf8: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_15fafc:
    // 0x15fafc: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x15fafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_15fb00:
    // 0x15fb00: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x15fb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_15fb04:
    // 0x15fb04: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15fb04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_15fb08:
    // 0x15fb08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15fb0c:
    // 0x15fb0c: 0x40f809  jalr        $v0
label_15fb10:
    if (ctx->pc == 0x15FB10u) {
        ctx->pc = 0x15FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB0Cu;
        // 0x15fb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB14u;
        goto label_15fb14;
    }
    ctx->pc = 0x15FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FB14u);
        ctx->pc = 0x15FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB0Cu;
        // 0x15fb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB0Cu, 0x15FB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FB14u;
label_15fb14:
    // 0x15fb14: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fb18:
    // 0x15fb18: 0x8e65d260  lw          $a1, -0x2DA0($s3)
    ctx->pc = 0x15fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955616)));
label_15fb1c:
    // 0x15fb1c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15fb20:
    // 0x15fb20: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15fb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_15fb24:
    // 0x15fb24: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x15fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_15fb28:
    // 0x15fb28: 0x60f809  jalr        $v1
label_15fb2c:
    if (ctx->pc == 0x15FB2Cu) {
        ctx->pc = 0x15FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB28u;
        // 0x15fb2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB30u;
        goto label_15fb30;
    }
    ctx->pc = 0x15FB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FB30u);
        ctx->pc = 0x15FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB28u;
        // 0x15fb2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB28u, 0x15FB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FB30u;
label_15fb30:
    // 0x15fb30: 0xc071ae0  jal         func_1C6B80
label_15fb34:
    if (ctx->pc == 0x15FB34u) {
        ctx->pc = 0x15FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB30u;
        // 0x15fb34: 0x26846830  addiu       $a0, $s4, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB38u;
        goto label_15fb38;
    }
    ctx->pc = 0x15FB30u;
    SET_GPR_U32(ctx, 31, 0x15FB38u);
    ctx->pc = 0x15FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB30u;
    // 0x15fb34: 0x26846830  addiu       $a0, $s4, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B80u, 0x15FB30u, 0x15FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB38u;
label_15fb38:
    // 0x15fb38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15fb3c:
    // 0x15fb3c: 0xc061748  jal         func_185D20
label_15fb40:
    if (ctx->pc == 0x15FB40u) {
        ctx->pc = 0x15FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB3Cu;
        // 0x15fb40: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB44u;
        goto label_15fb44;
    }
    ctx->pc = 0x15FB3Cu;
    SET_GPR_U32(ctx, 31, 0x15FB44u);
    ctx->pc = 0x15FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB3Cu;
    // 0x15fb40: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15FB3Cu, 0x15FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB44u;
label_15fb44:
    // 0x15fb44: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fb48:
    // 0x15fb48: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15fb4c:
    // 0x15fb4c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15fb4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15fb50:
    // 0x15fb50: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15fb54:
    // 0x15fb54: 0x60f809  jalr        $v1
label_15fb58:
    if (ctx->pc == 0x15FB58u) {
        ctx->pc = 0x15FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB54u;
        // 0x15fb58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB5Cu;
        goto label_15fb5c;
    }
    ctx->pc = 0x15FB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FB5Cu);
        ctx->pc = 0x15FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB54u;
        // 0x15fb58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB54u, 0x15FB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FB5Cu;
label_15fb5c:
    // 0x15fb5c: 0x8ec45340  lw          $a0, 0x5340($s6)
    ctx->pc = 0x15fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21312)));
label_15fb60:
    // 0x15fb60: 0xc0552b8  jal         func_154AE0
label_15fb64:
    if (ctx->pc == 0x15FB64u) {
        ctx->pc = 0x15FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB60u;
        // 0x15fb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB68u;
        goto label_15fb68;
    }
    ctx->pc = 0x15FB60u;
    SET_GPR_U32(ctx, 31, 0x15FB68u);
    ctx->pc = 0x15FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB60u;
    // 0x15fb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15FB60u, 0x15FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB68u;
label_15fb68:
    // 0x15fb68: 0x8ea2c7a0  lw          $v0, -0x3860($s5)
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952864)));
label_15fb6c:
    // 0x15fb6c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_15fb70:
    if (ctx->pc == 0x15FB70u) {
        ctx->pc = 0x15FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB6Cu;
        // 0x15fb70: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB74u;
        goto label_15fb74;
    }
    ctx->pc = 0x15FB6Cu;
    {
        const bool branch_taken_0x15fb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB6Cu;
        // 0x15fb70: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb6c) {
            ctx->pc = 0x15FCC0u;
            goto label_15fcc0;
        }
    }
    ctx->pc = 0x15FB74u;
label_15fb74:
    // 0x15fb74: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x15fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_15fb78:
    // 0x15fb78: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x15fb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_15fb7c:
    // 0x15fb7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15fb80:
    // 0x15fb80: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_15fb84:
    // 0x15fb84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15fb84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15fb88:
    // 0x15fb88: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15fb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_15fb8c:
    // 0x15fb8c: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x15fb8cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15fb90:
    // 0x15fb90: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15fb94:
    // 0x15fb94: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15fb94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15fb98:
    // 0x15fb98: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x15fb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15fb9c:
    // 0x15fb9c: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15fba0:
    // 0x15fba0: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_15fba4:
    // 0x15fba4: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x15fba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_15fba8:
    // 0x15fba8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15fba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15fbac:
    // 0x15fbac: 0xc0f809  jalr        $a2
label_15fbb0:
    if (ctx->pc == 0x15FBB0u) {
        ctx->pc = 0x15FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBACu;
        // 0x15fbb0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBB4u;
        goto label_15fbb4;
    }
    ctx->pc = 0x15FBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15FBB4u);
        ctx->pc = 0x15FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBACu;
        // 0x15fbb0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBACu, 0x15FBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FBB4u;
label_15fbb4:
    // 0x15fbb4: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fbb8:
    // 0x15fbb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15fbb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15fbbc:
    // 0x15fbbc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15fbc0:
    // 0x15fbc0: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15fbc4:
    // 0x15fbc4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15fbc8:
    // 0x15fbc8: 0x60f809  jalr        $v1
label_15fbcc:
    if (ctx->pc == 0x15FBCCu) {
        ctx->pc = 0x15FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBC8u;
        // 0x15fbcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBD0u;
        goto label_15fbd0;
    }
    ctx->pc = 0x15FBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FBD0u);
        ctx->pc = 0x15FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBC8u;
        // 0x15fbcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBC8u, 0x15FBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FBD0u;
label_15fbd0:
    // 0x15fbd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15fbd4:
    // 0x15fbd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15fbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15fbd8:
    // 0x15fbd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15fbd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15fbdc:
    // 0x15fbdc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15fbdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_15fbe0:
    // 0x15fbe0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x15fbe0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_15fbe4:
    // 0x15fbe4: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x15fbe4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_15fbe8:
    // 0x15fbe8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x15fbe8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
label_15fbec:
    // 0x15fbec: 0x40f809  jalr        $v0
label_15fbf0:
    if (ctx->pc == 0x15FBF0u) {
        ctx->pc = 0x15FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBECu;
        // 0x15fbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBF4u;
        goto label_15fbf4;
    }
    ctx->pc = 0x15FBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FBF4u);
        ctx->pc = 0x15FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBECu;
        // 0x15fbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBECu, 0x15FBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FBF4u;
label_15fbf4:
    // 0x15fbf4: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15fbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fbf8:
    // 0x15fbf8: 0x8e65d260  lw          $a1, -0x2DA0($s3)
    ctx->pc = 0x15fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955616)));
label_15fbfc:
    // 0x15fbfc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15fc00:
    // 0x15fc00: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15fc00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_15fc04:
    // 0x15fc04: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_15fc08:
    // 0x15fc08: 0x60f809  jalr        $v1
label_15fc0c:
    if (ctx->pc == 0x15FC0Cu) {
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC10u;
        goto label_15fc10;
    }
    ctx->pc = 0x15FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FC10u);
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC08u, 0x15FC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC10u;
label_15fc10:
    // 0x15fc10: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fc14:
    // 0x15fc14: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15fc18:
    // 0x15fc18: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15fc1c:
    // 0x15fc1c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15fc20:
    // 0x15fc20: 0x60f809  jalr        $v1
label_15fc24:
    if (ctx->pc == 0x15FC24u) {
        ctx->pc = 0x15FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC20u;
        // 0x15fc24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC28u;
        goto label_15fc28;
    }
    ctx->pc = 0x15FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FC28u);
        ctx->pc = 0x15FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC20u;
        // 0x15fc24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC20u, 0x15FC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC28u;
label_15fc28:
    // 0x15fc28: 0x8e44cdb4  lw          $a0, -0x324C($s2)
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fc2c:
    // 0x15fc2c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15fc30:
    // 0x15fc30: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x15fc30u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15fc34:
    // 0x15fc34: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15fc38:
    // 0x15fc38: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15fc3c:
    // 0x15fc3c: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x15fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15fc40:
    // 0x15fc40: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x15fc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15fc44:
    // 0x15fc44: 0xa0f809  jalr        $a1
label_15fc48:
    if (ctx->pc == 0x15FC48u) {
        ctx->pc = 0x15FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC44u;
        // 0x15fc48: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC4Cu;
        goto label_15fc4c;
    }
    ctx->pc = 0x15FC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15FC4Cu);
        ctx->pc = 0x15FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC44u;
        // 0x15fc48: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC44u, 0x15FC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC4Cu;
label_15fc4c:
    // 0x15fc4c: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fc50:
    // 0x15fc50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15fc50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15fc54:
    // 0x15fc54: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15fc58:
    // 0x15fc58: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15fc58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15fc5c:
    // 0x15fc5c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15fc60:
    // 0x15fc60: 0x60f809  jalr        $v1
label_15fc64:
    if (ctx->pc == 0x15FC64u) {
        ctx->pc = 0x15FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC60u;
        // 0x15fc64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC68u;
        goto label_15fc68;
    }
    ctx->pc = 0x15FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FC68u);
        ctx->pc = 0x15FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC60u;
        // 0x15fc64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC60u, 0x15FC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC68u;
label_15fc68:
    // 0x15fc68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15fc6c:
    // 0x15fc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fc70:
    // 0x15fc70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15fc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15fc74:
    // 0x15fc74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15fc74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15fc78:
    // 0x15fc78: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15fc78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_15fc7c:
    // 0x15fc7c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x15fc7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_15fc80:
    // 0x15fc80: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x15fc80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_15fc84:
    // 0x15fc84: 0x40f809  jalr        $v0
label_15fc88:
    if (ctx->pc == 0x15FC88u) {
        ctx->pc = 0x15FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC84u;
        // 0x15fc88: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC8Cu;
        goto label_15fc8c;
    }
    ctx->pc = 0x15FC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FC8Cu);
        ctx->pc = 0x15FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC84u;
        // 0x15fc88: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC84u, 0x15FC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC8Cu;
label_15fc8c:
    // 0x15fc8c: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fc90:
    // 0x15fc90: 0x8e65d260  lw          $a1, -0x2DA0($s3)
    ctx->pc = 0x15fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955616)));
label_15fc94:
    // 0x15fc94: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15fc98:
    // 0x15fc98: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15fc98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_15fc9c:
    // 0x15fc9c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x15fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_15fca0:
    // 0x15fca0: 0x60f809  jalr        $v1
label_15fca4:
    if (ctx->pc == 0x15FCA4u) {
        ctx->pc = 0x15FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCA0u;
        // 0x15fca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCA8u;
        goto label_15fca8;
    }
    ctx->pc = 0x15FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FCA8u);
        ctx->pc = 0x15FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCA0u;
        // 0x15fca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FCA0u, 0x15FCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FCA8u;
label_15fca8:
    // 0x15fca8: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15fcac:
    // 0x15fcac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15fcb0:
    // 0x15fcb0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15fcb4:
    // 0x15fcb4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15fcb8:
    // 0x15fcb8: 0x60f809  jalr        $v1
label_15fcbc:
    if (ctx->pc == 0x15FCBCu) {
        ctx->pc = 0x15FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCB8u;
        // 0x15fcbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCC0u;
        goto label_15fcc0;
    }
    ctx->pc = 0x15FCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FCC0u);
        ctx->pc = 0x15FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCB8u;
        // 0x15fcbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FCB8u, 0x15FCC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FCC0u;
label_15fcc0:
    // 0x15fcc0: 0xc071cfa  jal         func_1C73E8
label_15fcc4:
    if (ctx->pc == 0x15FCC4u) {
        ctx->pc = 0x15FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCC0u;
        // 0x15fcc4: 0x26846830  addiu       $a0, $s4, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCC8u;
        goto label_15fcc8;
    }
    ctx->pc = 0x15FCC0u;
    SET_GPR_U32(ctx, 31, 0x15FCC8u);
    ctx->pc = 0x15FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCC0u;
    // 0x15fcc4: 0x26846830  addiu       $a0, $s4, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C73E8u, 0x15FCC0u, 0x15FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCC8u;
label_15fcc8:
    // 0x15fcc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fccc:
    // 0x15fccc: 0x8ea2c7a0  lw          $v0, -0x3860($s5)
    ctx->pc = 0x15fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952864)));
label_15fcd0:
    // 0x15fcd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15fcd4:
    if (ctx->pc == 0x15FCD4u) {
        ctx->pc = 0x15FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCD0u;
        // 0x15fcd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCD8u;
        goto label_15fcd8;
    }
    ctx->pc = 0x15FCD0u;
    {
        const bool branch_taken_0x15fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCD0u;
        // 0x15fcd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcd0) {
            ctx->pc = 0x15FCE0u;
            goto label_15fce0;
        }
    }
    ctx->pc = 0x15FCD8u;
label_15fcd8:
    // 0x15fcd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15fcdc:
    if (ctx->pc == 0x15FCDCu) {
        ctx->pc = 0x15FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCD8u;
        // 0x15fcdc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCE0u;
        goto label_15fce0;
    }
    ctx->pc = 0x15FCD8u;
    {
        const bool branch_taken_0x15fcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCD8u;
        // 0x15fcdc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcd8) {
            ctx->pc = 0x15FCE8u;
            goto label_15fce8;
        }
    }
    ctx->pc = 0x15FCE0u;
label_15fce0:
    // 0x15fce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fce4:
    // 0x15fce4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x15fce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15fce8:
    // 0x15fce8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15fce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fcec:
    // 0x15fcec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x15fcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15fcf0:
    // 0x15fcf0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x15fcf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15fcf4:
    // 0x15fcf4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x15fcf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15fcf8:
    // 0x15fcf8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x15fcf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15fcfc:
    // 0x15fcfc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x15fcfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15fd00:
    // 0x15fd00: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15fd00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15fd04:
    // 0x15fd04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15fd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15fd08:
    // 0x15fd08: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x15fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_15fd0c:
    // 0x15fd0c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x15fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_15fd10:
    // 0x15fd10: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x15fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15fd14:
    // 0x15fd14: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x15fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15fd18:
    // 0x15fd18: 0x3e00008  jr          $ra
label_15fd1c:
    if (ctx->pc == 0x15FD1Cu) {
        ctx->pc = 0x15FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD18u;
        // 0x15fd1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FD20u;
        goto label_fallthrough_0x15fd18;
    }
    ctx->pc = 0x15FD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD18u;
        // 0x15fd1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15fd18:
    ctx->pc = 0x15FD20u;
}
