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

// Function: sub_003E4CB8
// Address: 0x3e4cb8 - 0x3e5090
void sub_003E4CB8_0x3e4cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4CB8_0x3e4cb8");
#endif

    switch (ctx->pc) {
        case 0x3e4cb8u: goto label_3e4cb8;
        case 0x3e4cbcu: goto label_3e4cbc;
        case 0x3e4cc0u: goto label_3e4cc0;
        case 0x3e4cc4u: goto label_3e4cc4;
        case 0x3e4cc8u: goto label_3e4cc8;
        case 0x3e4cccu: goto label_3e4ccc;
        case 0x3e4cd0u: goto label_3e4cd0;
        case 0x3e4cd4u: goto label_3e4cd4;
        case 0x3e4cd8u: goto label_3e4cd8;
        case 0x3e4cdcu: goto label_3e4cdc;
        case 0x3e4ce0u: goto label_3e4ce0;
        case 0x3e4ce4u: goto label_3e4ce4;
        case 0x3e4ce8u: goto label_3e4ce8;
        case 0x3e4cecu: goto label_3e4cec;
        case 0x3e4cf0u: goto label_3e4cf0;
        case 0x3e4cf4u: goto label_3e4cf4;
        case 0x3e4cf8u: goto label_3e4cf8;
        case 0x3e4cfcu: goto label_3e4cfc;
        case 0x3e4d00u: goto label_3e4d00;
        case 0x3e4d04u: goto label_3e4d04;
        case 0x3e4d08u: goto label_3e4d08;
        case 0x3e4d0cu: goto label_3e4d0c;
        case 0x3e4d10u: goto label_3e4d10;
        case 0x3e4d14u: goto label_3e4d14;
        case 0x3e4d18u: goto label_3e4d18;
        case 0x3e4d1cu: goto label_3e4d1c;
        case 0x3e4d20u: goto label_3e4d20;
        case 0x3e4d24u: goto label_3e4d24;
        case 0x3e4d28u: goto label_3e4d28;
        case 0x3e4d2cu: goto label_3e4d2c;
        case 0x3e4d30u: goto label_3e4d30;
        case 0x3e4d34u: goto label_3e4d34;
        case 0x3e4d38u: goto label_3e4d38;
        case 0x3e4d3cu: goto label_3e4d3c;
        case 0x3e4d40u: goto label_3e4d40;
        case 0x3e4d44u: goto label_3e4d44;
        case 0x3e4d48u: goto label_3e4d48;
        case 0x3e4d4cu: goto label_3e4d4c;
        case 0x3e4d50u: goto label_3e4d50;
        case 0x3e4d54u: goto label_3e4d54;
        case 0x3e4d58u: goto label_3e4d58;
        case 0x3e4d5cu: goto label_3e4d5c;
        case 0x3e4d60u: goto label_3e4d60;
        case 0x3e4d64u: goto label_3e4d64;
        case 0x3e4d68u: goto label_3e4d68;
        case 0x3e4d6cu: goto label_3e4d6c;
        case 0x3e4d70u: goto label_3e4d70;
        case 0x3e4d74u: goto label_3e4d74;
        case 0x3e4d78u: goto label_3e4d78;
        case 0x3e4d7cu: goto label_3e4d7c;
        case 0x3e4d80u: goto label_3e4d80;
        case 0x3e4d84u: goto label_3e4d84;
        case 0x3e4d88u: goto label_3e4d88;
        case 0x3e4d8cu: goto label_3e4d8c;
        case 0x3e4d90u: goto label_3e4d90;
        case 0x3e4d94u: goto label_3e4d94;
        case 0x3e4d98u: goto label_3e4d98;
        case 0x3e4d9cu: goto label_3e4d9c;
        case 0x3e4da0u: goto label_3e4da0;
        case 0x3e4da4u: goto label_3e4da4;
        case 0x3e4da8u: goto label_3e4da8;
        case 0x3e4dacu: goto label_3e4dac;
        case 0x3e4db0u: goto label_3e4db0;
        case 0x3e4db4u: goto label_3e4db4;
        case 0x3e4db8u: goto label_3e4db8;
        case 0x3e4dbcu: goto label_3e4dbc;
        case 0x3e4dc0u: goto label_3e4dc0;
        case 0x3e4dc4u: goto label_3e4dc4;
        case 0x3e4dc8u: goto label_3e4dc8;
        case 0x3e4dccu: goto label_3e4dcc;
        case 0x3e4dd0u: goto label_3e4dd0;
        case 0x3e4dd4u: goto label_3e4dd4;
        case 0x3e4dd8u: goto label_3e4dd8;
        case 0x3e4ddcu: goto label_3e4ddc;
        case 0x3e4de0u: goto label_3e4de0;
        case 0x3e4de4u: goto label_3e4de4;
        case 0x3e4de8u: goto label_3e4de8;
        case 0x3e4decu: goto label_3e4dec;
        case 0x3e4df0u: goto label_3e4df0;
        case 0x3e4df4u: goto label_3e4df4;
        case 0x3e4df8u: goto label_3e4df8;
        case 0x3e4dfcu: goto label_3e4dfc;
        case 0x3e4e00u: goto label_3e4e00;
        case 0x3e4e04u: goto label_3e4e04;
        case 0x3e4e08u: goto label_3e4e08;
        case 0x3e4e0cu: goto label_3e4e0c;
        case 0x3e4e10u: goto label_3e4e10;
        case 0x3e4e14u: goto label_3e4e14;
        case 0x3e4e18u: goto label_3e4e18;
        case 0x3e4e1cu: goto label_3e4e1c;
        case 0x3e4e20u: goto label_3e4e20;
        case 0x3e4e24u: goto label_3e4e24;
        case 0x3e4e28u: goto label_3e4e28;
        case 0x3e4e2cu: goto label_3e4e2c;
        case 0x3e4e30u: goto label_3e4e30;
        case 0x3e4e34u: goto label_3e4e34;
        case 0x3e4e38u: goto label_3e4e38;
        case 0x3e4e3cu: goto label_3e4e3c;
        case 0x3e4e40u: goto label_3e4e40;
        case 0x3e4e44u: goto label_3e4e44;
        case 0x3e4e48u: goto label_3e4e48;
        case 0x3e4e4cu: goto label_3e4e4c;
        case 0x3e4e50u: goto label_3e4e50;
        case 0x3e4e54u: goto label_3e4e54;
        case 0x3e4e58u: goto label_3e4e58;
        case 0x3e4e5cu: goto label_3e4e5c;
        case 0x3e4e60u: goto label_3e4e60;
        case 0x3e4e64u: goto label_3e4e64;
        case 0x3e4e68u: goto label_3e4e68;
        case 0x3e4e6cu: goto label_3e4e6c;
        case 0x3e4e70u: goto label_3e4e70;
        case 0x3e4e74u: goto label_3e4e74;
        case 0x3e4e78u: goto label_3e4e78;
        case 0x3e4e7cu: goto label_3e4e7c;
        case 0x3e4e80u: goto label_3e4e80;
        case 0x3e4e84u: goto label_3e4e84;
        case 0x3e4e88u: goto label_3e4e88;
        case 0x3e4e8cu: goto label_3e4e8c;
        case 0x3e4e90u: goto label_3e4e90;
        case 0x3e4e94u: goto label_3e4e94;
        case 0x3e4e98u: goto label_3e4e98;
        case 0x3e4e9cu: goto label_3e4e9c;
        case 0x3e4ea0u: goto label_3e4ea0;
        case 0x3e4ea4u: goto label_3e4ea4;
        case 0x3e4ea8u: goto label_3e4ea8;
        case 0x3e4eacu: goto label_3e4eac;
        case 0x3e4eb0u: goto label_3e4eb0;
        case 0x3e4eb4u: goto label_3e4eb4;
        case 0x3e4eb8u: goto label_3e4eb8;
        case 0x3e4ebcu: goto label_3e4ebc;
        case 0x3e4ec0u: goto label_3e4ec0;
        case 0x3e4ec4u: goto label_3e4ec4;
        case 0x3e4ec8u: goto label_3e4ec8;
        case 0x3e4eccu: goto label_3e4ecc;
        case 0x3e4ed0u: goto label_3e4ed0;
        case 0x3e4ed4u: goto label_3e4ed4;
        case 0x3e4ed8u: goto label_3e4ed8;
        case 0x3e4edcu: goto label_3e4edc;
        case 0x3e4ee0u: goto label_3e4ee0;
        case 0x3e4ee4u: goto label_3e4ee4;
        case 0x3e4ee8u: goto label_3e4ee8;
        case 0x3e4eecu: goto label_3e4eec;
        case 0x3e4ef0u: goto label_3e4ef0;
        case 0x3e4ef4u: goto label_3e4ef4;
        case 0x3e4ef8u: goto label_3e4ef8;
        case 0x3e4efcu: goto label_3e4efc;
        case 0x3e4f00u: goto label_3e4f00;
        case 0x3e4f04u: goto label_3e4f04;
        case 0x3e4f08u: goto label_3e4f08;
        case 0x3e4f0cu: goto label_3e4f0c;
        case 0x3e4f10u: goto label_3e4f10;
        case 0x3e4f14u: goto label_3e4f14;
        case 0x3e4f18u: goto label_3e4f18;
        case 0x3e4f1cu: goto label_3e4f1c;
        case 0x3e4f20u: goto label_3e4f20;
        case 0x3e4f24u: goto label_3e4f24;
        case 0x3e4f28u: goto label_3e4f28;
        case 0x3e4f2cu: goto label_3e4f2c;
        case 0x3e4f30u: goto label_3e4f30;
        case 0x3e4f34u: goto label_3e4f34;
        case 0x3e4f38u: goto label_3e4f38;
        case 0x3e4f3cu: goto label_3e4f3c;
        case 0x3e4f40u: goto label_3e4f40;
        case 0x3e4f44u: goto label_3e4f44;
        case 0x3e4f48u: goto label_3e4f48;
        case 0x3e4f4cu: goto label_3e4f4c;
        case 0x3e4f50u: goto label_3e4f50;
        case 0x3e4f54u: goto label_3e4f54;
        case 0x3e4f58u: goto label_3e4f58;
        case 0x3e4f5cu: goto label_3e4f5c;
        case 0x3e4f60u: goto label_3e4f60;
        case 0x3e4f64u: goto label_3e4f64;
        case 0x3e4f68u: goto label_3e4f68;
        case 0x3e4f6cu: goto label_3e4f6c;
        case 0x3e4f70u: goto label_3e4f70;
        case 0x3e4f74u: goto label_3e4f74;
        case 0x3e4f78u: goto label_3e4f78;
        case 0x3e4f7cu: goto label_3e4f7c;
        case 0x3e4f80u: goto label_3e4f80;
        case 0x3e4f84u: goto label_3e4f84;
        case 0x3e4f88u: goto label_3e4f88;
        case 0x3e4f8cu: goto label_3e4f8c;
        case 0x3e4f90u: goto label_3e4f90;
        case 0x3e4f94u: goto label_3e4f94;
        case 0x3e4f98u: goto label_3e4f98;
        case 0x3e4f9cu: goto label_3e4f9c;
        case 0x3e4fa0u: goto label_3e4fa0;
        case 0x3e4fa4u: goto label_3e4fa4;
        case 0x3e4fa8u: goto label_3e4fa8;
        case 0x3e4facu: goto label_3e4fac;
        case 0x3e4fb0u: goto label_3e4fb0;
        case 0x3e4fb4u: goto label_3e4fb4;
        case 0x3e4fb8u: goto label_3e4fb8;
        case 0x3e4fbcu: goto label_3e4fbc;
        case 0x3e4fc0u: goto label_3e4fc0;
        case 0x3e4fc4u: goto label_3e4fc4;
        case 0x3e4fc8u: goto label_3e4fc8;
        case 0x3e4fccu: goto label_3e4fcc;
        case 0x3e4fd0u: goto label_3e4fd0;
        case 0x3e4fd4u: goto label_3e4fd4;
        case 0x3e4fd8u: goto label_3e4fd8;
        case 0x3e4fdcu: goto label_3e4fdc;
        case 0x3e4fe0u: goto label_3e4fe0;
        case 0x3e4fe4u: goto label_3e4fe4;
        case 0x3e4fe8u: goto label_3e4fe8;
        case 0x3e4fecu: goto label_3e4fec;
        case 0x3e4ff0u: goto label_3e4ff0;
        case 0x3e4ff4u: goto label_3e4ff4;
        case 0x3e4ff8u: goto label_3e4ff8;
        case 0x3e4ffcu: goto label_3e4ffc;
        case 0x3e5000u: goto label_3e5000;
        case 0x3e5004u: goto label_3e5004;
        case 0x3e5008u: goto label_3e5008;
        case 0x3e500cu: goto label_3e500c;
        case 0x3e5010u: goto label_3e5010;
        case 0x3e5014u: goto label_3e5014;
        case 0x3e5018u: goto label_3e5018;
        case 0x3e501cu: goto label_3e501c;
        case 0x3e5020u: goto label_3e5020;
        case 0x3e5024u: goto label_3e5024;
        case 0x3e5028u: goto label_3e5028;
        case 0x3e502cu: goto label_3e502c;
        case 0x3e5030u: goto label_3e5030;
        case 0x3e5034u: goto label_3e5034;
        case 0x3e5038u: goto label_3e5038;
        case 0x3e503cu: goto label_3e503c;
        case 0x3e5040u: goto label_3e5040;
        case 0x3e5044u: goto label_3e5044;
        case 0x3e5048u: goto label_3e5048;
        case 0x3e504cu: goto label_3e504c;
        case 0x3e5050u: goto label_3e5050;
        case 0x3e5054u: goto label_3e5054;
        case 0x3e5058u: goto label_3e5058;
        case 0x3e505cu: goto label_3e505c;
        case 0x3e5060u: goto label_3e5060;
        case 0x3e5064u: goto label_3e5064;
        case 0x3e5068u: goto label_3e5068;
        case 0x3e506cu: goto label_3e506c;
        case 0x3e5070u: goto label_3e5070;
        case 0x3e5074u: goto label_3e5074;
        case 0x3e5078u: goto label_3e5078;
        case 0x3e507cu: goto label_3e507c;
        case 0x3e5080u: goto label_3e5080;
        case 0x3e5084u: goto label_3e5084;
        case 0x3e5088u: goto label_3e5088;
        case 0x3e508cu: goto label_3e508c;
        default: break;
    }

    ctx->pc = 0x3e4cb8u;

label_3e4cb8:
    // 0x3e4cb8: 0x27bdf680  addiu       $sp, $sp, -0x980
    ctx->pc = 0x3e4cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964864));
label_3e4cbc:
    // 0x3e4cbc: 0x7fb10930  sq          $s1, 0x930($sp)
    ctx->pc = 0x3e4cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 17));
label_3e4cc0:
    // 0x3e4cc0: 0x7fb508f0  sq          $s5, 0x8F0($sp)
    ctx->pc = 0x3e4cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 21));
label_3e4cc4:
    // 0x3e4cc4: 0x7fb708d0  sq          $s7, 0x8D0($sp)
    ctx->pc = 0x3e4cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 23));
label_3e4cc8:
    // 0x3e4cc8: 0x7fb00940  sq          $s0, 0x940($sp)
    ctx->pc = 0x3e4cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 16));
label_3e4ccc:
    // 0x3e4ccc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3e4cccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4cd0:
    // 0x3e4cd0: 0x7fb20920  sq          $s2, 0x920($sp)
    ctx->pc = 0x3e4cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 18));
label_3e4cd4:
    // 0x3e4cd4: 0x7fb30910  sq          $s3, 0x910($sp)
    ctx->pc = 0x3e4cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 19));
label_3e4cd8:
    // 0x3e4cd8: 0x7fb40900  sq          $s4, 0x900($sp)
    ctx->pc = 0x3e4cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 20));
label_3e4cdc:
    // 0x3e4cdc: 0x7fb608e0  sq          $s6, 0x8E0($sp)
    ctx->pc = 0x3e4cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 22));
label_3e4ce0:
    // 0x3e4ce0: 0x7fbe08c0  sq          $fp, 0x8C0($sp)
    ctx->pc = 0x3e4ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 30));
label_3e4ce4:
    // 0x3e4ce4: 0xffbf08b0  sd          $ra, 0x8B0($sp)
    ctx->pc = 0x3e4ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2224), GPR_U64(ctx, 31));
label_3e4ce8:
    // 0x3e4ce8: 0xe7b80970  swc1        $f24, 0x970($sp)
    ctx->pc = 0x3e4ce8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3e4cec:
    // 0x3e4cec: 0xe7b70968  swc1        $f23, 0x968($sp)
    ctx->pc = 0x3e4cecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_3e4cf0:
    // 0x3e4cf0: 0xe7b60960  swc1        $f22, 0x960($sp)
    ctx->pc = 0x3e4cf0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_3e4cf4:
    // 0x3e4cf4: 0xe7b50958  swc1        $f21, 0x958($sp)
    ctx->pc = 0x3e4cf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2392), bits); }
label_3e4cf8:
    // 0x3e4cf8: 0xe7b40950  swc1        $f20, 0x950($sp)
    ctx->pc = 0x3e4cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2384), bits); }
label_3e4cfc:
    // 0x3e4cfc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3e4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e4d00:
    // 0x3e4d00: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e4d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e4d04:
    // 0x3e4d04: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e4d08:
    // 0x3e4d08: 0x40f809  jalr        $v0
label_3e4d0c:
    if (ctx->pc == 0x3E4D0Cu) {
        ctx->pc = 0x3E4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D08u;
        // 0x3e4d0c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4D10u;
        goto label_3e4d10;
    }
    ctx->pc = 0x3E4D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4D10u);
        ctx->pc = 0x3E4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D08u;
        // 0x3e4d0c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4D08u, 0x3E4D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4D10u;
label_3e4d10:
    // 0x3e4d10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e4d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4d14:
    // 0x3e4d14: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x3e4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e4d18:
    // 0x3e4d18: 0x27a20430  addiu       $v0, $sp, 0x430
    ctx->pc = 0x3e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e4d1c:
    // 0x3e4d1c: 0xafa308a8  sw          $v1, 0x8A8($sp)
    ctx->pc = 0x3e4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2216), GPR_U32(ctx, 3));
label_3e4d20:
    // 0x3e4d20: 0xafa208a4  sw          $v0, 0x8A4($sp)
    ctx->pc = 0x3e4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2212), GPR_U32(ctx, 2));
label_3e4d24:
    // 0x3e4d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e4d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e4d28:
    // 0x3e4d28: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3e4d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e4d2c:
    // 0x3e4d2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e4d30:
    // 0x3e4d30: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e4d34:
    // 0x3e4d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e4d38:
    // 0x3e4d38: 0x0  nop
    ctx->pc = 0x3e4d38u;
    // NOP
label_3e4d3c:
    // 0x3e4d3c: 0x0  nop
    ctx->pc = 0x3e4d3cu;
    // NOP
label_3e4d40:
    // 0x3e4d40: 0x0  nop
    ctx->pc = 0x3e4d40u;
    // NOP
label_3e4d44:
    // 0x3e4d44: 0x0  nop
    ctx->pc = 0x3e4d44u;
    // NOP
label_3e4d48:
    // 0x3e4d48: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e4d4c:
    if (ctx->pc == 0x3E4D4Cu) {
        ctx->pc = 0x3E4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D48u;
        // 0x3e4d4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4D50u;
        goto label_3e4d50;
    }
    ctx->pc = 0x3E4D48u;
    {
        const bool branch_taken_0x3e4d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D48u;
        // 0x3e4d4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d48) {
            ctx->pc = 0x3E4D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4d38;
        }
    }
    ctx->pc = 0x3E4D50u;
label_3e4d50:
    // 0x3e4d50: 0xc138ddc  jal         func_4E3770
label_3e4d54:
    if (ctx->pc == 0x3E4D54u) {
        ctx->pc = 0x3E4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D50u;
        // 0x3e4d54: 0x26f00010  addiu       $s0, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4D58u;
        goto label_3e4d58;
    }
    ctx->pc = 0x3E4D50u;
    SET_GPR_U32(ctx, 31, 0x3E4D58u);
    ctx->pc = 0x3E4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D50u;
    // 0x3e4d54: 0x26f00010  addiu       $s0, $s7, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E4D50u, 0x3E4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4D58u;
label_3e4d58:
    // 0x3e4d58: 0x7ae30010  lq          $v1, 0x10($s7)
    ctx->pc = 0x3e4d58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_3e4d5c:
    // 0x3e4d5c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x3e4d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e4d60:
    // 0x3e4d60: 0x8fa408a4  lw          $a0, 0x8A4($sp)
    ctx->pc = 0x3e4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2212)));
label_3e4d64:
    // 0x3e4d64: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3e4d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3e4d68:
    // 0x3e4d68: 0x8fa508a8  lw          $a1, 0x8A8($sp)
    ctx->pc = 0x3e4d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2216)));
label_3e4d6c:
    // 0x3e4d6c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x3e4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3e4d70:
    // 0x3e4d70: 0x7aa60000  lq          $a2, 0x0($s5)
    ctx->pc = 0x3e4d70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_3e4d74:
    // 0x3e4d74: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x3e4d74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_3e4d78:
    // 0x3e4d78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e4d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3e4d7c:
    // 0x3e4d7c: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x3e4d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e4d80:
    // 0x3e4d80: 0x0  nop
    ctx->pc = 0x3e4d80u;
    // NOP
label_3e4d84:
    // 0x3e4d84: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x3e4d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3e4d88:
    // 0x3e4d88: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x3e4d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e4d8c:
    // 0x3e4d8c: 0x0  nop
    ctx->pc = 0x3e4d8cu;
    // NOP
label_3e4d90:
    // 0x3e4d90: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x3e4d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_3e4d94:
    // 0x3e4d94: 0x7fa60440  sq          $a2, 0x440($sp)
    ctx->pc = 0x3e4d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 6));
label_3e4d98:
    // 0x3e4d98: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3e4d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e4d9c:
    // 0x3e4d9c: 0xc0e9364  jal         func_3A4D90
label_3e4da0:
    if (ctx->pc == 0x3E4DA0u) {
        ctx->pc = 0x3E4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D9Cu;
        // 0x3e4da0: 0x479818  mult        $s3, $v0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4DA4u;
        goto label_3e4da4;
    }
    ctx->pc = 0x3E4D9Cu;
    SET_GPR_U32(ctx, 31, 0x3E4DA4u);
    ctx->pc = 0x3E4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D9Cu;
    // 0x3e4da0: 0x479818  mult        $s3, $v0, $a3 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3E4D9Cu, 0x3E4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4DA4u;
label_3e4da4:
    // 0x3e4da4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e4da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e4da8:
    // 0x3e4da8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e4dac:
    // 0x3e4dac: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e4db0:
    // 0x3e4db0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e4db4:
    // 0x3e4db4: 0xc0cd4ee  jal         func_3353B8
label_3e4db8:
    if (ctx->pc == 0x3E4DB8u) {
        ctx->pc = 0x3E4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DB4u;
        // 0x3e4db8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4DBCu;
        goto label_3e4dbc;
    }
    ctx->pc = 0x3E4DB4u;
    SET_GPR_U32(ctx, 31, 0x3E4DBCu);
    ctx->pc = 0x3E4DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4DB4u;
    // 0x3e4db8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4DB4u, 0x3E4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4DBCu;
label_3e4dbc:
    // 0x3e4dbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e4dc0:
    // 0x3e4dc0: 0x132023  negu        $a0, $s3
    ctx->pc = 0x3e4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_3e4dc4:
    // 0x3e4dc4: 0x73182a  slt         $v1, $v1, $s3
    ctx->pc = 0x3e4dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3e4dc8:
    // 0x3e4dc8: 0x24560002  addiu       $s6, $v0, 0x2
    ctx->pc = 0x3e4dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3e4dcc:
    // 0x3e4dcc: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x3e4dccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_3e4dd0:
    // 0x3e4dd0: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x3e4dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e4dd4:
    // 0x3e4dd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e4dd8:
    if (ctx->pc == 0x3E4DD8u) {
        ctx->pc = 0x3E4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DD4u;
        // 0x3e4dd8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4DDCu;
        goto label_3e4ddc;
    }
    ctx->pc = 0x3E4DD4u;
    {
        const bool branch_taken_0x3e4dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DD4u;
        // 0x3e4dd8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4dd4) {
            ctx->pc = 0x3E4DECu;
            goto label_3e4dec;
        }
    }
    ctx->pc = 0x3E4DDCu;
label_3e4ddc:
    // 0x3e4ddc: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x3e4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3e4de0:
    // 0x3e4de0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3e4de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3e4de4:
    // 0x3e4de4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_3e4de8:
    if (ctx->pc == 0x3E4DE8u) {
        ctx->pc = 0x3E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DE4u;
        // 0x3e4de8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4DECu;
        goto label_3e4dec;
    }
    ctx->pc = 0x3E4DE4u;
    {
        const bool branch_taken_0x3e4de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DE4u;
        // 0x3e4de8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4de4) {
            ctx->pc = 0x3E4E18u;
            goto label_3e4e18;
        }
    }
    ctx->pc = 0x3E4DECu;
label_3e4dec:
    // 0x3e4dec: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3e4decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3e4df0:
    // 0x3e4df0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3e4df0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3e4df4:
    // 0x3e4df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e4df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e4df8:
    // 0x3e4df8: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x3e4df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e4dfc:
    // 0x3e4dfc: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x3e4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3e4e00:
    // 0x3e4e00: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x3e4e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3e4e04:
    // 0x3e4e04: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x3e4e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
label_3e4e08:
    // 0x3e4e08: 0xc045ca0  jal         func_117280
label_3e4e0c:
    if (ctx->pc == 0x3E4E0Cu) {
        ctx->pc = 0x3E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E08u;
        // 0x3e4e0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E10u;
        goto label_3e4e10;
    }
    ctx->pc = 0x3E4E08u;
    SET_GPR_U32(ctx, 31, 0x3E4E10u);
    ctx->pc = 0x3E4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E08u;
    // 0x3e4e0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3E4E08u, 0x3E4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E10u;
label_3e4e10:
    // 0x3e4e10: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e4e14:
    if (ctx->pc == 0x3E4E14u) {
        ctx->pc = 0x3E4E18u;
        goto label_3e4e18;
    }
    ctx->pc = 0x3E4E10u;
    {
        const bool branch_taken_0x3e4e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e10) {
            ctx->pc = 0x3E4E24u;
            goto label_3e4e24;
        }
    }
    ctx->pc = 0x3E4E18u;
label_3e4e18:
    // 0x3e4e18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e4e1c:
    // 0x3e4e1c: 0xc045ca0  jal         func_117280
label_3e4e20:
    if (ctx->pc == 0x3E4E20u) {
        ctx->pc = 0x3E4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E1Cu;
        // 0x3e4e20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E24u;
        goto label_3e4e24;
    }
    ctx->pc = 0x3E4E1Cu;
    SET_GPR_U32(ctx, 31, 0x3E4E24u);
    ctx->pc = 0x3E4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E1Cu;
    // 0x3e4e20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3E4E1Cu, 0x3E4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E24u;
label_3e4e24:
    // 0x3e4e24: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3e4e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3e4e28:
    // 0x3e4e28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4e2c:
    // 0x3e4e2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e4e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4e30:
    // 0x3e4e30: 0xc0e94a0  jal         func_3A5280
label_3e4e34:
    if (ctx->pc == 0x3E4E34u) {
        ctx->pc = 0x3E4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E30u;
        // 0x3e4e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E38u;
        goto label_3e4e38;
    }
    ctx->pc = 0x3E4E30u;
    SET_GPR_U32(ctx, 31, 0x3E4E38u);
    ctx->pc = 0x3E4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E30u;
    // 0x3e4e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3E4E30u, 0x3E4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E38u;
label_3e4e38:
    // 0x3e4e38: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e4e3c:
    if (ctx->pc == 0x3E4E3Cu) {
        ctx->pc = 0x3E4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E38u;
        // 0x3e4e3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E40u;
        goto label_3e4e40;
    }
    ctx->pc = 0x3E4E38u;
    {
        const bool branch_taken_0x3e4e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e38) {
            ctx->pc = 0x3E4E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E38u;
            // 0x3e4e3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E68u;
            goto label_3e4e68;
        }
    }
    ctx->pc = 0x3E4E40u;
label_3e4e40:
    // 0x3e4e40: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e4e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e4e44:
    // 0x3e4e44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4e48:
    // 0x3e4e48: 0xc0e947e  jal         func_3A51F8
label_3e4e4c:
    if (ctx->pc == 0x3E4E4Cu) {
        ctx->pc = 0x3E4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E48u;
        // 0x3e4e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E50u;
        goto label_3e4e50;
    }
    ctx->pc = 0x3E4E48u;
    SET_GPR_U32(ctx, 31, 0x3E4E50u);
    ctx->pc = 0x3E4E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E48u;
    // 0x3e4e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3E4E48u, 0x3E4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E50u;
label_3e4e50:
    // 0x3e4e50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e4e54:
    if (ctx->pc == 0x3E4E54u) {
        ctx->pc = 0x3E4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E50u;
        // 0x3e4e54: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E58u;
        goto label_3e4e58;
    }
    ctx->pc = 0x3E4E50u;
    {
        const bool branch_taken_0x3e4e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e50) {
            ctx->pc = 0x3E4E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E50u;
            // 0x3e4e54: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E68u;
            goto label_3e4e68;
        }
    }
    ctx->pc = 0x3E4E58u;
label_3e4e58:
    // 0x3e4e58: 0xc0e9694  jal         func_3A5A50
label_3e4e5c:
    if (ctx->pc == 0x3E4E5Cu) {
        ctx->pc = 0x3E4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E58u;
        // 0x3e4e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E60u;
        goto label_3e4e60;
    }
    ctx->pc = 0x3E4E58u;
    SET_GPR_U32(ctx, 31, 0x3E4E60u);
    ctx->pc = 0x3E4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E58u;
    // 0x3e4e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E4E58u, 0x3E4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E60u;
label_3e4e60:
    // 0x3e4e60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3e4e64:
    if (ctx->pc == 0x3E4E64u) {
        ctx->pc = 0x3E4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E60u;
        // 0x3e4e64: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E68u;
        goto label_3e4e68;
    }
    ctx->pc = 0x3E4E60u;
    {
        const bool branch_taken_0x3e4e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e60) {
            ctx->pc = 0x3E4E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E60u;
            // 0x3e4e64: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E68u;
            goto label_3e4e68;
        }
    }
    ctx->pc = 0x3E4E68u;
label_3e4e68:
    // 0x3e4e68: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3e4e6c:
    if (ctx->pc == 0x3E4E6Cu) {
        ctx->pc = 0x3E4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E68u;
        // 0x3e4e6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E70u;
        goto label_3e4e70;
    }
    ctx->pc = 0x3E4E68u;
    {
        const bool branch_taken_0x3e4e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E68u;
        // 0x3e4e6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e68) {
            ctx->pc = 0x3E4E88u;
            goto label_3e4e88;
        }
    }
    ctx->pc = 0x3E4E70u;
label_3e4e70:
    // 0x3e4e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4e74:
    // 0x3e4e74: 0xc1073cc  jal         func_41CF30
label_3e4e78:
    if (ctx->pc == 0x3E4E78u) {
        ctx->pc = 0x3E4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E74u;
        // 0x3e4e78: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E7Cu;
        goto label_3e4e7c;
    }
    ctx->pc = 0x3E4E74u;
    SET_GPR_U32(ctx, 31, 0x3E4E7Cu);
    ctx->pc = 0x3E4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E74u;
    // 0x3e4e78: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E4E74u, 0x3E4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E7Cu;
label_3e4e7c:
    // 0x3e4e7c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3e4e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3e4e80:
    // 0x3e4e80: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_3e4e84:
    if (ctx->pc == 0x3E4E84u) {
        ctx->pc = 0x3E4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E80u;
        // 0x3e4e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E88u;
        goto label_3e4e88;
    }
    ctx->pc = 0x3E4E80u;
    {
        const bool branch_taken_0x3e4e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E80u;
        // 0x3e4e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e80) {
            ctx->pc = 0x3E504Cu;
            goto label_3e504c;
        }
    }
    ctx->pc = 0x3E4E88u;
label_3e4e88:
    // 0x3e4e88: 0x1a60006f  blez        $s3, . + 4 + (0x6F << 2)
label_3e4e8c:
    if (ctx->pc == 0x3E4E8Cu) {
        ctx->pc = 0x3E4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E88u;
        // 0x3e4e8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E90u;
        goto label_3e4e90;
    }
    ctx->pc = 0x3E4E88u;
    {
        const bool branch_taken_0x3e4e88 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3E4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E88u;
        // 0x3e4e8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e88) {
            ctx->pc = 0x3E5048u;
            goto label_3e5048;
        }
    }
    ctx->pc = 0x3E4E90u;
label_3e4e90:
    // 0x3e4e90: 0x2a620029  slti        $v0, $s3, 0x29
    ctx->pc = 0x3e4e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)41) ? 1 : 0);
label_3e4e94:
    // 0x3e4e94: 0xafa208a0  sw          $v0, 0x8A0($sp)
    ctx->pc = 0x3e4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 2));
label_3e4e98:
    // 0x3e4e98: 0x8fa308a0  lw          $v1, 0x8A0($sp)
    ctx->pc = 0x3e4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
label_3e4e9c:
    // 0x3e4e9c: 0x0  nop
    ctx->pc = 0x3e4e9cu;
    // NOP
label_3e4ea0:
    // 0x3e4ea0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3e4ea4:
    if (ctx->pc == 0x3E4EA4u) {
        ctx->pc = 0x3E4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EA0u;
        // 0x3e4ea4: 0x2a620050  slti        $v0, $s3, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EA8u;
        goto label_3e4ea8;
    }
    ctx->pc = 0x3E4EA0u;
    {
        const bool branch_taken_0x3e4ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EA0u;
        // 0x3e4ea4: 0x2a620050  slti        $v0, $s3, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ea0) {
            ctx->pc = 0x3E4EC0u;
            goto label_3e4ec0;
        }
    }
    ctx->pc = 0x3E4EA8u;
label_3e4ea8:
    // 0x3e4ea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4eac:
    // 0x3e4eac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e4eb0:
    // 0x3e4eb0: 0xc0cd4ee  jal         func_3353B8
label_3e4eb4:
    if (ctx->pc == 0x3E4EB4u) {
        ctx->pc = 0x3E4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EB0u;
        // 0x3e4eb4: 0x2444b8b8  addiu       $a0, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EB8u;
        goto label_3e4eb8;
    }
    ctx->pc = 0x3E4EB0u;
    SET_GPR_U32(ctx, 31, 0x3E4EB8u);
    ctx->pc = 0x3E4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4EB0u;
    // 0x3e4eb4: 0x2444b8b8  addiu       $a0, $v0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4EB0u, 0x3E4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4EB8u;
label_3e4eb8:
    // 0x3e4eb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3e4eb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ebc:
    // 0x3e4ebc: 0x2a620050  slti        $v0, $s3, 0x50
    ctx->pc = 0x3e4ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)80) ? 1 : 0);
label_3e4ec0:
    // 0x3e4ec0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e4ec4:
    if (ctx->pc == 0x3E4EC4u) {
        ctx->pc = 0x3E4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EC0u;
        // 0x3e4ec4: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EC8u;
        goto label_3e4ec8;
    }
    ctx->pc = 0x3E4EC0u;
    {
        const bool branch_taken_0x3e4ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EC0u;
        // 0x3e4ec4: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ec0) {
            ctx->pc = 0x3E4EE0u;
            goto label_3e4ee0;
        }
    }
    ctx->pc = 0x3E4EC8u;
label_3e4ec8:
    // 0x3e4ec8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e4ecc:
    // 0x3e4ecc: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e4ed0:
    // 0x3e4ed0: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x3e4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_3e4ed4:
    // 0x3e4ed4: 0xc0cd4ee  jal         func_3353B8
label_3e4ed8:
    if (ctx->pc == 0x3E4ED8u) {
        ctx->pc = 0x3E4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4ED4u;
        // 0x3e4ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EDCu;
        goto label_3e4edc;
    }
    ctx->pc = 0x3E4ED4u;
    SET_GPR_U32(ctx, 31, 0x3E4EDCu);
    ctx->pc = 0x3E4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4ED4u;
    // 0x3e4ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4ED4u, 0x3E4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4EDCu;
label_3e4edc:
    // 0x3e4edc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3e4edcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ee0:
    // 0x3e4ee0: 0x3c013f12  lui         $at, 0x3F12
    ctx->pc = 0x3e4ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16146 << 16));
label_3e4ee4:
    // 0x3e4ee4: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x3e4ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
label_3e4ee8:
    // 0x3e4ee8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e4ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e4eec:
    // 0x3e4eec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e4eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ef0:
    // 0x3e4ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e4ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e4ef4:
    // 0x3e4ef4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e4ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e4ef8:
    // 0x3e4ef8: 0x27b10460  addiu       $s1, $sp, 0x460
    ctx->pc = 0x3e4ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3e4efc:
    // 0x3e4efc: 0x27b20490  addiu       $s2, $sp, 0x490
    ctx->pc = 0x3e4efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3e4f00:
    // 0x3e4f00: 0xc0e9694  jal         func_3A5A50
label_3e4f04:
    if (ctx->pc == 0x3E4F04u) {
        ctx->pc = 0x3E4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F00u;
        // 0x3e4f04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4F08u;
        goto label_3e4f08;
    }
    ctx->pc = 0x3E4F00u;
    SET_GPR_U32(ctx, 31, 0x3E4F08u);
    ctx->pc = 0x3E4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F00u;
    // 0x3e4f04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E4F00u, 0x3E4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F08u;
label_3e4f08:
    // 0x3e4f08: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_3e4f0c:
    if (ctx->pc == 0x3E4F0Cu) {
        ctx->pc = 0x3E4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F08u;
        // 0x3e4f0c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4F10u;
        goto label_3e4f10;
    }
    ctx->pc = 0x3E4F08u;
    {
        const bool branch_taken_0x3e4f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F08u;
        // 0x3e4f0c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f08) {
            ctx->pc = 0x3E5048u;
            goto label_3e5048;
        }
    }
    ctx->pc = 0x3E4F10u;
label_3e4f10:
    // 0x3e4f10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e4f14:
    // 0x3e4f14: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3e4f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e4f18:
    // 0x3e4f18: 0xc0cd4ee  jal         func_3353B8
label_3e4f1c:
    if (ctx->pc == 0x3E4F1Cu) {
        ctx->pc = 0x3E4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F18u;
        // 0x3e4f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4F20u;
        goto label_3e4f20;
    }
    ctx->pc = 0x3E4F18u;
    SET_GPR_U32(ctx, 31, 0x3E4F20u);
    ctx->pc = 0x3E4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F18u;
    // 0x3e4f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4F18u, 0x3E4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F20u;
label_3e4f20:
    // 0x3e4f20: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3e4f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e4f24:
    // 0x3e4f24: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_3e4f28:
    if (ctx->pc == 0x3E4F28u) {
        ctx->pc = 0x3E4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F24u;
        // 0x3e4f28: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4F2Cu;
        goto label_3e4f2c;
    }
    ctx->pc = 0x3E4F24u;
    {
        const bool branch_taken_0x3e4f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4f24) {
            ctx->pc = 0x3E4F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4F24u;
            // 0x3e4f28: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E502Cu;
            goto label_3e502c;
        }
    }
    ctx->pc = 0x3E4F2Cu;
label_3e4f2c:
    // 0x3e4f2c: 0x4600bb47  neg.s       $f13, $f23
    ctx->pc = 0x3e4f2cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[23]);
label_3e4f30:
    // 0x3e4f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4f34:
    // 0x3e4f34: 0x4615bb02  mul.s       $f12, $f23, $f21
    ctx->pc = 0x3e4f34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_3e4f38:
    // 0x3e4f38: 0xc0cd518  jal         func_335460
label_3e4f3c:
    if (ctx->pc == 0x3E4F3Cu) {
        ctx->pc = 0x3E4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F38u;
        // 0x3e4f3c: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4F40u;
        goto label_3e4f40;
    }
    ctx->pc = 0x3E4F38u;
    SET_GPR_U32(ctx, 31, 0x3E4F40u);
    ctx->pc = 0x3E4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F38u;
    // 0x3e4f3c: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4F38u, 0x3E4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F40u;
label_3e4f40:
    // 0x3e4f40: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x3e4f40u;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
label_3e4f44:
    // 0x3e4f44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e4f44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e4f48:
    // 0x3e4f48: 0x4615b302  mul.s       $f12, $f22, $f21
    ctx->pc = 0x3e4f48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
label_3e4f4c:
    // 0x3e4f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4f50:
    // 0x3e4f50: 0xc0cd518  jal         func_335460
label_3e4f54:
    if (ctx->pc == 0x3E4F54u) {
        ctx->pc = 0x3E4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F50u;
        // 0x3e4f54: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4F58u;
        goto label_3e4f58;
    }
    ctx->pc = 0x3E4F50u;
    SET_GPR_U32(ctx, 31, 0x3E4F58u);
    ctx->pc = 0x3E4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F50u;
    // 0x3e4f54: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4F50u, 0x3E4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F58u;
label_3e4f58:
    // 0x3e4f58: 0x7ae30020  lq          $v1, 0x20($s7)
    ctx->pc = 0x3e4f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 32)));
label_3e4f5c:
    // 0x3e4f5c: 0xe7b40460  swc1        $f20, 0x460($sp)
    ctx->pc = 0x3e4f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3e4f60:
    // 0x3e4f60: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3e4f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3e4f64:
    // 0x3e4f64: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x3e4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
label_3e4f68:
    // 0x3e4f68: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3e4f68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3e4f6c:
    // 0x3e4f6c: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e4f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e4f70:
    // 0x3e4f70: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e4f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e4f74:
    // 0x3e4f74: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3e4f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e4f78:
    // 0x3e4f78: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3e4f78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e4f7c:
    // 0x3e4f7c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e4f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e4f80:
    // 0x3e4f80: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e4f80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e4f84:
    // 0x3e4f84: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e4f84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e4f88:
    // 0x3e4f88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e4f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e4f8c:
    // 0x3e4f8c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e4f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e4f90:
    // 0x3e4f90: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e4f90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e4f94:
    // 0x3e4f94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e4f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e4f98:
    // 0x3e4f98: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e4f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e4f9c:
    // 0x3e4f9c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e4f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e4fa0:
    // 0x3e4fa0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e4fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e4fa4:
    // 0x3e4fa4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e4fa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e4fa8:
    // 0x3e4fa8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e4fa8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e4fac:
    // 0x3e4fac: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e4facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e4fb0:
    // 0x3e4fb0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e4fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e4fb4:
    // 0x3e4fb4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3e4fb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e4fb8:
    // 0x3e4fb8: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3e4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3e4fbc:
    // 0x3e4fbc: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e4fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e4fc0:
    // 0x3e4fc0: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3e4fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e4fc4:
    // 0x3e4fc4: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e4fc8:
    // 0x3e4fc8: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3e4fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3e4fcc:
    // 0x3e4fcc: 0xc136b18  jal         func_4DAC60
label_3e4fd0:
    if (ctx->pc == 0x3E4FD0u) {
        ctx->pc = 0x3E4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FCCu;
        // 0x3e4fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4FD4u;
        goto label_3e4fd4;
    }
    ctx->pc = 0x3E4FCCu;
    SET_GPR_U32(ctx, 31, 0x3E4FD4u);
    ctx->pc = 0x3E4FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4FCCu;
    // 0x3e4fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E4FCCu, 0x3E4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4FD4u;
label_3e4fd4:
    // 0x3e4fd4: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e4fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e4fd8:
    // 0x3e4fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e4fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e4fdc:
    // 0x3e4fdc: 0x8ee300c4  lw          $v1, 0xC4($s7)
    ctx->pc = 0x3e4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 196)));
label_3e4fe0:
    // 0x3e4fe0: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3e4fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e4fe4:
    // 0x3e4fe4: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3e4fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3e4fe8:
    // 0x3e4fe8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3e4fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4fec:
    // 0x3e4fec: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3e4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3e4ff0:
    // 0x3e4ff0: 0x27a90470  addiu       $t1, $sp, 0x470
    ctx->pc = 0x3e4ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e4ff4:
    // 0x3e4ff4: 0x8fa508a4  lw          $a1, 0x8A4($sp)
    ctx->pc = 0x3e4ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2212)));
label_3e4ff8:
    // 0x3e4ff8: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x3e4ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_3e4ffc:
    // 0x3e4ffc: 0x8fa608a8  lw          $a2, 0x8A8($sp)
    ctx->pc = 0x3e4ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2216)));
label_3e5000:
    // 0x3e5000: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e5000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e5004:
    // 0x3e5004: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x3e5004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5008:
    // 0x3e5008: 0xafa30470  sw          $v1, 0x470($sp)
    ctx->pc = 0x3e5008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
label_3e500c:
    // 0x3e500c: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3e500cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3e5010:
    // 0x3e5010: 0xc0ea004  jal         func_3A8010
label_3e5014:
    if (ctx->pc == 0x3E5014u) {
        ctx->pc = 0x3E5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5010u;
        // 0x3e5014: 0xafb60460  sw          $s6, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5018u;
        goto label_3e5018;
    }
    ctx->pc = 0x3E5010u;
    SET_GPR_U32(ctx, 31, 0x3E5018u);
    ctx->pc = 0x3E5014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5010u;
    // 0x3e5014: 0xafb60460  sw          $s6, 0x460($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3E5010u, 0x3E5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5018u;
label_3e5018:
    // 0x3e5018: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3e5018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3e501c:
    // 0x3e501c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e5020:
    // 0x3e5020: 0xc0f15bc  jal         func_3C56F0
label_3e5024:
    if (ctx->pc == 0x3E5024u) {
        ctx->pc = 0x3E5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5020u;
        // 0x3e5024: 0x24645418  addiu       $a0, $v1, 0x5418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 21528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5028u;
        goto label_3e5028;
    }
    ctx->pc = 0x3E5020u;
    SET_GPR_U32(ctx, 31, 0x3E5028u);
    ctx->pc = 0x3E5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5020u;
    // 0x3e5024: 0x24645418  addiu       $a0, $v1, 0x5418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 21528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E5020u, 0x3E5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5028u;
label_3e5028:
    // 0x3e5028: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e5028u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e502c:
    // 0x3e502c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x3e502cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3e5030:
    // 0x3e5030: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_3e5034:
    if (ctx->pc == 0x3E5034u) {
        ctx->pc = 0x3E5038u;
        goto label_3e5038;
    }
    ctx->pc = 0x3E5030u;
    {
        const bool branch_taken_0x3e5030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5030) {
            ctx->pc = 0x3E4F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4f00;
        }
    }
    ctx->pc = 0x3E5038u;
label_3e5038:
    // 0x3e5038: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3e5038u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3e503c:
    // 0x3e503c: 0x3d3102a  slt         $v0, $fp, $s3
    ctx->pc = 0x3e503cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3e5040:
    // 0x3e5040: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_3e5044:
    if (ctx->pc == 0x3E5044u) {
        ctx->pc = 0x3E5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5040u;
        // 0x3e5044: 0x8fa308a0  lw          $v1, 0x8A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5048u;
        goto label_3e5048;
    }
    ctx->pc = 0x3E5040u;
    {
        const bool branch_taken_0x3e5040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5040u;
        // 0x3e5044: 0x8fa308a0  lw          $v1, 0x8A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5040) {
            ctx->pc = 0x3E4EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4ea0;
        }
    }
    ctx->pc = 0x3E5048u;
label_3e5048:
    // 0x3e5048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e504c:
    // 0x3e504c: 0x7bb00940  lq          $s0, 0x940($sp)
    ctx->pc = 0x3e504cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3e5050:
    // 0x3e5050: 0x7bb10930  lq          $s1, 0x930($sp)
    ctx->pc = 0x3e5050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e5054:
    // 0x3e5054: 0x7bb20920  lq          $s2, 0x920($sp)
    ctx->pc = 0x3e5054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3e5058:
    // 0x3e5058: 0x7bb30910  lq          $s3, 0x910($sp)
    ctx->pc = 0x3e5058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3e505c:
    // 0x3e505c: 0x7bb40900  lq          $s4, 0x900($sp)
    ctx->pc = 0x3e505cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3e5060:
    // 0x3e5060: 0x7bb508f0  lq          $s5, 0x8F0($sp)
    ctx->pc = 0x3e5060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3e5064:
    // 0x3e5064: 0x7bb608e0  lq          $s6, 0x8E0($sp)
    ctx->pc = 0x3e5064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3e5068:
    // 0x3e5068: 0x7bb708d0  lq          $s7, 0x8D0($sp)
    ctx->pc = 0x3e5068u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3e506c:
    // 0x3e506c: 0x7bbe08c0  lq          $fp, 0x8C0($sp)
    ctx->pc = 0x3e506cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3e5070:
    // 0x3e5070: 0xdfbf08b0  ld          $ra, 0x8B0($sp)
    ctx->pc = 0x3e5070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2224)));
label_3e5074:
    // 0x3e5074: 0xc7b80970  lwc1        $f24, 0x970($sp)
    ctx->pc = 0x3e5074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e5078:
    // 0x3e5078: 0xc7b70968  lwc1        $f23, 0x968($sp)
    ctx->pc = 0x3e5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e507c:
    // 0x3e507c: 0xc7b60960  lwc1        $f22, 0x960($sp)
    ctx->pc = 0x3e507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e5080:
    // 0x3e5080: 0xc7b50958  lwc1        $f21, 0x958($sp)
    ctx->pc = 0x3e5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e5084:
    // 0x3e5084: 0xc7b40950  lwc1        $f20, 0x950($sp)
    ctx->pc = 0x3e5084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e5088:
    // 0x3e5088: 0x3e00008  jr          $ra
label_3e508c:
    if (ctx->pc == 0x3E508Cu) {
        ctx->pc = 0x3E508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5088u;
        // 0x3e508c: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5090u;
        goto label_fallthrough_0x3e5088;
    }
    ctx->pc = 0x3E5088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5088u;
        // 0x3e508c: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e5088:
    ctx->pc = 0x3E5090u;
}
